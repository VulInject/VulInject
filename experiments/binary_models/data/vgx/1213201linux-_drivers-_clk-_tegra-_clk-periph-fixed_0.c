static unsigned long
FUN1(struct VAR1 *VAR2,
unsigned long VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
unsigned long long VAR6;

VAR6 = (unsigned long long)VAR3 * VAR5->VAR7;
FUN3(VAR6, VAR5->VAR8);

return (unsigned long)VAR6;
}

static const struct clk_ops VAR9 = {
.VAR10 = VAR11,
.VAR12 = VAR13,
.VAR14 = VAR15,
.VAR16 = VAR17,
};