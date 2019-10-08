#pragma once
#include <Windows.h>
#include <atlstr.h>
#include "OpenGL.h"
#include "FileProcesses.h"
#include "Delaunay.h"
#include "Gaussian.h"
#include <vector>

std::vector<double> coords;
std::vector<int> pointsForLines_X;
std::vector<int> pointsForLines_Y;

namespace OpenGLonWindowsForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WindowsForm
	/// </summary>
	public ref class WindowsForm : public System::Windows::Forms::Form
	{
	public:
		WindowsForm(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WindowsForm()
		{
			if (components)
			{
				delete components;
			}
	
		}

	protected:


	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Button^  All_default;
	private: System::Windows::Forms::Button^  Zoom_default;
	private: System::Windows::Forms::Timer^  timer3;
	private: OpenTK::GLControl^  glControl1;
	private: System::Windows::Forms::Panel^  Left_panel;
	private: System::Windows::Forms::ImageList^  ımageList1;









private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  pointToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  lineToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  meshToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  openWithGaussianToolStripMenuItem;
private: System::Windows::Forms::Timer^  timer4;
private: System::Windows::Forms::ToolStripMenuItem^  basicMeshToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  delaunayMeshToolStripMenuItem;
private: System::Windows::Forms::Timer^  timer5;
private: System::Windows::Forms::Button^  Left_Surface;

private: System::Windows::Forms::Button^  Front_Surface;
private: System::Windows::Forms::Button^  Back_Surface;
private: System::Windows::Forms::Button^  Top_Surface;
private: System::Windows::Forms::Button^  Buttom_Surface;
private: System::Windows::Forms::Button^  Right_Surface;
private: System::Windows::Forms::Panel^  GaussianPanel;

private: System::Windows::Forms::Button^  CalculateGaussian;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::GroupBox^  groupBox_peaks;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Label^  factor_label;
private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
private: System::Windows::Forms::Label^  peakLabel_X_1;
private: System::Windows::Forms::Label^  peakLabel_Y_1;
private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
private: System::Windows::Forms::Label^  peakLabel_Y_3;
private: System::Windows::Forms::Label^  peakLabel_X_2;
private: System::Windows::Forms::Label^  peakLabel_Y_2;
private: System::Windows::Forms::Label^  peakLabel_X_3;
private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  stanDev_Y_3;
private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
private: System::Windows::Forms::Label^  stanDev_Y_2;
private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
private: System::Windows::Forms::Label^  stanDev_X_3;
private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
private: System::Windows::Forms::Label^  stanDev_X_2;
private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Button^  Measure;
private: System::Windows::Forms::Button^  MeasureStopped;
private: System::Windows::Forms::Timer^  timer6;




private: System::Windows::Forms::Timer^  timerControl;





	private:




	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(WindowsForm::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->All_default = (gcnew System::Windows::Forms::Button());
			this->ımageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->Zoom_default = (gcnew System::Windows::Forms::Button());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->glControl1 = (gcnew OpenTK::GLControl());
			this->Left_panel = (gcnew System::Windows::Forms::Panel());
			this->Buttom_Surface = (gcnew System::Windows::Forms::Button());
			this->Top_Surface = (gcnew System::Windows::Forms::Button());
			this->MeasureStopped = (gcnew System::Windows::Forms::Button());
			this->Back_Surface = (gcnew System::Windows::Forms::Button());
			this->Measure = (gcnew System::Windows::Forms::Button());
			this->Front_Surface = (gcnew System::Windows::Forms::Button());
			this->Left_Surface = (gcnew System::Windows::Forms::Button());
			this->Right_Surface = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openWithGaussianToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pointToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->meshToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->basicMeshToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->delaunayMeshToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->GaussianPanel = (gcnew System::Windows::Forms::Panel());
			this->CalculateGaussian = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->groupBox_peaks = (gcnew System::Windows::Forms::GroupBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->factor_label = (gcnew System::Windows::Forms::Label());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->peakLabel_X_1 = (gcnew System::Windows::Forms::Label());
			this->peakLabel_Y_1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->peakLabel_Y_3 = (gcnew System::Windows::Forms::Label());
			this->peakLabel_X_2 = (gcnew System::Windows::Forms::Label());
			this->peakLabel_Y_2 = (gcnew System::Windows::Forms::Label());
			this->peakLabel_X_3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->stanDev_Y_3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->stanDev_Y_2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->stanDev_X_3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->stanDev_X_2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerControl = (gcnew System::Windows::Forms::Timer(this->components));
			this->Left_panel->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->GaussianPanel->SuspendLayout();
			this->panel5->SuspendLayout();
			this->groupBox_peaks->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &WindowsForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &WindowsForm::timer2_Tick);
			// 
			// All_default
			// 
			this->All_default->Cursor = System::Windows::Forms::Cursors::Hand;
			this->All_default->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->All_default->ImageKey = L"icons8-collapse-24.png";
			this->All_default->ImageList = this->ımageList1;
			this->All_default->Location = System::Drawing::Point(-2, -2);
			this->All_default->Name = L"All_default";
			this->All_default->Size = System::Drawing::Size(45, 38);
			this->All_default->TabIndex = 11;
			this->All_default->UseVisualStyleBackColor = true;
			this->All_default->Click += gcnew System::EventHandler(this, &WindowsForm::All_default_Click);
			// 
			// ımageList1
			// 
			this->ımageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ımageList1.ImageStream")));
			this->ımageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->ımageList1->Images->SetKeyName(0, L"icons8-collapse-24.png");
			this->ımageList1->Images->SetKeyName(1, L"icons8-zoom-to-actual-size-24 (1).png");
			this->ımageList1->Images->SetKeyName(2, L"BackViewOfCube.png");
			this->ımageList1->Images->SetKeyName(3, L"BottomViewOfCube.png");
			this->ımageList1->Images->SetKeyName(4, L"FrontViewOfCube.png");
			this->ımageList1->Images->SetKeyName(5, L"LeftViewOfCube.png");
			this->ımageList1->Images->SetKeyName(6, L"RightViewOfCube.png");
			this->ımageList1->Images->SetKeyName(7, L"TopViewOfCube.png");
			this->ımageList1->Images->SetKeyName(8, L"icons8-eye-30 (2).png");
			this->ımageList1->Images->SetKeyName(9, L"Measure.png");
			this->ımageList1->Images->SetKeyName(10, L"MeasureStop.png");
			// 
			// Zoom_default
			// 
			this->Zoom_default->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Zoom_default->ImageKey = L"icons8-zoom-to-actual-size-24 (1).png";
			this->Zoom_default->ImageList = this->ımageList1;
			this->Zoom_default->Location = System::Drawing::Point(-2, 42);
			this->Zoom_default->Name = L"Zoom_default";
			this->Zoom_default->Size = System::Drawing::Size(45, 38);
			this->Zoom_default->TabIndex = 16;
			this->Zoom_default->UseVisualStyleBackColor = true;
			this->Zoom_default->Click += gcnew System::EventHandler(this, &WindowsForm::Zoom_default_Click);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &WindowsForm::timer3_Tick);
			// 
			// glControl1
			// 
			this->glControl1->BackColor = System::Drawing::Color::Black;
			this->glControl1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->glControl1->Cursor = System::Windows::Forms::Cursors::Default;
			this->glControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->glControl1->Location = System::Drawing::Point(52, 31);
			this->glControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->glControl1->Name = L"glControl1";
			this->glControl1->Size = System::Drawing::Size(1463, 721);
			this->glControl1->TabIndex = 0;
			this->glControl1->VSync = false;
			this->glControl1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &WindowsForm::glControl1_MouseClick);
			this->glControl1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &WindowsForm::glControl1_Rotate_MouseDown);
			this->glControl1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &WindowsForm::glControl1_MouseMove);
			this->glControl1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &WindowsForm::glControl1_Rotate_MouseUp);
			this->glControl1->MouseWheel += gcnew System::Windows::Forms::MouseEventHandler(this, &WindowsForm::glControl1_MouseWheel);
			// 
			// Left_panel
			// 
			this->Left_panel->BackColor = System::Drawing::SystemColors::Control;
			this->Left_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Left_panel->Controls->Add(this->Buttom_Surface);
			this->Left_panel->Controls->Add(this->Top_Surface);
			this->Left_panel->Controls->Add(this->MeasureStopped);
			this->Left_panel->Controls->Add(this->Back_Surface);
			this->Left_panel->Controls->Add(this->Measure);
			this->Left_panel->Controls->Add(this->Front_Surface);
			this->Left_panel->Controls->Add(this->Left_Surface);
			this->Left_panel->Controls->Add(this->Right_Surface);
			this->Left_panel->Controls->Add(this->Zoom_default);
			this->Left_panel->Controls->Add(this->All_default);
			this->Left_panel->Location = System::Drawing::Point(0, 31);
			this->Left_panel->Name = L"Left_panel";
			this->Left_panel->Size = System::Drawing::Size(45, 721);
			this->Left_panel->TabIndex = 46;
			// 
			// Buttom_Surface
			// 
			this->Buttom_Surface->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Buttom_Surface->ImageKey = L"BottomViewOfCube.png";
			this->Buttom_Surface->ImageList = this->ımageList1;
			this->Buttom_Surface->Location = System::Drawing::Point(-2, 300);
			this->Buttom_Surface->Name = L"Buttom_Surface";
			this->Buttom_Surface->Size = System::Drawing::Size(45, 38);
			this->Buttom_Surface->TabIndex = 22;
			this->Buttom_Surface->UseVisualStyleBackColor = true;
			this->Buttom_Surface->Click += gcnew System::EventHandler(this, &WindowsForm::Buttom_Surface_Click);
			// 
			// Top_Surface
			// 
			this->Top_Surface->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Top_Surface->ImageKey = L"TopViewOfCube.png";
			this->Top_Surface->ImageList = this->ımageList1;
			this->Top_Surface->Location = System::Drawing::Point(-2, 86);
			this->Top_Surface->Name = L"Top_Surface";
			this->Top_Surface->Size = System::Drawing::Size(45, 38);
			this->Top_Surface->TabIndex = 21;
			this->Top_Surface->UseVisualStyleBackColor = true;
			this->Top_Surface->Click += gcnew System::EventHandler(this, &WindowsForm::Top_Surface_Click);
			// 
			// MeasureStopped
			// 
			this->MeasureStopped->Enabled = false;
			this->MeasureStopped->ImageKey = L"MeasureStop.png";
			this->MeasureStopped->ImageList = this->ımageList1;
			this->MeasureStopped->Location = System::Drawing::Point(-2, 388);
			this->MeasureStopped->Name = L"MeasureStopped";
			this->MeasureStopped->Size = System::Drawing::Size(45, 38);
			this->MeasureStopped->TabIndex = 54;
			this->MeasureStopped->UseVisualStyleBackColor = true;
			this->MeasureStopped->Click += gcnew System::EventHandler(this, &WindowsForm::MeasureStopped_Click);
			// 
			// Back_Surface
			// 
			this->Back_Surface->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Back_Surface->ImageKey = L"BackViewOfCube.png";
			this->Back_Surface->ImageList = this->ımageList1;
			this->Back_Surface->Location = System::Drawing::Point(-2, 256);
			this->Back_Surface->Name = L"Back_Surface";
			this->Back_Surface->Size = System::Drawing::Size(45, 38);
			this->Back_Surface->TabIndex = 20;
			this->Back_Surface->UseVisualStyleBackColor = true;
			this->Back_Surface->Click += gcnew System::EventHandler(this, &WindowsForm::Back_Surface_Click);
			// 
			// Measure
			// 
			this->Measure->ImageKey = L"Measure.png";
			this->Measure->ImageList = this->ımageList1;
			this->Measure->Location = System::Drawing::Point(-2, 344);
			this->Measure->Name = L"Measure";
			this->Measure->Size = System::Drawing::Size(45, 38);
			this->Measure->TabIndex = 23;
			this->Measure->UseVisualStyleBackColor = true;
			this->Measure->Click += gcnew System::EventHandler(this, &WindowsForm::Measure_Click);
			// 
			// Front_Surface
			// 
			this->Front_Surface->BackColor = System::Drawing::SystemColors::Control;
			this->Front_Surface->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Front_Surface->ImageKey = L"FrontViewOfCube.png";
			this->Front_Surface->ImageList = this->ımageList1;
			this->Front_Surface->Location = System::Drawing::Point(-2, 130);
			this->Front_Surface->Name = L"Front_Surface";
			this->Front_Surface->Size = System::Drawing::Size(45, 38);
			this->Front_Surface->TabIndex = 19;
			this->Front_Surface->UseVisualStyleBackColor = true;
			this->Front_Surface->Click += gcnew System::EventHandler(this, &WindowsForm::Front_Surface_Click);
			// 
			// Left_Surface
			// 
			this->Left_Surface->BackColor = System::Drawing::SystemColors::Control;
			this->Left_Surface->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Left_Surface->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Left_Surface->ImageKey = L"LeftViewOfCube.png";
			this->Left_Surface->ImageList = this->ımageList1;
			this->Left_Surface->Location = System::Drawing::Point(-2, 174);
			this->Left_Surface->Name = L"Left_Surface";
			this->Left_Surface->Size = System::Drawing::Size(45, 32);
			this->Left_Surface->TabIndex = 17;
			this->Left_Surface->UseVisualStyleBackColor = true;
			this->Left_Surface->Click += gcnew System::EventHandler(this, &WindowsForm::Left_Surface_Click);
			// 
			// Right_Surface
			// 
			this->Right_Surface->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Right_Surface->ImageKey = L"RightViewOfCube.png";
			this->Right_Surface->ImageList = this->ımageList1;
			this->Right_Surface->Location = System::Drawing::Point(-2, 212);
			this->Right_Surface->Name = L"Right_Surface";
			this->Right_Surface->Size = System::Drawing::Size(45, 38);
			this->Right_Surface->TabIndex = 18;
			this->Right_Surface->UseVisualStyleBackColor = true;
			this->Right_Surface->Click += gcnew System::EventHandler(this, &WindowsForm::Right_Surface_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1528, 28);
			this->menuStrip1->TabIndex = 50;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->openWithGaussianToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &WindowsForm::openToolStripMenuItem_Click);
			// 
			// openWithGaussianToolStripMenuItem
			// 
			this->openWithGaussianToolStripMenuItem->Name = L"openWithGaussianToolStripMenuItem";
			this->openWithGaussianToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->openWithGaussianToolStripMenuItem->Text = L"Open with Gaussian";
			this->openWithGaussianToolStripMenuItem->Click += gcnew System::EventHandler(this, &WindowsForm::openWithGaussianToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pointToolStripMenuItem,
					this->lineToolStripMenuItem, this->meshToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(47, 24);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// pointToolStripMenuItem
			// 
			this->pointToolStripMenuItem->AccessibleName = L"";
			this->pointToolStripMenuItem->Enabled = false;
			this->pointToolStripMenuItem->Name = L"pointToolStripMenuItem";
			this->pointToolStripMenuItem->Size = System::Drawing::Size(119, 26);
			this->pointToolStripMenuItem->Text = L"Point";
			this->pointToolStripMenuItem->Click += gcnew System::EventHandler(this, &WindowsForm::pointToolStripMenuItem_Click);
			// 
			// lineToolStripMenuItem
			// 
			this->lineToolStripMenuItem->Enabled = false;
			this->lineToolStripMenuItem->Name = L"lineToolStripMenuItem";
			this->lineToolStripMenuItem->Size = System::Drawing::Size(119, 26);
			this->lineToolStripMenuItem->Text = L"Line";
			this->lineToolStripMenuItem->Click += gcnew System::EventHandler(this, &WindowsForm::lineToolStripMenuItem_Click);
			// 
			// meshToolStripMenuItem
			// 
			this->meshToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->basicMeshToolStripMenuItem,
					this->delaunayMeshToolStripMenuItem
			});
			this->meshToolStripMenuItem->Enabled = false;
			this->meshToolStripMenuItem->Name = L"meshToolStripMenuItem";
			this->meshToolStripMenuItem->Size = System::Drawing::Size(119, 26);
			this->meshToolStripMenuItem->Text = L"Mesh";
			this->meshToolStripMenuItem->Click += gcnew System::EventHandler(this, &WindowsForm::meshToolStripMenuItem_Click);
			// 
			// basicMeshToolStripMenuItem
			// 
			this->basicMeshToolStripMenuItem->Name = L"basicMeshToolStripMenuItem";
			this->basicMeshToolStripMenuItem->Size = System::Drawing::Size(260, 26);
			this->basicMeshToolStripMenuItem->Text = L"Basic Triangularisation";
			this->basicMeshToolStripMenuItem->Click += gcnew System::EventHandler(this, &WindowsForm::basicMeshToolStripMenuItem_Click);
			// 
			// delaunayMeshToolStripMenuItem
			// 
			this->delaunayMeshToolStripMenuItem->Name = L"delaunayMeshToolStripMenuItem";
			this->delaunayMeshToolStripMenuItem->Size = System::Drawing::Size(260, 26);
			this->delaunayMeshToolStripMenuItem->Text = L"Delaunay Triangularisation";
			this->delaunayMeshToolStripMenuItem->Click += gcnew System::EventHandler(this, &WindowsForm::delaunayMeshToolStripMenuItem_Click);
			// 
			// timer4
			// 
			this->timer4->Tick += gcnew System::EventHandler(this, &WindowsForm::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Tick += gcnew System::EventHandler(this, &WindowsForm::timer5_Tick);
			// 
			// GaussianPanel
			// 
			this->GaussianPanel->BackColor = System::Drawing::SystemColors::Control;
			this->GaussianPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->GaussianPanel->Controls->Add(this->CalculateGaussian);
			this->GaussianPanel->Controls->Add(this->panel5);
			this->GaussianPanel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GaussianPanel->Location = System::Drawing::Point(51, 31);
			this->GaussianPanel->Name = L"GaussianPanel";
			this->GaussianPanel->Size = System::Drawing::Size(511, 284);
			this->GaussianPanel->TabIndex = 51;
			this->GaussianPanel->Visible = false;
			// 
			// CalculateGaussian
			// 
			this->CalculateGaussian->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CalculateGaussian->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->CalculateGaussian->Location = System::Drawing::Point(208, 250);
			this->CalculateGaussian->Name = L"CalculateGaussian";
			this->CalculateGaussian->Size = System::Drawing::Size(90, 31);
			this->CalculateGaussian->TabIndex = 53;
			this->CalculateGaussian->Text = L"Calculate";
			this->CalculateGaussian->UseVisualStyleBackColor = true;
			this->CalculateGaussian->Click += gcnew System::EventHandler(this, &WindowsForm::CalculateGaussian_Click);
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->groupBox_peaks);
			this->panel5->Controls->Add(this->groupBox1);
			this->panel5->Location = System::Drawing::Point(3, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(503, 241);
			this->panel5->TabIndex = 52;
			// 
			// groupBox_peaks
			// 
			this->groupBox_peaks->Controls->Add(this->panel3);
			this->groupBox_peaks->Controls->Add(this->panel2);
			this->groupBox_peaks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox_peaks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->groupBox_peaks->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox_peaks->Location = System::Drawing::Point(14, 13);
			this->groupBox_peaks->Name = L"groupBox_peaks";
			this->groupBox_peaks->Size = System::Drawing::Size(210, 201);
			this->groupBox_peaks->TabIndex = 47;
			this->groupBox_peaks->TabStop = false;
			this->groupBox_peaks->Text = L"Peaks";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->factor_label);
			this->panel3->Controls->Add(this->numericUpDown13);
			this->panel3->Location = System::Drawing::Point(5, 151);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(199, 42);
			this->panel3->TabIndex = 1;
			// 
			// factor_label
			// 
			this->factor_label->AutoSize = true;
			this->factor_label->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->factor_label->Location = System::Drawing::Point(4, 10);
			this->factor_label->Name = L"factor_label";
			this->factor_label->Size = System::Drawing::Size(54, 18);
			this->factor_label->TabIndex = 38;
			this->factor_label->Text = L"Factor:";
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Location = System::Drawing::Point(72, 7);
			this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500000, 0, 0, 0 });
			this->numericUpDown13->MinimumSize = System::Drawing::Size(49, 0);
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(49, 22);
			this->numericUpDown13->TabIndex = 37;
			this->numericUpDown13->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown13_ValueChanged);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->numericUpDown1);
			this->panel2->Controls->Add(this->peakLabel_X_1);
			this->panel2->Controls->Add(this->peakLabel_Y_1);
			this->panel2->Controls->Add(this->numericUpDown2);
			this->panel2->Controls->Add(this->peakLabel_Y_3);
			this->panel2->Controls->Add(this->peakLabel_X_2);
			this->panel2->Controls->Add(this->peakLabel_Y_2);
			this->panel2->Controls->Add(this->peakLabel_X_3);
			this->panel2->Controls->Add(this->numericUpDown6);
			this->panel2->Controls->Add(this->numericUpDown3);
			this->panel2->Controls->Add(this->numericUpDown4);
			this->panel2->Controls->Add(this->numericUpDown5);
			this->panel2->Location = System::Drawing::Point(6, 21);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(198, 124);
			this->panel2->TabIndex = 0;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(30, 17);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown1->MinimumSize = System::Drawing::Size(49, 0);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(49, 22);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown1_ValueChanged);
			// 
			// peakLabel_X_1
			// 
			this->peakLabel_X_1->AutoSize = true;
			this->peakLabel_X_1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->peakLabel_X_1->Location = System::Drawing::Point(3, 21);
			this->peakLabel_X_1->Name = L"peakLabel_X_1";
			this->peakLabel_X_1->Size = System::Drawing::Size(21, 18);
			this->peakLabel_X_1->TabIndex = 17;
			this->peakLabel_X_1->Text = L"X:";
			// 
			// peakLabel_Y_1
			// 
			this->peakLabel_Y_1->AutoSize = true;
			this->peakLabel_Y_1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->peakLabel_Y_1->Location = System::Drawing::Point(99, 21);
			this->peakLabel_Y_1->Name = L"peakLabel_Y_1";
			this->peakLabel_Y_1->Size = System::Drawing::Size(21, 18);
			this->peakLabel_Y_1->TabIndex = 18;
			this->peakLabel_Y_1->Text = L"Y:";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(126, 17);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(49, 22);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown2_ValueChanged);
			// 
			// peakLabel_Y_3
			// 
			this->peakLabel_Y_3->AutoSize = true;
			this->peakLabel_Y_3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->peakLabel_Y_3->Location = System::Drawing::Point(99, 94);
			this->peakLabel_Y_3->Name = L"peakLabel_Y_3";
			this->peakLabel_Y_3->Size = System::Drawing::Size(21, 18);
			this->peakLabel_Y_3->TabIndex = 22;
			this->peakLabel_Y_3->Text = L"Y:";
			// 
			// peakLabel_X_2
			// 
			this->peakLabel_X_2->AutoSize = true;
			this->peakLabel_X_2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->peakLabel_X_2->Location = System::Drawing::Point(3, 58);
			this->peakLabel_X_2->Name = L"peakLabel_X_2";
			this->peakLabel_X_2->Size = System::Drawing::Size(21, 18);
			this->peakLabel_X_2->TabIndex = 19;
			this->peakLabel_X_2->Text = L"X:";
			// 
			// peakLabel_Y_2
			// 
			this->peakLabel_Y_2->AutoSize = true;
			this->peakLabel_Y_2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->peakLabel_Y_2->Location = System::Drawing::Point(99, 58);
			this->peakLabel_Y_2->Name = L"peakLabel_Y_2";
			this->peakLabel_Y_2->Size = System::Drawing::Size(21, 18);
			this->peakLabel_Y_2->TabIndex = 20;
			this->peakLabel_Y_2->Text = L"Y:";
			// 
			// peakLabel_X_3
			// 
			this->peakLabel_X_3->AutoSize = true;
			this->peakLabel_X_3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->peakLabel_X_3->Location = System::Drawing::Point(3, 95);
			this->peakLabel_X_3->Name = L"peakLabel_X_3";
			this->peakLabel_X_3->Size = System::Drawing::Size(21, 18);
			this->peakLabel_X_3->TabIndex = 21;
			this->peakLabel_X_3->Text = L"X:";
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(126, 92);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(49, 22);
			this->numericUpDown6->TabIndex = 8;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown6_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(30, 54);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(49, 22);
			this->numericUpDown3->TabIndex = 5;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown3_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(126, 54);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(49, 22);
			this->numericUpDown4->TabIndex = 6;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown4_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(30, 91);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(49, 22);
			this->numericUpDown5->TabIndex = 7;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown5_ValueChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->groupBox1->Location = System::Drawing::Point(274, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(209, 201);
			this->groupBox1->TabIndex = 48;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Standard Deviations";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->stanDev_Y_3);
			this->panel4->Controls->Add(this->numericUpDown11);
			this->panel4->Controls->Add(this->numericUpDown12);
			this->panel4->Controls->Add(this->stanDev_Y_2);
			this->panel4->Controls->Add(this->numericUpDown10);
			this->panel4->Controls->Add(this->stanDev_X_3);
			this->panel4->Controls->Add(this->numericUpDown8);
			this->panel4->Controls->Add(this->numericUpDown9);
			this->panel4->Controls->Add(this->stanDev_X_2);
			this->panel4->Controls->Add(this->numericUpDown7);
			this->panel4->Location = System::Drawing::Point(6, 21);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(197, 174);
			this->panel4->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(99, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 18);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Y:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 18);
			this->label3->TabIndex = 32;
			this->label3->Text = L"X:";
			// 
			// stanDev_Y_3
			// 
			this->stanDev_Y_3->AutoSize = true;
			this->stanDev_Y_3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stanDev_Y_3->Location = System::Drawing::Point(99, 97);
			this->stanDev_Y_3->Name = L"stanDev_Y_3";
			this->stanDev_Y_3->Size = System::Drawing::Size(21, 18);
			this->stanDev_Y_3->TabIndex = 36;
			this->stanDev_Y_3->Text = L"Y:";
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(30, 94);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(49, 22);
			this->numericUpDown11->TabIndex = 29;
			this->numericUpDown11->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown11_ValueChanged);
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(126, 95);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(49, 22);
			this->numericUpDown12->TabIndex = 30;
			this->numericUpDown12->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown12_ValueChanged);
			// 
			// stanDev_Y_2
			// 
			this->stanDev_Y_2->AutoSize = true;
			this->stanDev_Y_2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stanDev_Y_2->Location = System::Drawing::Point(99, 58);
			this->stanDev_Y_2->Name = L"stanDev_Y_2";
			this->stanDev_Y_2->Size = System::Drawing::Size(21, 18);
			this->stanDev_Y_2->TabIndex = 34;
			this->stanDev_Y_2->Text = L"Y:";
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(126, 56);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(49, 22);
			this->numericUpDown10->TabIndex = 28;
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown10_ValueChanged);
			// 
			// stanDev_X_3
			// 
			this->stanDev_X_3->AutoSize = true;
			this->stanDev_X_3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stanDev_X_3->Location = System::Drawing::Point(3, 95);
			this->stanDev_X_3->Name = L"stanDev_X_3";
			this->stanDev_X_3->Size = System::Drawing::Size(21, 18);
			this->stanDev_X_3->TabIndex = 35;
			this->stanDev_X_3->Text = L"X:";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(127, 19);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(49, 22);
			this->numericUpDown8->TabIndex = 26;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown8_ValueChanged);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(30, 56);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(49, 22);
			this->numericUpDown9->TabIndex = 27;
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown9_ValueChanged);
			// 
			// stanDev_X_2
			// 
			this->stanDev_X_2->AutoSize = true;
			this->stanDev_X_2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stanDev_X_2->Location = System::Drawing::Point(3, 60);
			this->stanDev_X_2->Name = L"stanDev_X_2";
			this->stanDev_X_2->Size = System::Drawing::Size(21, 18);
			this->stanDev_X_2->TabIndex = 33;
			this->stanDev_X_2->Text = L"X:";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(30, 19);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->numericUpDown7->MinimumSize = System::Drawing::Size(49, 0);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(49, 22);
			this->numericUpDown7->TabIndex = 25;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &WindowsForm::numericUpDown7_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(36, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 18);
			this->label1->TabIndex = 52;
			this->label1->Text = L"1000";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(1399, 759);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(116, 35);
			this->panel1->TabIndex = 53;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(27, 22);
			this->pictureBox1->TabIndex = 54;
			this->pictureBox1->TabStop = false;
			// 
			// timer6
			// 
			this->timer6->Tick += gcnew System::EventHandler(this, &WindowsForm::timer6_Tick);
			// 
			// timerControl
			// 
			this->timerControl->Tick += gcnew System::EventHandler(this, &WindowsForm::timerControl_Tick);
			// 
			// WindowsForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(1528, 795);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->GaussianPanel);
			this->Controls->Add(this->Left_panel);
			this->Controls->Add(this->glControl1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"WindowsForm";
			this->Text = L"3D Presentation";
			this->Load += gcnew System::EventHandler(this, &WindowsForm::WindowsForm_Load);
			this->Left_panel->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->GaussianPanel->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->groupBox_peaks->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Image variables
		int width, height;
		long size;
		BYTE* image;
		float *z_values;

		// Translate variables
		float startingLoc_x;
		float startingLoc_y;

		// Transformation
		bool hasRotationStarted = false;
		bool hasTranslationStarted = false;
		float cameraPosFactor;

		//Delaunay
		double *points; //her ucgenin x,y,z noktalarını tutmaktadır
		int triangles_size = 0; //toplamda oluşan ucgen sayısı

		// Measure
		bool hasMeasureStarted = false;
		int* pointArray;
		int pointSize;

	//Render Real Z
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
		// Default Gaussian Panel
		GaussianPanel->Visible = false;

		// Default Factor
		factor = 1;

		// Enable Value
		pointToolStripMenuItem->Enabled = true;
		lineToolStripMenuItem->Enabled = true;
		meshToolStripMenuItem->Enabled = true;

		rotAngle_x = 0;
		rotAngle_y = 0;
		translated_x = 0;
		translated_y = 0;

		CString str;
		LPCTSTR input;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			str = openFileDialog1->FileName;
			input = (LPCTSTR)str;
			image = LoadBMP(width, height, size, input);
		}

		CString str1;
		LPCTSTR input1;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			str1 = openFileDialog1->FileName;
			input1 = (LPCTSTR)str1;
			z_values = Read_Z_Values(input1, size);  //Float Depth
			//z_values = LoadDepth(input1, size);    //Byte Depth
		}

		timer3->Enabled = false;
		timer2->Enabled = false;
		timer5->Enabled = false;
		timer4->Enabled = false;
		timer6->Enabled = false;
		timer1->Enabled = true;

		//WriteToFile(); // Writes to Z values.
	}

	// Point Click
	private: System::Void pointToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		timer3->Enabled = false;
		timer2->Enabled = false;
		timer5->Enabled = false;
		timer4->Enabled = false;
		timer6->Enabled = false;
		timer1->Enabled = true;
	}
	// Line Click
	private: System::Void lineToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = false;
		timer2->Enabled = false;
		timer5->Enabled = false;
		timer4->Enabled = false;
		timer6->Enabled = false;
		timer3->Enabled = true;
	}

	// Mesh Click
	private: System::Void meshToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	// Basic triangularisation
	private: System::Void basicMeshToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = false;
		timer3->Enabled = false;
		timer5->Enabled = false;
		timer4->Enabled = false;
		timer6->Enabled = false;
		timer2->Enabled = true;
	}
	//Delaunay triangularisation
	private: System::Void delaunayMeshToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			for (int i = 0; i < width; i++)
			{
				for (int j = 0; j < height; j++)
				{										//yıgını ters cevirdiği için ilk width.
					coords.push_back((double)i);
					coords.push_back((double)j);
				}

			}
			delaunator::Delaunator d(coords);//ucgenlestirmeyi yap int yap
			points = new double[(d.triangles.size() / 3) * 9];
			triangles_size = d.triangles.size() / 3;
			int sayac = 0;//points bufferında satır atlamak icin
			double x, y;//gecici kordinatları tutuyorum ,okunurlu artırmak için
			for (int i = 0; i < d.triangles.size(); i += 3) {
				//ucgen noktaları ataması
				x = d.coords[2 * d.triangles[i]];//x0
				y = d.coords[2 * d.triangles[i] + 1];//y0
				points[sayac * 9] = x;
				points[sayac * 9 + 1] = y;
				points[sayac * 9 + 2] = z_values[int(y*width + x)];

				x = d.coords[2 * d.triangles[i + 1]];//x0
				y = d.coords[2 * d.triangles[i + 1] + 1];//y0
				points[sayac * 9 + 3] = x;
				points[sayac * 9 + 4] = y;
				points[sayac * 9 + 5] = z_values[int(y*width + x)];


				x = d.coords[2 * d.triangles[i + 2]];//x0
				y = d.coords[2 * d.triangles[i + 2] + 1];//y0
				points[sayac * 9 + 6] = x;
				points[sayac * 9 + 7] = y;
				points[sayac * 9 + 8] = z_values[int(y*width + x)];

				sayac++;
			}

		timer3->Enabled = false;
		timer2->Enabled = false;
		timer1->Enabled = false;
		timer4->Enabled = false;
		timer6->Enabled = false;
		timer5->Enabled = true;
	}
	// Translate and Rotate
	private: System::Void glControl1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		
		if (hasTranslationStarted) {
			glControl1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			translated_x += (float)(e->X - startingLoc_x)*(camera_pos/ (float)DEFAULT_CAM_POS);
			translated_y += (float)(startingLoc_y - e->Y)*(camera_pos / (float)DEFAULT_CAM_POS);
			startingLoc_x = e->X;
			startingLoc_y = e->Y;
		}
		if (hasRotationStarted ){
			// Has been used %25 to reduce mouse sensitivity
			glControl1->Cursor = System::Windows::Forms::Cursors::Hand;
			rotAngle_x += (e->Y - startingLoc_y) / 4; // Move on the y - axis to rotate on the x - axis
			rotAngle_y += (e->X - startingLoc_x) / 4; // Move on the x - axis to rotate on the y - axis
			startingLoc_x = e->X;
			startingLoc_y = e->Y;
		}
	
	}
	private: System::Void glControl1_Rotate_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (!hasMeasureStarted) {
			switch (e->Button) {
			case System::Windows::Forms::MouseButtons::Left:
				hasRotationStarted = true;
				startingLoc_x = e->X;
				startingLoc_y = e->Y;
				break;
			case System::Windows::Forms::MouseButtons::Right:
				hasTranslationStarted = true;
				startingLoc_x = e->X;
				startingLoc_y = e->Y;
				break;
			}
		}
	}
	private: System::Void glControl1_Rotate_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		hasTranslationStarted = false;
		hasRotationStarted    = false;
		glControl1->Cursor    = System::Windows::Forms::Cursors::Default;
	}

	// Scale
	private: System::Void glControl1_MouseWheel(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (image != NULL) {
			if (e->Delta > 0) {
				if (camera_pos > nearest_point) {
					cameraPosFactor = camera_pos * 0.15f;
					camera_pos -= cameraPosFactor;
					label1->Text = camera_pos.ToString("F3");
				}
			}
			else {
				if (camera_pos < furthest_point - DEFAULT_CAM_POS) {
					cameraPosFactor = camera_pos * 0.15f;
					camera_pos += cameraPosFactor;
					label1->Text = camera_pos.ToString("F3");
				}
			}
		}
	}

	// For Point view
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		OpenGL* o_GL;
		o_GL->InitGL();
		o_GL->Point_Render(image, width, height, z_values);
		o_GL->ReSizeGLScene(glControl1->Width, glControl1->Height);
		glControl1->SwapBuffers();
	}
	// For Line view
	private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
		OpenGL* o_GL;
		o_GL->InitGL();
		o_GL->Line_Render(image, width, height, z_values);
		o_GL->ReSizeGLScene(glControl1->Width, glControl1->Height);
		glControl1->SwapBuffers();
	}
	// For Basic Mesh view
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		OpenGL* o_GL;
		o_GL->InitGL();
		o_GL->Mesh_Render(image, width, height, z_values);
		o_GL->ReSizeGLScene(glControl1->Width, glControl1->Height);
		glControl1->SwapBuffers();
	}

	// Gaussian Calculate Click
	private: System::Void CalculateGaussian_Click(System::Object^  sender, System::EventArgs^  e) {
		pointToolStripMenuItem->Enabled = true;
		lineToolStripMenuItem->Enabled = true;
		meshToolStripMenuItem->Enabled = true;
		z_values = GaussianCalculate(image, width, height);
		GaussianPanel->Visible = false;
		timer4->Enabled = true;
	}

	// For Gaussian view
	private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
		OpenGL* o_GL;
		o_GL->InitGL();
		o_GL->Mesh_Render(image, width, height, z_values);
		o_GL->ReSizeGLScene(glControl1->Width, glControl1->Height);
		glControl1->SwapBuffers();
	}

	// For Delaunay Mesh view
	private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) {
		OpenGL* o_GL;
		o_GL->InitGL();
		o_GL->Delaunay_Render(image, width, height, z_values, triangles_size, points);
		o_GL->ReSizeGLScene(glControl1->Width, glControl1->Height);
		glControl1->SwapBuffers();
	}
	
	private: System::Void timer6_Tick(System::Object^  sender, System::EventArgs^  e) {
		OpenGL* o_GL;
		o_GL->InitGL();
		o_GL->Draw_Shape_Render(image, width, height, z_values, pointArray, glControl1->Width, glControl1->Height, pointSize);
		o_GL->ReSizeGLScene(glControl1->Width, glControl1->Height);
		glControl1->SwapBuffers();
	}

	// Center Of Gravity For Gaussian
	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown1->Maximum = width;
		c_o_gravity[0].x = (int)numericUpDown1->Value;
	}
	private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown2->Maximum = height;
		c_o_gravity[0].y = (int)numericUpDown2->Value;
	}
	private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown3->Maximum = width;
		c_o_gravity[1].x = (int)numericUpDown3->Value;
	}
	private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown4->Maximum = height;
		c_o_gravity[1].y = (int)numericUpDown4->Value;
	}
	private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown5->Maximum = width;
		c_o_gravity[2].x = (int)numericUpDown5->Value;
	}
	private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown6->Maximum = height;
		c_o_gravity[2].y = (int)numericUpDown6->Value;
	}
	// Standard Deviation For Gaussian
	private: System::Void numericUpDown7_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown7->Maximum = width;
		stand_dev[0].x = (int)numericUpDown7->Value;
	}
	private: System::Void numericUpDown8_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown8->Maximum = height;
		stand_dev[0].y = (int)numericUpDown8->Value;
	}
	private: System::Void numericUpDown9_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown9->Maximum = width;
		stand_dev[1].x = (int)numericUpDown9->Value;
	}
	private: System::Void numericUpDown10_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown10->Maximum = height;
		stand_dev[1].y = (int)numericUpDown10->Value;
	}
	private: System::Void numericUpDown11_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown11->Maximum = width;
		stand_dev[2].x = (int)numericUpDown11->Value;
	}
	private: System::Void numericUpDown12_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown12->Maximum = height;
		stand_dev[2].y = (int)numericUpDown12->Value;
	}

	//Gaussian Factor
	private: System::Void numericUpDown13_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown13->Maximum = 10000;
		factor = (int)numericUpDown13->Value;
	}
			
	//Default All
	private: System::Void All_default_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = DEFAULT_CAM_POS.ToString();
		camera_pos   = DEFAULT_CAM_POS;
		rotAngle_x   = 0.0f;
		rotAngle_y   = 0.0f;
		translated_x = 0.0f;
		translated_y = 0.0f;
	}

	//Default Zoom
	private: System::Void Zoom_default_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = DEFAULT_CAM_POS.ToString();
		camera_pos   = DEFAULT_CAM_POS;
	}

	//Virtual z values with Gaussian 
	private: System::Void openWithGaussianToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		timer3->Enabled = false;
		timer2->Enabled = false;
		timer5->Enabled = false;
		timer4->Enabled = false;
		timer6->Enabled = false;
		timer1->Enabled = false;

		CString str;
		LPCTSTR input;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			str = openFileDialog1->FileName;
			input = (LPCTSTR)str;
			image = LoadBMP(width, height, size, input);
		}
		if(image!=NULL)
			GaussianPanel->Visible = true;
	}

	//Top View Of Cube
	private: System::Void Top_Surface_Click(System::Object^  sender, System::EventArgs^  e) {
		rotAngle_x  = 0.0f;
		rotAngle_y  = 0.0f;
		rotAngle_x += 90.0f;
	}
	//Front View Of Cube
	private: System::Void Front_Surface_Click(System::Object^  sender, System::EventArgs^  e) {
		rotAngle_x = 0.0f;
		rotAngle_y = 0.0f;
	}
	//Left View Of Cube
	private: System::Void Left_Surface_Click(System::Object^  sender, System::EventArgs^  e) {
		rotAngle_x  = 0.0f;
		rotAngle_y  = 0.0f;
		rotAngle_y += 90.0f;
	}
	//Right View Of Cube
	private: System::Void Right_Surface_Click(System::Object^  sender, System::EventArgs^  e) {
		rotAngle_x  = 0.0f;
		rotAngle_y  = 0.0f;
		rotAngle_y -= 90;
	}
	//Back View Of Cube
	private: System::Void Back_Surface_Click(System::Object^  sender, System::EventArgs^  e) {
		rotAngle_x  = 0.0f;
		rotAngle_y  = 0.0f;
		rotAngle_y += 180.f;
	}
	//Bottom View Of Cube
	private: System::Void Buttom_Surface_Click(System::Object^  sender, System::EventArgs^  e) {
		rotAngle_x  = 0.0f;
		rotAngle_y  = 0.0f;
		rotAngle_x -= 90.f;
	}
private: System::Void Measure_Click(System::Object^  sender, System::EventArgs^  e) {
	Measure->Enabled  = false;
	MeasureStopped->Enabled = true;
	hasMeasureStarted = true;
}

private: System::Void glControl1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (image != NULL) {
		if (hasMeasureStarted) {
			pointsForLines_X.insert(pointsForLines_X.begin(), e->X);
			pointsForLines_Y.insert(pointsForLines_Y.begin(), e->Y);
		}
	}

}
		 //PERSPECTIVE 45 YAPILDI
private: System::Void MeasureStopped_Click(System::Object^  sender, System::EventArgs^  e) {
	Measure->Enabled = true;
	MeasureStopped->Enabled = false;

	hasMeasureStarted = false;

	pointSize = pointsForLines_X.size() + pointsForLines_Y.size();
	pointArray = new int[pointSize];
	for (int i = 0; i < pointSize / 2; i++) {
		pointArray[2 * i]     = pointsForLines_X.at(i);	//x
		pointArray[2 * i + 1] = pointsForLines_Y.at(i);	//y
	}
	timer1->Enabled = false;
	timer2->Enabled = false;
	timer3->Enabled = false;
	timer4->Enabled = false;
	timer5->Enabled = false;

	timer6->Enabled = true;
	pointsForLines_X.clear();
	pointsForLines_Y.clear();
	//delete[] pointArray;
}

private: System::Void timerControl_Tick(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void WindowsForm_Load(System::Object^  sender, System::EventArgs^  e) {
	ToolTip^ explanation = gcnew ToolTip();

	explanation->SetToolTip(All_default, "All Default");
	explanation->SetToolTip(Zoom_default, "Zoom Default");
	explanation->SetToolTip(Top_Surface, "Top View");
	explanation->SetToolTip(Front_Surface, "Front View");
	explanation->SetToolTip(Left_Surface, "Left View");
	explanation->SetToolTip(Right_Surface, "Right View");
	explanation->SetToolTip(Back_Surface, "Back View");
	explanation->SetToolTip(Buttom_Surface, "Bottom View");
	explanation->SetToolTip(Measure, "Start Draw");
	explanation->SetToolTip(MeasureStopped, "Stop Draw");
}
};
}

