#include <iostream>
#include <Windows.h>
 
using namespace std;

//hora actual en hh : mm : ss
int main(int argc, char* argv[]){
	


    SYSTEMTIME stBuffer;
    char buffer[9];
 
    GetLocalTime(&stBuffer);
    GetTimeFormat(LOCALE_SYSTEM_DEFAULT,
                  TIME_FORCE24HOURFORMAT,
                  &stBuffer, "hh':'mm':'ss",
                  buffer,
                  sizeof(buffer));
    cout<<buffer;
    
    
    return 0;
}
