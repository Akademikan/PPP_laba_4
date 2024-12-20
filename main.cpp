#include "ConnectWindow.h"
#include "MainWindow.h"


using namespace System;
using namespace Laba_PPP_4;

[STAThreadAttribute]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // Создание и запуск формы
    Laba_PPP_4::ConnectWindow^ connectWindow = gcnew Laba_PPP_4::ConnectWindow();
    Application::Run(connectWindow);
    return 0;
}