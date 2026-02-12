int
pqGetlineAsync3(PGconn *conn, char *buffer, int bufsize)
{
int			msgLength;
int			avail;

if (conn->asyncStatus != PGASYNC_COPY_OUT
&& conn->asyncStatus != PGASYNC_COPY_BOTH)
return -1;				


msgLength = getCopyDataMessage(conn);
if (msgLength < 0)
return -1;				
if (msgLength == 0)
return 0;				


conn->inCursor += conn->copy_already_done;
avail = msgLength - 4 - conn->copy_already_done;
if (avail <= bufsize)
{

memcpy(buffer, &conn->inBuffer[conn->inCursor], avail);

conn->inStart = conn->inCursor + avail;

conn->copy_already_done = 0;
return avail;
}
else
{

memcpy(buffer, &conn->inBuffer[conn->inCursor], bufsize);

conn->copy_already_done += bufsize;
return bufsize;
}
}