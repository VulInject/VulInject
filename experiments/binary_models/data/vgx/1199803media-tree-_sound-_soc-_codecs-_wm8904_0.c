static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned int VAR7;
int VAR8;

VAR8 = FUN3(VAR2, VAR4);
if (VAR8 < 0)
return VAR8;

if (VAR4->VAR9.VAR10.VAR9[0])
VAR7 = 0;
else
VAR7 = VAR11 | VAR12;

FUN4(VAR6, VAR13,
VAR11 | VAR12,
VAR7);

return VAR8;
}