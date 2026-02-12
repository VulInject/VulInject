
((insn)->next_byte + sizeof(t) + n <= (insn)->end_kaddr)

({ t r = get_unaligned((t *)(insn)->next_byte); (insn)->next_byte += sizeof(t); leXX_to_cpu(t, r); })

({ t r = get_unaligned((t *)(insn)->next_byte + n); leXX_to_cpu(t, r); })

({ if (unlikely(!validate_next(t, insn, 0))) goto err_out; __get_next(t, insn); })

({ if (unlikely(!validate_next(t, insn, n))) goto err_out; __peek_nbyte_next(t, insn, n); })



void insn_init(struct insn *insn, const void *kaddr, int buf_len, int x86_64)
{

if (buf_len > MAX_INSN_SIZE)
buf_len = MAX_INSN_SIZE;

memset(insn, 0, sizeof(*insn));
insn->kaddr = kaddr;
insn->end_kaddr = kaddr + buf_len;
insn->next_byte = kaddr;
insn->x86_64 = x86_64 ? 1 : 0;
insn->opnd_bytes = 4;
if (x86_64)
insn->addr_bytes = 8;
else
insn->addr_bytes = 4;
}