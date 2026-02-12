int
bus_space_map(bus_space_tag_t t, bus_addr_t a, bus_size_t s, int f,
bus_space_handle_t *hp)
{
const bus_space_tag_t t0 = t;
int ret;

_BS_PRECALL(t, sparc_bus_map);
ret = _BS_CALL(t, sparc_bus_map)(t, t0, a, s, f, hp);
_BS_POSTCALL;
if(s == 0) {
char buf[128];
bus_space_render_tag(t, buf, sizeof buf);
printf("\n********** bus_space_map: requesting "
"zero-length mapping on bus %p:%s",
t, buf);
}
hp->bh_flags = 0;
if (ret == 0) {
hp->bh_size = s;
hp->bh_tag = t0;
} else {
hp->bh_size = 0;
hp->bh_tag = NULL;
}
return (ret);
}