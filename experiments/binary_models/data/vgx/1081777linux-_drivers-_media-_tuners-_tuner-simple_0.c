static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
int VAR8;

if (VAR6->VAR9.VAR10 == NULL)
return -VAR11;

VAR8 = FUN2(VAR2);

*VAR4 = 0;

if (FUN3(VAR8))
*VAR4 = VAR12;
if (FUN4(VAR6->VAR13, VAR8))
*VAR4 |= VAR14;

FUN5("", FUN6(VAR8));

return 0;
}