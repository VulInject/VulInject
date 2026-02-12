void send_responsedata_on_aux(OPJ_BOOL istcp, auxtrans_param_t auxtrans,
const char cid[], void *data, OPJ_SIZE_T datalen, OPJ_SIZE_T maxlenPerFrame)
{
aux_response_param_t *auxresponse;
unsigned int threadId;
pthread_t thread;
int status;

if (istcp) {
if (auxtrans.tcplistensock == -1) {
fprintf(FCGI_stderr,
"Error: error in send_responsedata_on_aux(), tcp listening socket no open\n");
return;
}

auxresponse = gene_auxresponse(istcp, auxtrans, cid, data, datalen,
maxlenPerFrame);

auxresponse->hTh = (HANDLE)_beginthreadex(NULL, 0, &aux_streaming, auxresponse,
0, &threadId);
if (auxresponse->hTh == 0) {
fprintf(FCGI_stderr, "ERROR: pthread_create() %s",
strerror((int)auxresponse->hTh));
}
status = pthread_create(&thread, NULL, &aux_streaming, auxresponse);
if (status != 0) {
fprintf(FCGI_stderr, "ERROR: pthread_create() %s", strerror(status));
}
} else {
fprintf(FCGI_stderr,
"Error: error in send_responsedata_on_aux(), udp not implemented\n");
}
}