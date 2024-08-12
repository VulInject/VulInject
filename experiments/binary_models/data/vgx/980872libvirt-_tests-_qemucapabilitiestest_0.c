static int
FUN1(const void *VAR1)
{
const VAR2 *VAR3 = VAR1;
g_autofree char *VAR4 = NULL;
FUN2(VAR5) VAR6 = NULL;
FUN2(VAR5) copy = NULL;
g_autofree char *VAR7 = NULL;

VAR4 = FUN3("",
VAR3->VAR8, VAR3->VAR9, VAR3->VAR10,
VAR3->VAR11);

if (!(VAR6 = FUN4(
FUN5(VAR3->VAR11), VAR4)))
return -1;

if (!(copy = FUN6(VAR6)))
return -1;

if (!(VAR7 = FUN7(copy)))
return -1;

if (FUN8(VAR7, VAR4) < 0)
return -1;

return 0;
}