static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5, VAR6;

VAR6 = FUN3(VAR4->VAR7[VAR8], VAR9);
if (VAR6)
return VAR6;

VAR5 = VAR4->VAR10 + VAR4->VAR11;
VAR5 *= VAR4->VAR12;

FUN4(VAR5, VAR5 + 100);

return 0;
}