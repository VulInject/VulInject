static void rtrs_srv_path_up(struct rtrs_srv_path *srv_path)
{
struct rtrs_srv_sess *srv = srv_path->srv;
struct rtrs_srv_ctx *ctx = srv->ctx;
int up;

mutex_lock(&srv->paths_ev_mutex);
up = ++srv->paths_up;
if (up == 1)
ctx->ops.link_ev(srv, RTRS_SRV_LINK_EV_CONNECTED, NULL);
mutex_unlock(&srv->paths_ev_mutex);


srv_path->established = true;
}