#include "WindowsForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OpenGLonWindowsForm::WindowsForm Form;
	Application::Run(%Form);	
}
