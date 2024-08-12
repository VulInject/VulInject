static struct VAR1 *FUN1(struct VAR2 *VAR3, size_t VAR4)
{
char *VAR5;
struct VAR1 *VAR6 = FUN2(VAR3, NULL);

if (!VAR6)
FUN3(VAR7, "");

FUN4(&VAR5, "", VAR4);
if (FUN5(VAR6, VAR8, VAR5))
goto VAR9;

FUN4(&VAR5, "", VAR4 + 1, VAR4 + 2, VAR4 + 3);
if (FUN5(VAR6, VAR10, VAR5))
goto VAR9;

return VAR6;
VAR9:
FUN6(VAR3);
FUN3(VAR7, "");
}