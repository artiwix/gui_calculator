#include "Calculator.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ ) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	untilted2::Calculator form;
	Application::Run(% form);
}
