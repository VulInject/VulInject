int
do_lookup(void *data, uint64_t addr, char *buf, size_t buflen, uint64_t *start,
size_t *symlen)
{
dis_buffer_t *db = data;
const char *symbol;
off_t offset;
size_t size;


symbol = dis_tgt_lookup(db->db_tgt, addr, &offset, 0, &size, NULL);

if (buf != NULL)
getsymname(addr, symbol, offset, buf, buflen);

if (start != NULL)
*start = addr - offset;
if (symlen != NULL)
*symlen = size;

if (symbol == NULL)
return (-1);

return (0);
}