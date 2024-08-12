static void FUN1(struct VAR1 *VAR2)
{
if (!VAR2 || !VAR2->VAR3 || (VAR2->VAR3[0] == ''))
return;

struct VAR1 *VAR4 = FUN2();
const char *const VAR5 = FUN3(VAR6->VAR7, "");
if (VAR5)
{
FUN4(VAR4, VAR5);
if (VAR4->VAR8[-1] != '')
FUN5(VAR4, '');
}
else
FUN4(VAR4, "");

FUN4(VAR4, FUN6(VAR2));
FUN7(VAR2, VAR4);
FUN8(&VAR4);
}