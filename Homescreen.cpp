#include "Homescreen.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIPROJECTCALCULATOR::Homescreen form;
	Application::Run(% form);
}