void CWE506_Embedded_Malicious_Code__w32_email_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            struct sockaddr_in service;
            struct hostent *hostIP;
            SOCKET connectSocket = INVALID_SOCKET;
            char recBuffer[4096] = "";
            char msgBuffer[255] = "";
            do
            {
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
                connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (connectSocket == INVALID_SOCKET)
                {
                    break;
                }
                hostIP = gethostbyname(MAIL_SERVER);
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr = *((struct in_addr*)*hostIP->h_addr_list);
                service.sin_port = htons(25);
                if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                /* FLAW: Send an e-mail */
                /* Receive initial response from SMTP server */
                if (recv(connectSocket, recBuffer, sizeof(recBuffer), 0) <= 0)
                {
                    break;
                }
                /* Send HELO */
                sprintf(msgBuffer, "HELO %s%s", MAIL_SERVER, CRLF);
                if (send(connectSocket, msgBuffer, strlen(msgBuffer), 0) <= 0)
                {
                    break;
                }
                if (recv(connectSocket, recBuffer, sizeof(recBuffer), 0) <= 0)
                {
                    break;
                }
                /* Send MAIL FROM: <sender@mydomain.com> */
                sprintf(msgBuffer, "MAIL FROM:<%s>%s", "sender@example.com", CRLF);
                if (send(connectSocket, msgBuffer, strlen(msgBuffer), 0) <= 0)
                {
                    break;
                }
                if (recv(connectSocket, recBuffer, sizeof(recBuffer), 0) <= 0)
                {
                    break;
                }
                /* Send RCPT TO: <receiver@domain.com> */
                sprintf(msgBuffer, "RCPT TO:<%s>%s", "receiver@example.com", CRLF);
                if (send(connectSocket, msgBuffer, strlen(msgBuffer), 0) <= 0)
                {
                    break;
                }
                if (recv(connectSocket, recBuffer, sizeof(recBuffer), 0) <= 0)
                {
                    break;
                }
                /* Send DATA */
                sprintf(msgBuffer, "DATA%s", CRLF);
                if (send(connectSocket, msgBuffer, strlen(msgBuffer), 0) <= 0)
                {
                    break;
                }
                if (recv(connectSocket, recBuffer, sizeof(recBuffer), 0) <= 0)
                {
                    break;
                }
                sprintf(msgBuffer, "%s%s", "Shhh, I'm sending some bad stuff!", CRLF);
                if (send(connectSocket, msgBuffer, strlen(msgBuffer), 0) <= 0)
                {
                    break;
                }
                /* Send blank line and a period */
                sprintf(msgBuffer, "%s.%s", CRLF, CRLF);
                if (send(connectSocket, msgBuffer, strlen(msgBuffer), 0) <= 0)
                {
                    break;
                }
                if (recv(connectSocket, recBuffer, sizeof(recBuffer), 0) <= 0)
                {
                    break;
                }
                /* Send QUIT */
                sprintf(msgBuffer, "QUIT%s", CRLF);
                if (send(connectSocket, msgBuffer, strlen(msgBuffer), 0) <= 0)
                {
                    break;
                }
                if (recv(connectSocket, recBuffer, sizeof(recBuffer), 0) <= 0)
                {
                    break;
                }
            }
            while (0);
            if (connectSocket != INVALID_SOCKET)
            {
                closesocket(connectSocket);
            }
            if (wsaDataInit)
            {
                WSACleanup();
            }
        }
    }
}
