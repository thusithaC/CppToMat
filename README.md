# CppToMat
Use Matlab engine to transfer data from native C++ app to Matlab and optionally run Matlab commands

Maintained by: Thusitha Chandrapala : tnc(at)connect.ust.hk, based on work by Zhao Yu

---------------------
Source code for using Matlab engine through a native CPP program. 
You can open a matlab prompt, run any commands and transfer data in/out from a native CPP program. 
Check the main() function for example usage.


Tested in Windows, and linux. 

To build:
include: %matlabroot%extern\include

link libraries:
libmex
libmx
libeng

Link library path(For Windows) : %matlabroot%extern\extern\lib\win32\microsoft
