void
plat_fill_mc(pnode_t nodeid)
{
int board;
int memnode;
struct {
uint64_t	addr;
uint64_t	size;
} mem_range;

if (prom_getprop(nodeid, "board#", (caddr_t)&board) < 0) {
panic("Can not find board# property in mc node %x", nodeid);
}
if (prom_getprop(nodeid, "sb-mem-ranges", (caddr_t)&mem_range) < 0) {
panic("Can not find sb-mem-ranges property in mc node %x",
nodeid);
}
memnode = mem_range.addr >> OPL_MC_MEMBOARD_SHIFT;
plat_assign_lgrphand_to_mem_node(board, memnode);
}