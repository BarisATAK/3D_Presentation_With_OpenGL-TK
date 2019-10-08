#pragma once

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#define DEFAULT_ZOOM 100
#define DEFAULT_CAM_POS 1000

using namespace System::Windows::Forms;

// Colors
float blue1, green1, red1;
float blue2, green2, red2;
float blue3, green3, red3;
float blue4, green4, red4;

// Camera
float camera_pos = DEFAULT_CAM_POS;

// Perspective
float nearest_point  = 1.0f;
float furthest_point = DEFAULT_CAM_POS + 15000.0f;

// Translate
float translated_x = 0;
float translated_y = 0;

// Rotate
float rotAngle_x = 0.0f;
float rotAngle_y = 0.0f;

// Scale
float scale_x = 1.0f;
float scale_y = 1.0f;
float scale_z = 1.0f;

// Gaussian Z
float factor = 1;


class OpenGL
{
	public:
		bool InitGL(GLvoid)										// All setup for opengl goes here
		{
			glShadeModel(GL_SMOOTH);							// Enable smooth shading
			glClearColor(0.0f, 0.0f, 0.0f, 0.5f);				// Black background
			glClearDepth(1.0f);									// Depth buffer setup
			glEnable(GL_DEPTH_TEST);							// Enables depth testing
			glDepthFunc(GL_LEQUAL);								// The type of depth testing to do
			glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	// Really nice perspective calculations
			return TRUE;										// Initialisation went ok
		}

		void ReSizeGLScene(int glWidth, int glHeight)		// Resize and initialise the gl window
		{
			if (glHeight == 0)										// Prevent A Divide By Zero By
			{
				glHeight = 1;										// Making Height Equal One
			}

			glViewport(0, 0, glWidth, glHeight);						// Reset The Current Viewport

			glMatrixMode(GL_PROJECTION);						// Select The Projection Matrix
			glLoadIdentity();									// Reset The Projection Matrix


			// Calculate The Aspect Ratio Of The Window
			gluPerspective(45.0f, (GLfloat)glWidth / (GLfloat)glHeight, nearest_point, furthest_point);

			//Draw_Axis();

			glMatrixMode(GL_MODELVIEW);							// Select The Modelview Matrix
			glLoadIdentity();									// Reset The Modelview Matrix
		}

		//void Draw_Axis(void) { // Draw X,Y,Z axis
		//	glLineWidth(5);
		//
		//	//3D Axis
		//	glBegin(GL_LINES);

		//	//X
		//	glColor3f(1.0f, 0.0f, 0.0f);
		//	glVertex3f(0.0f, 0.0f, 0.0f);
		//	glVertex3f(100.0f, 0.0f, 0.0f);
		//	//Y
		//	glColor3f(0.0f, 1.0f, 0.0f);
		//	glVertex3f(0.0f, 0.0f, 0.0f);
		//	glVertex3f(0.0f, 100.0f, 0.0f);
		//	//Z
		//	glColor3f(0.0f, 0.0f, 1.0f);
		//	glVertex3f(0.0f, 0.0f, 0.0f);
		//	glVertex3f(0.0f, 0.0f, 100.0f);

		//	glEnd();
		//}
		void TranslateFunction(void) {
			glTranslatef(translated_x, 0.0f, 0.0f);
			glTranslatef(0.0f, translated_y, 0.0f);
		}
		void RotateFunction(void) {
			glRotatef(rotAngle_x, 1.0f, 0.0f, 0.0f);
			glRotatef(rotAngle_y, 0.0f, 1.0f, 0.0f);
		}
		void ScaleFunction(void) {
			glScalef(scale_x, scale_y, scale_z);
		}
		void Transformation(void) {
			TranslateFunction();
			RotateFunction();
			//ScaleFunction();
		}

		void Point_Render(BYTE* image, int width, int height, float* z_values) {
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			glLoadIdentity();

			gluLookAt(0, 0, camera_pos, 0, 0, 0, 0, 1, 0);
			Transformation();

			glBegin(GL_POINTS);
			for (int y = 1; y < height; y++) {
				for (int x = 1; x < width; x++) {
					blue1 = image[(height - y)* width * 3 + x * 3 + 0];
					green1 = image[(height - y )* width * 3 + x * 3 + 1];
					red1 = image[(height - y )* width * 3 + x * 3 + 2];

					glColor3f(red1 / 255.0f, green1 / 255.0f, blue1 / 255.0f);
					glVertex3f(x - width / 2, height / 2 - y, z_values[y*width + x] * factor);
				}
			}
			glEnd();

		}

		void Line_Render(BYTE* image, int width, int height, float* z_values)
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			glLoadIdentity();

			gluLookAt(0, 0, camera_pos, 0, 0, 0, 0, 1, 0);
			Transformation();

			glColor3f(1.0f, 1.0f, 1.0f);
			glLineWidth(1.0f);

			glBegin(GL_LINES);
			for (int y = 1; y < height - 1; y++) {	
				for (int x = 1; x < width; x++) {
					glVertex3f(x - width / 2, height / 2 - y, z_values[y*width + x]);							// Point 1
					glVertex3f(x - 1 - width / 2, height / 2 - y, z_values[y*width + x - 1]);					// Point 2

					glVertex3f(x - 1 - width / 2, height / 2 - y, z_values[y*width + x - 1]);					// Point 2
					glVertex3f(x - width / 2, height / 2 - y - 1, z_values[(y + 1)*width + x]);					// Point 3

					glVertex3f(x - width / 2, height / 2 - y - 1, z_values[(y + 1)*width + x]);					// Point 3
					glVertex3f(x - 1 - width / 2, height / 2 - y - 1, z_values[(y + 1)*width + (x - 1)]);		// Point 4

					glVertex3f(x - 1 - width / 2, height / 2 - y - 1, z_values[(y + 1)*width + (x - 1)]);		// Point 4
					glVertex3f(x - 1 - width / 2, height / 2 - y, z_values[y*width + x - 1]);					// Point 2

					glVertex3f(x - width / 2, height / 2 - y, z_values[y*width + x]);							// Point 1
					glVertex3f(x - width / 2, height / 2 - y - 1, z_values[(y + 1)*width + x]);					// Point 3

				}
			}
			glEnd();

		
		}

		void Mesh_Render(BYTE* image, int width, int height, float* z_values)
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			glLoadIdentity();

			gluLookAt(0, 0, camera_pos, 0, 0, 0, 0, 1, 0);
			Transformation();

			glBegin(GL_TRIANGLES);
			for (int y = 1; y < height-1; y++) {	
				for (int x = 1; x < width; x++) {
					//////////////////////////////////////////////////////////////////////
					blue1  = image[(height - y) * width * 3 + x * 3 + 0];
					green1 = image[(height - y) * width * 3 + x * 3 + 1];
					red1   = image[(height - y) * width * 3 + x * 3 + 2];

					blue2  = image[(height - y) * width * 3 + (x - 1) * 3 + 0];
					green2 = image[(height - y) * width * 3 + (x - 1) * 3 + 1];
					red2   = image[(height - y) * width * 3 + (x - 1) * 3 + 2];

					blue3  = image[((height - y) - 1) * width * 3 + x * 3 + 0];
					green3 = image[((height - y) - 1) * width * 3 + x * 3 + 1];
					red3   = image[((height - y) - 1) * width * 3 + x * 3 + 2];
					//////////////////////////////////////////////////////////////////////
					blue4  = image[((height - y) - 1) * width * 3 + (x - 1) * 3 + 0];
					green4 = image[((height - y) - 1) * width * 3 + (x - 1) * 3 + 1];
					red4   = image[((height - y) - 1) * width * 3 + (x - 1) * 3 + 2];
					//////////////////////////////////////////////////////////////////////

					glColor3f(red1 / 255.0f, green1 / 255.0f, blue1 / 255.0f);
					glVertex3f(x - width / 2, height / 2 - y, z_values[y*width + x] * factor);
					glColor3f(red2 / 255.0f, green2 / 255.0f, blue2 / 255.0f);
					glVertex3f(x - 1 - width / 2, height / 2 - y, z_values[y*width + x - 1] * factor);
					glColor3f(red3 / 255.0f, green3 / 255.0f, blue3 / 255.0f);
					glVertex3f(x - width / 2, height / 2 - y - 1, z_values[(y + 1)*width + x] * factor);

					glColor3f(red2 / 255.0f, green2 / 255.0f, blue2 / 255.0f);
					glVertex3f(x - 1 - width / 2, height / 2 - y, z_values[y*width + x - 1] * factor);
					glColor3f(red3 / 255.0f, green3 / 255.0f, blue3 / 255.0f);
					glVertex3f(x - width / 2, height / 2 - y - 1, z_values[(y + 1)*width + x] * factor);
					glColor3f(red4 / 255.0f, green4 / 255.0f, blue4 / 255.0f);
					glVertex3f(x - 1 - width / 2, height / 2 - y - 1, z_values[(y + 1)*width + (x - 1)] * factor);
				}
			}
			glEnd();
		}

		void Delaunay_Render(BYTE* image, int width, int height, float* z_values, int triangles_size, double *noktalar)
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			glLoadIdentity();

			gluLookAt(0, 0, camera_pos, 0, 0, 0, 0, 1, 0);
			Transformation();

			float x, y, z;//gecici kordinatlar ,kodda okunurluðu artýrmak için
			glBegin(GL_TRIANGLES);
			for (int i = 0; i < triangles_size; i++)
			{
				x = noktalar[i * 9 + 0];
				y = noktalar[i * 9 + 1];
				z = noktalar[i * 9 + 2];
				blue2 = image[int(y)*width*3+ int(x) * 3];
				green2 = image[int(y)*width*3+ int(x) * 3 + 1];
				red2 = image[int(y)*width*3 + int(x) * 3 + 2];
				glColor3f(red2 / 255.0f, green2 / 255.0f, blue2 / 255.0f);
				glVertex3f(x - width / 2, y - height / 2, z);

				x = noktalar[i * 9 + 3];
				y = noktalar[i * 9 + 4];
				z = noktalar[i * 9 + 5];
				blue3 = image[int(y)*width*3 + int(x) * 3];
				green3 = image[int(y)*width*3 + int(x) * 3 + 1];
				red3 = image[int(y)*width*3 + int(x) * 3 + 2];
				glColor3f(red3 / 255.0f, green3 / 255.0f, blue3 / 255.0f);
				glVertex3f(x - width / 2, y - height / 2, z);

				x = noktalar[i * 9 + 6];
				y = noktalar[i * 9 + 7];
				z = noktalar[i * 9 + 8];
				blue4 = image[int(y)*width*3 + int(x) * 3 + 0];
				green4 = image[int(y)*width*3 + int(x) * 3 + 1];
				red4 = image[int(y)*width*3 + int(x) * 3 + 2];
				glColor3f(red4 / 255.0f, green4 / 255.0f, blue4 / 255.0f);
				glVertex3f(x-width/2, y-height/2, z);
			}
			glEnd();
		}

		void Draw_Shape_Render(BYTE* image, int width, int height, float* z_values, int* pointArray, int glWidth, int glHeight, int pointSize) {
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			glLoadIdentity();

			gluLookAt(0, 0, camera_pos, 0, 0, 0, 0, 1, 0);
			Transformation();

			glLineWidth(10);

			glBegin(GL_LINES);

			for (int i = 0; i < pointSize / 2 - 1; i++) {
				glColor3f(0.0f, 0.0f, 1.0f);
				glVertex3f(pointArray[2 * i] - glWidth / 2, glHeight / 2 - pointArray[2 * i + 1], 0.0f);
				glVertex3f(pointArray[2 * i + 2] - glWidth / 2, glHeight / 2 - pointArray[2 * i + 3], 0.0f);
			}

			glVertex3f(pointArray[0] - glWidth / 2, glHeight / 2 - pointArray[1], 0.0f);
			glVertex3f(pointArray[pointSize - 2] - glWidth / 2, glHeight / 2 - pointArray[pointSize - 1], 0.0f);
			glEnd();


			glBegin(GL_POINTS);
			for (int y = 1; y < height; y++) {
				for (int x = 1; x < width; x++) {
					blue1 = image[(height - y) * width * 3 + x * 3 + 0];
					green1 = image[(height - y) * width * 3 + x * 3 + 1];
					red1 = image[(height - y) * width * 3 + x * 3 + 2];

					glColor3f(red1 / 255.0f, green1 / 255.0f, blue1 / 255.0f);
					glVertex3f(x - width / 2, height / 2 - y, z_values[y*width + x] * factor);
				}
			}
			glEnd();

		}

};