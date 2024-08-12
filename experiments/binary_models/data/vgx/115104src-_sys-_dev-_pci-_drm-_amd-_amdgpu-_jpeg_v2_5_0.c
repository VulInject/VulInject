static int FUN1(void *VAR1)
{
struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
u32 VAR4;
int VAR5;

VAR3->VAR6.VAR7 = VAR8;
for (VAR5 = 0; VAR5 < VAR3->VAR6.VAR7; VAR5++) {
VAR4 = FUN2(VAR9, VAR5, VAR10);
if (VAR4 & VAR11)
VAR3->VAR6.VAR12 |= 1 << VAR5;
}
if (VAR3->VAR6.VAR12 == (VAR13 |
VAR14))
return -VAR15;

FUN3(VAR3);
FUN4(VAR3);
FUN5(VAR3);

return 0;
}