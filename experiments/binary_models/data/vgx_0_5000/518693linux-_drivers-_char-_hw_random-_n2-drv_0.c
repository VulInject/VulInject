static int n2rng_data_read(struct hwrng *rng, u32 *data)
{
struct n2rng *np = (struct n2rng *) rng->priv;
unsigned long ra = __pa(&np->test_data);
int len;

if (!(np->flags & N2RNG_FLAG_READY)) {
len = 0;
} else if (np->flags & N2RNG_FLAG_BUFFER_VALID) {
np->flags &= ~N2RNG_FLAG_BUFFER_VALID;
*data = np->buffer;
len = 4;
} else {
int err = n2rng_generic_read_data(ra);
if (!err) {
np->flags |= N2RNG_FLAG_BUFFER_VALID;
np->buffer = np->test_data >> 32;
*data = np->test_data & 0xffffffff;
len = 4;
} else {
dev_err(&np->op->dev, "RNG error, retesting\n");
np->flags &= ~N2RNG_FLAG_READY;
if (!(np->flags & N2RNG_FLAG_SHUTDOWN))
schedule_delayed_work(&np->work, 0);
len = 0;
}
}

return len;
}