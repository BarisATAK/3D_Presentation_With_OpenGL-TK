#pragma once
#include <math.h>
#define PI 3.1415
#define E 2.718
#define BYTE unsigned char

struct CenterOfGravity {
	float x;
	float y;
} c_o_gravity[3];
struct StandardDeviation {
	float x;
	float y;
}stand_dev[3];

float* GaussianCalculate(BYTE* image, int width, int height) {
	float* z_values = new float[width*height];
	float* z_values_1 = new float[width*height];
	float* z_values_2 = new float[width*height];

	/*stand_dev[0].x = 10;
	stand_dev[0].y = 8;
	stand_dev[1].x = 15;
	stand_dev[1].y = 17;
	stand_dev[2].x = 13;
	stand_dev[2].y = 18;

	c_o_gravity[0].x = 89;
	c_o_gravity[0].y = 120;
	c_o_gravity[1].x = 300;
	c_o_gravity[1].y = 350;
	c_o_gravity[2].x = 500;
	c_o_gravity[2].y = 200;
*/
	float intersection_1 = (c_o_gravity[0].x + c_o_gravity[1].x) / 2;
	float intersection_2 = (c_o_gravity[1].x + c_o_gravity[2].x) / 2;
	float intersection_3 = (c_o_gravity[2].x + c_o_gravity[0].x) / 2;

	float multiplier_1 = 1;// 1 / sqrt(2 * PI*(pow(stand_dev[0].x, 2) + pow(stand_dev[0].y, 2)));
	float multiplier_2 = 1;// 1 / sqrt(2 * PI*(pow(stand_dev[1].x, 2) + pow(stand_dev[1].y, 2)));
	float multiplier_3 = 1;// 1 / sqrt(2 * PI*(pow(stand_dev[2].x, 2) + pow(stand_dev[2].y, 2)));

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {

			z_values[y*width + x] = multiplier_1 * pow(E, -1 * (pow(x - c_o_gravity[0].x, 2) / (2 * pow(stand_dev[0].x, 2)) + pow(y - c_o_gravity[0].y, 2) / (2 * pow(stand_dev[0].y, 2))));
			z_values_1[y*width + x] = multiplier_2 * pow(E, -1 * (pow(x - c_o_gravity[1].x, 2) / (2 * pow(stand_dev[1].x, 2)) + pow(y - c_o_gravity[1].y, 2) / (2 * pow(stand_dev[1].y, 2))));
			z_values_2[y*width + x] = multiplier_3 * pow(E, -1 * (pow(x - c_o_gravity[2].x, 2) / (2 * pow(stand_dev[2].x, 2)) + pow(y - c_o_gravity[2].y, 2) / (2 * pow(stand_dev[2].y, 2))));

			if (fabs(z_values_1[y*width + x] - intersection_1) < fabs(z_values[y*width + x] - intersection_1)) {//oklit distance
				z_values[y*width + x] = z_values_1[y*width + x];//z_values_1 e yakýnsa z_values'ý deðiþtir.
			}//else ise biþey yapma
			if (fabs(z_values_2[y*width + x] - intersection_2) < fabs(z_values[y*width + x] - intersection_2)) {//oklit distance
				z_values[y*width + x] = z_values_2[y*width + x];//z_values_1 e yakýnsa z_values'ý deðiþtir.
			}//else ise biþey yapma
			if (fabs(z_values_2[y*width + x] - intersection_3) < fabs(z_values[y*width + x] - intersection_3)) {//oklit distance
				z_values[y*width + x] = z_values_2[y*width + x];//z_values_1 e yakýnsa z_values'ý deðiþtir.
			}//else ise biþey yapma
		}
	}

	delete[] z_values_1;
	delete[] z_values_2;

	return z_values;
}


