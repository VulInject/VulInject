static void web_server_accept(SOCKET lsock, fd_set *set)
{
SOCKET asock;
socklen_t clientLen;
struct sockaddr_storage clientAddr;
char errorBuffer[ERROR_BUFFER_LEN];

if (lsock != INVALID_SOCKET && FD_ISSET(lsock, set)) {
clientLen = sizeof(clientAddr);
asock = accept(lsock, (struct sockaddr *)&clientAddr,
&clientLen);
if (asock == INVALID_SOCKET) {
strerror_r(errno, errorBuffer, ERROR_BUFFER_LEN);
UpnpPrintf(UPNP_INFO, MSERV, __FILE__, __LINE__,
"miniserver: Error in accept(): %s\n",
errorBuffer);
} else {
schedule_request_job(asock,
(struct sockaddr *)&clientAddr);
}
}
}