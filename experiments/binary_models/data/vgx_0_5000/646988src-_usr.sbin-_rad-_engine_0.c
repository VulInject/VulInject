void			 update_iface(uint32_t);
void			 remove_iface(uint32_t);
struct engine_iface	*find_engine_iface_by_id(uint32_t);
void			 iface_timeout(int, short, void *);

struct rad_conf		*engine_conf;
static struct imsgev	*iev_frontend;
static struct imsgev	*iev_main;
struct sockaddr_in6	 all_nodes;

void
engine_sig_handler(int sig, short event, void *arg)
{


switch (sig) {
case SIGINT:
case SIGTERM:
engine_shutdown();
default:
fatalx("unexpected signal");
}
}