#include <ShlObj.h> 
#include <windows.h> 
#include <stdio.h>

void CFilePicker() {
    TCHAR szPathName[MAX_PATH];
    BROWSEINFO bInfo = {0 };
    bInfo.hwndOwner = GetForegroundWindow();
    bInfo.lpszTitle = TEXT("����ļ���");
    bInfo.pidlRoot = NULL;
    bInfo.ulFlags = BIF_BROWSEINCLUDEFILES | BIF_EDITBOX| BIF_USENEWUI |
        BIF_UAHINT/*��TIPS��ʾ*/ | BIF_NONEWFOLDERBUTTON/*�����½��ļ��а�ť*/;
    LPITEMIDLIST lpDlist;
    lpDlist = SHBrowseForFolder(&bInfo);
    if (lpDlist != NULL)
    {
        SHGetPathFromIDList(lpDlist, szPathName);
        MessageBox(NULL, szPathName, L"Dir Name", MB_OK);
    }
    else
    {
        printf("user cancle\n");
    }
}