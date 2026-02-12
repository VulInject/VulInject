static void xgene_cle_enable_ptree(struct xgene_enet_pdata *pdata,
struct xgene_enet_cle *cle)
{
struct xgene_cle_ptree *ptree = &cle->ptree;
void __iomem *addr, *base = cle->base;
u32 offset = CLE_PORT_OFFSET;
u32 i;


ptree->start_pkt += cle->jump_bytes;
for (i = 0; i < cle->parsers; i++) {
if (cle->active_parser != PARSER_ALL)
addr = base + cle->active_parser * offset;
else
addr = base + (i * offset);

iowrite32(ptree->start_node & 0x3fff, addr + SNPTR0);
iowrite32(ptree->start_pkt & 0x1ff, addr + SPPTR0);
}
}