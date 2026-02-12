static int try_read_node(const struct ubifs_info *c, void *buf, int type,
int len, int lnum, int offs)
{
int err, node_len;
struct ubifs_ch *ch = buf;
uint32_t crc, node_crc;

dbg_io("LEB %d:%d, %s, length %d", lnum, offs, dbg_ntype(type), len);

err = ubifs_leb_read(c, lnum, buf, offs, len, 1);
if (err) {
ubifs_err(c, "cannot read node type %d from LEB %d:%d, error %d",
type, lnum, offs, err);
return err;
}

if (le32_to_cpu(ch->magic) != UBIFS_NODE_MAGIC)
return 0;

if (ch->node_type != type)
return 0;

node_len = le32_to_cpu(ch->len);
if (node_len != len)
return 0;

if (type == UBIFS_DATA_NODE && c->no_chk_data_crc && !c->mounting &&
!c->remounting_rw)
return 1;

crc = crc32(UBIFS_CRC32_INIT, buf + 8, node_len - 8);
node_crc = le32_to_cpu(ch->crc);
if (crc != node_crc)
return 0;

return 1;
}