int zergpool_init() {

if (!zergpool_socket_names) return 0;

struct uwsgi_string_list *zpsn = zergpool_socket_names;
while(zpsn) {
char *colon = strchr(zpsn->value, ':');
if (!colon) {
uwsgi_log("invalid zergpool syntax: %s\n", zpsn->value);
exit(1);
}
*colon = 0;
add_zergpool_socket(zpsn->value, colon+1);
*colon = ':';
zpsn = zpsn->next;		
}

if (register_gateway("uWSGI zergpool", zergpool_loop, NULL) == NULL) {
uwsgi_log("unable to register the zergpool gateway\n");
exit(1);
}

return 0;
}


struct uwsgi_plugin zergpool_plugin = {

.name = "zergpool",
.options = zergpool_options,
.init = zergpool_init,
};