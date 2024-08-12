static long FUN1(struct VAR1 *VAR2, unsigned long VAR3,
unsigned long *VAR4)
{
u8 VAR5;


VAR5 = FUN2(*VAR4, VAR3);

return *VAR4 / VAR5;
}

static const struct clk_ops VAR6 = {
.VAR7 = VAR8,
.VAR9 = VAR10,
.VAR11 = VAR12,
};