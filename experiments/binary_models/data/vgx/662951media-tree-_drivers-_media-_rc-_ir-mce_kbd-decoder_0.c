static int FUN1(enum rc_type VAR1, u32 VAR2,
struct VAR3 *VAR4, unsigned int VAR5)
{
struct VAR3 *VAR6 = VAR4;
int VAR7, VAR8;
u64 VAR9;

if (VAR1 == VAR10) {
VAR9 = VAR2 |
((VAR11)VAR12 << VAR13);
VAR7 = VAR13 + VAR14 + 1;
} else {
VAR9 = VAR2 |
((VAR11)VAR15 << VAR16);
VAR7 = VAR16 + VAR14 + 1;
}

VAR8 = FUN2(&VAR6, VAR5, &VAR17, VAR7, VAR9);
if (VAR8 < 0)
return VAR8;

return VAR6 - VAR4;
}