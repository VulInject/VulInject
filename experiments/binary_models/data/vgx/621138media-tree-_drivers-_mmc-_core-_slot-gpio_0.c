int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned int VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7.VAR8;
int VAR9;

VAR9 = FUN2(VAR2->VAR10, VAR3, VAR11,
VAR6->VAR12);
if (VAR9 < 0)

return VAR9;

if (VAR4) {
VAR9 = FUN3(VAR3, VAR4);
if (VAR9 < 0)
return VAR9;
}

VAR6->VAR13 = true;
VAR6->VAR14 = FUN4(VAR3);

return 0;
}