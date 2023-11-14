#include "Tutylka.h"
using namespace kursova_Tselin;
[STAThreadAttribute]
int main(array<System::String^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Tutylka());
	return 0;
}
