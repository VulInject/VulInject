struct kroute_node *
kroute_find(const struct in6_addr *prefix, u_int8_t prefixlen, u_int8_t prio)
{
struct kroute_node	s;
struct kroute_node	*kn, *tmp;

s.r.prefix = *prefix;
s.r.prefixlen = prefixlen;
s.r.priority = prio;

kn = RB_FIND(kroute_tree, &krt, &s);
if (kn && prio == RTP_ANY) {
tmp = RB_PREV(kroute_tree, &krt, kn);
while (tmp) {
if (kroute_compare(&s, tmp) == 0)
kn = tmp;
else
break;
tmp = RB_PREV(kroute_tree, &krt, kn);
}
}
return (kn);
}