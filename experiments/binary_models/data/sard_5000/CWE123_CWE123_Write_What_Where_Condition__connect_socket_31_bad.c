void CWE123_Write_What_Where_Condition__connect_socket_31_bad()
{
    badStruct data;
    linkedList head = { &head, &head };
    /* This simulates a Microsoft-style linked list insertion */
    data.list.next = head.next;
    data.list.prev = head.prev;
    head.next = &data.list;
    head.prev = &data.list;
    {
#ifdef _WIN32
        WSADATA wsaData;
        int wsaDataInit = 0;
#endif
        int recvResult;
        struct sockaddr_in service;
        SOCKET connectSocket = INVALID_SOCKET;
        do
        {
#ifdef _WIN32
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
#endif
            connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
            if (connectSocket == INVALID_SOCKET)
            {
                break;
            }
            memset(&service, 0, sizeof(service));
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = inet_addr(IP_ADDRESS);
            service.sin_port = htons(TCP_PORT);
            if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
            /* Abort on error or the connection was closed, make sure to recv one
             * less char than is in the recv_buf in order to append a terminator */
            /* FLAW: overwrite linked list pointers with data */
            recvResult = recv(connectSocket, (char*)&data, sizeof(data), 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
        }
        while (0);
        if (connectSocket != INVALID_SOCKET)
        {
            CLOSE_SOCKET(connectSocket);
        }
#ifdef _WIN32
        if (wsaDataInit)
        {
            WSACleanup();
        }
#endif
    }
    {
        badStruct dataCopy = data;
        badStruct data = dataCopy;
        /* POTENTIAL FLAW: The following removes 'a' from the list.  Because of the possible overflow this
         * causes a "write-what-where" aka "write4".  It does another write as
         * well.  But this is the prototypical "write-what-where" at least from
         * the Windows perspective.
         *
         * linkedListPrev = a->list->prev  WHAT
         * linkedListNext = a->list->next  WHERE
         * linkedListPrev->next = linkedListNext  "at the address that prev/WHERE points, write
         *                    next/WHAT"
         *                    aka "write-what-where"
         * linkedListNext->prev = linkedListPrev  "at the address that next/WHAT points plus 4
         *                    (because prev is the second field in 'list' hence
         *                    4 bytes away on 32b machines), write prev/WHERE"
         */
        linkedListPrev = data.list.prev;
        linkedListNext = data.list.next;
        linkedListPrev->next = linkedListNext;
        linkedListNext->prev = linkedListPrev;
    }
}
