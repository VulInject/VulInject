static void
m_burst(struct sourceinfo *si, int parc, char *parv[])
{
struct server *s;


if (parc != 1)
return;

s = server_find(me.actual);
if (s != NULL)
handle_eob(s);

if (me.bursting)
{
e_time(burstime, &burstime);

slog(LG_INFO, "m_pong(): finished synching with uplink (%d %s)", (tv2ms(&burstime) > 1000) ? (tv2ms(&burstime) / 1000) : tv2ms(&burstime), (tv2ms(&burstime) > 1000) ? "s" : "ms");

wallops("Finished synchronizing with network in %d %s.", (tv2ms(&burstime) > 1000) ? (tv2ms(&burstime) / 1000) : tv2ms(&burstime), (tv2ms(&burstime) > 1000) ? "s" : "ms");
slog(LG_INFO, "m_pong(): finished synching with uplink");
wallops("Finished synchronizing with network.");

me.bursting = false;
}
}