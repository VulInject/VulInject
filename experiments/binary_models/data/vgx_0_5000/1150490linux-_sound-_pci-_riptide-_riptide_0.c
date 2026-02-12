static int
setmixer(struct cmdif *cif, short num, unsigned short rval, unsigned short lval)
{
union cmdret rptr = CMDRET_ZERO;
int i = 0;

snd_printdd("sent mixer %d: 0x%x 0x%x\n", num, rval, lval);
do {
SEND_SDGV(cif, num, num, rval, lval);
SEND_RDGV(cif, num, num, &rptr);
if (rptr.retwords[0] == lval && rptr.retwords[1] == rval)
return 0;
} while (i++ < MAX_WRITE_RETRY);
snd_printdd("sent mixer failed\n");
return -EIO;
}