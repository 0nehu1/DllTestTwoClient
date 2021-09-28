#pragma once
#include <afxsock.h>
class CConnectSocket :
    public CSocket
{
public:
    virtual void AFX_EXT_CLASS OnClose(int nErrorCode);
    virtual void AFX_EXT_CLASS OnReceive(int nErrorCode);
};

