void
server_destroy_session(struct session *s)
{
struct client	*c;
struct session	*s_new;
int		 detach_on_destroy;

detach_on_destroy = options_get_number(s->options, "detach-on-destroy");
if (detach_on_destroy == 0)
s_new = server_next_session(s);
else if (detach_on_destroy == 2)
s_new = server_next_detached_session(s);
else
s_new = NULL;
TAILQ_FOREACH(c, &clients, entry) {
if (c->session != s)
continue;
server_client_set_session(c, s_new);
if (s_new == NULL)
c->flags |= CLIENT_EXIT;
}
recalculate_sizes();
}