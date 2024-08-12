int
FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
struct VAR4 *VAR5 = VAR3->VAR6;
struct VAR7 *VAR8 = FUN2(VAR5);
int VAR9 = 0;

if (VAR10 && VAR5->VAR11 != 0)
FUN3("", VAR5);

VAR8->VAR12 = 0;
FUN4(VAR5);

if (VAR8->VAR13.VAR14 == 0)
FUN5(VAR5, VAR3->VAR15);

return (VAR9);
}