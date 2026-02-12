static void
svcudp_destroy(SVCXPRT *xprt)
{
struct svcudp_data *su = su_data(xprt);

xprt_unregister(xprt);
if (xprt->xp_sock != INVALID_SOCKET)
(void)closesocket(xprt->xp_sock);
xprt->xp_sock = INVALID_SOCKET;
if (xprt->xp_auth != NULL) {
SVCAUTH_DESTROY(xprt->xp_auth);
xprt->xp_auth = NULL;
}
XDR_DESTROY(&(su->su_xdrs));
mem_free(rpc_buffer(xprt), su->su_iosz);
mem_free((caddr_t)su, sizeof(struct svcudp_data));
mem_free((caddr_t)xprt, sizeof(SVCXPRT));
}