#include "windows.h"
#include <tchar.h>


#pragma comment(lib, "Urlmon.lib")

int WINAPI _tWinMain(HINSTANCE hinstance,HINSTANCE hprevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
   HRESULT hret = URLDownloadToFile(NULL,
	  _T( "https://s.cctry.com/images/eagle2.png"),
      _T( "F:\\vc.png") , 0, NULL );

   if(hret == S_OK)
   {
	   MessageBox(NULL,_T("SUCEESS"), _T("Tip"), MB_OK);
   }
   else
   {
	    MessageBox(NULL,_T("FAILD"), _T("Tip"), MB_OK);
   }
   return 0;
}