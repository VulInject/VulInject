static enum connect_result wait_for_connection(
struct ipc_server_thread_data *server_thread_data,
OVERLAPPED *lpo)
{
enum connect_result r;
HANDLE waitHandles[2];
DWORD dwWaitResult;

r = queue_overlapped_connect(server_thread_data, lpo);
if (r != CR_CONNECT_PENDING)
return r;

waitHandles[0] = server_thread_data->server_data->hEventStopRequested;
waitHandles[1] = lpo->hEvent;

dwWaitResult = WaitForMultipleObjects(2, waitHandles, FALSE, INFINITE);
switch (dwWaitResult) {
case WAIT_OBJECT_0 + 0:
return CR_SHUTDOWN;

case WAIT_OBJECT_0 + 1:
ResetEvent(lpo->hEvent);
return CR_CONNECTED;

default:
return CR_WAIT_ERROR;
}
}