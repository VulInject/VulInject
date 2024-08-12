FUN1(VAR1);

static struct VAR2 *FUN2(struct VAR3 *VAR4,
unsigned char VAR5,
unsigned long VAR6,
unsigned int VAR7)
{
struct VAR2 *VAR8 = FUN3(VAR4, VAR6, VAR7);


if (VAR8) {
VAR8->VAR9 &= ~VAR10;
VAR8->VAR9 |= VAR5 & VAR10;
}

return VAR8;
}