static __init void boot_init_possible_blades(struct uv_hub_info_s *hub_info)
{
int i, uv_pb = 0;

pr_info("UV: NODE_PRESENT_DEPTH = %d\n", UVH_NODE_PRESENT_TABLE_DEPTH);
for (i = 0; i < UVH_NODE_PRESENT_TABLE_DEPTH; i++) {
unsigned long np;

np = uv_read_local_mmr(UVH_NODE_PRESENT_TABLE + i * 8);
if (np)
pr_info("UV: NODE_PRESENT(%d) = 0x%016lx\n", i, np);

uv_pb += hweight64(np);
}
if (uv_possible_blades != uv_pb)
uv_possible_blades = uv_pb;
}