}
EXPORT_SYMBOL(__kfifo_from_user);

static unsigned long kfifo_copy_to_user(struct __kfifo *fifo, void __user *to,
unsigned int len, unsigned int off, unsigned int *copied)
{
unsigned int l;
unsigned long ret;
unsigned int size = fifo->mask + 1;
unsigned int esize = fifo->esize;

off &= fifo->mask;
if (esize != 1) {
off *= esize;
size *= esize;
len *= esize;
}
l = min(len, size - off);

ret = copy_to_user(to, fifo->data + off, l);
if (unlikely(ret))
ret = DIV_ROUND_UP(ret + len - l, esize);
else {
ret = copy_to_user(to + l, fifo->data, len - l);
if (unlikely(ret))
ret = DIV_ROUND_UP(ret, esize);
}

smp_wmb();
*copied = len - ret * esize;

return ret;
}