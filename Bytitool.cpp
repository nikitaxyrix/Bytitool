
#include <iostream>
using namespace std;
#include <ctime>
#include <fstream>
#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#endif // _WIN32
#pragma warning(disable:4996)
int main()
{
    printf("Bytitool for add bytes to dll files for bypass size file protect v. 0.1\n");
    Sleep(1000);
    printf("by Xyrix\n");
    Sleep(2000);
    system("cls");
    printf("Modded Assembly-CSharp.dll file path: ");
    string path;
    cin >> path;
    int orig, mod;
    int all;
    printf("\nOriginal DLL file size in bytes: ");
    cin >> orig;
    printf("\nModded DLL file size in bytes: ");
    cin >> mod;
    all = orig - mod;
    cout << all << endl;
    unsigned char nullChar = 0;
    FILE* lll;
    if ((lll = fopen(path.c_str(), "ab")) == NULL) {
        printf("Не удается открыть файл.\n");
        exit(1);
    }
    for (size_t i = 0; i < all; i++)
    {
        fwrite(&nullChar, 1, 1, lll);
    }
    fclose(lll);

    printf("\nBytes writed to dll\n");

}
