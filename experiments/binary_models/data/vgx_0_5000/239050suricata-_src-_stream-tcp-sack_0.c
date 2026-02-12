static int Insert(TcpStream *stream, struct TCPSACK *tree, uint32_t le, uint32_t re)
{
SCLogDebug("inserting: %u-%u", le, re);

struct StreamTcpSackRecord *sa = StreamTcpSackRecordAlloc();
if (unlikely(sa == NULL))
return -1;
sa->le = le;
sa->re = re;
struct StreamTcpSackRecord *res = TCPSACK_RB_INSERT(tree, sa);
if (res) {

SCLogDebug("* insert failed: exact match in tree with %p %u/%u", res, res->le, res->re);
StreamTcpSackRecordFree(sa);
return 0;
}
stream->sack_size += (re - le);
ConsolidateBackward(stream, tree, sa);
ConsolidateFwd(stream, tree, sa);
return 0;
}