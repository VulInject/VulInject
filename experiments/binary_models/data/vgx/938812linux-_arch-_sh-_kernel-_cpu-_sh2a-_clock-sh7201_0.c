static const int VAR1[]={1,2,3,4,6,8};
static const int VAR2[]={1,2,3,4,6,8,12};

static unsigned int VAR3;

static void FUN1(struct VAR4 *VAR4)
{
VAR4->VAR5 = 10000000 * VAR3 *
VAR1[(FUN2(VAR6) >> 8) & 0x0007];
}