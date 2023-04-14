
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	POS::MainForm form;
	Application::Run(% form);
}

