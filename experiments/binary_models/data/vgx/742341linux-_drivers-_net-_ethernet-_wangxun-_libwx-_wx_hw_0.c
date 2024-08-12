int FUN1(struct VAR1 *VAR1, VAR2 *VAR3, u16 VAR4)
{
struct VAR5 *VAR6 = VAR1->VAR6;
struct VAR7 *VAR8 = &VAR6->VAR8;
int VAR9;

*VAR3 = 1;
VAR9 = FUN2(VAR6, VAR10);
if (!VAR9) {
FUN3(VAR8, "");
return -VAR11;
}
FUN4(VAR6,
VAR9 + VAR12,
VAR3);
*VAR3 &= VAR13;

*VAR3 += 1;

if (*VAR3 > VAR4)
*VAR3 = VAR4;

return 0;
}