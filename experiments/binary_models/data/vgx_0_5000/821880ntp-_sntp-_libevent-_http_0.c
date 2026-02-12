static void
name_from_addr(struct sockaddr *sa, ev_socklen_t salen,
char **phost, char **pport)
{
char ntop[NI_MAXHOST];
char strport[NI_MAXSERV];
int ni_result;

ni_result = getnameinfo(sa, salen,
ntop, sizeof(ntop), strport, sizeof(strport),
NI_NUMERICHOST|NI_NUMERICSERV);

if (ni_result != 0) {

if (ni_result == EAI_SYSTEM)
event_err(1, "getnameinfo failed");
else
event_errx(1, "getnameinfo failed: %s", gai_strerror(ni_result));
return;
}
ni_result = fake_getnameinfo(sa, salen,
ntop, sizeof(ntop), strport, sizeof(strport),
NI_NUMERICHOST|NI_NUMERICSERV);
if (ni_result != 0)
return;

*phost = mm_strdup(ntop);
*pport = mm_strdup(strport);
}