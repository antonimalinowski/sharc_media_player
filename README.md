﻿This repo documents my attempt of making a media player from scratch in C++.

Configuring WxWidgets in Visual Studio:

[Project]->properties->C/C++->[All Configurations + All Platforms]->Additional Include Directories:
${WXWIN_path}\include [For me]: D:\sdks\wxwidget3221\include
${WXWIN_path}\include\msvc [For me]: D:\sdks\wxwidget3221\include\msvc

**Apply**

[From Project properties window]->Linker->System:
SubSystem: Windows (/SUBSYSTEM:WINDOWS)

**Apply**

[From Project properties window]->Linker->[Platform: Win32]:
Additional Library Directories: ${WXWIN_path}\lib\vc_lib [For me]: D:\sdks\wxwidget3221\lib\vc_lib

**Apply**

[From Project properties window]->Linker->[Platform: x64]:
Additional Library Directories: ${WXWIN_path}\lib\vc_x64_lib [For me]: D:\sdks\wxwidget3221\lib\vc_x64_lib

**Apply**
