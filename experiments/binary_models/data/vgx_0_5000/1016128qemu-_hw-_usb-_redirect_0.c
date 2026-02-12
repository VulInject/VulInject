static int usbredir_put_packet_id_q(QEMUFile *f, void *priv, size_t unused,
const VMStateField *field,
JSONWriter *vmdesc)
{
struct PacketIdQueue *q = priv;
USBRedirDevice *dev = q->dev;
struct PacketIdQueueEntry *e;
int remain = q->size;

DPRINTF("put_packet_id_q %s size %d\n", q->name, q->size);
qemu_put_be32(f, q->size);
QTAILQ_FOREACH(e, &q->head, next) {
qemu_put_be64(f, e->id);
remain--;
}
assert(remain == 0);

return 0;
}