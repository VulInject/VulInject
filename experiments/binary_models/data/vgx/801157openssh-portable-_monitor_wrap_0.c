void *
FUN1(VAR1 *VAR2)
{
struct VAR3 *VAR4;
int VAR5, VAR6;

FUN2("", VAR7);
if ((VAR4 = FUN3()) == NULL)
FUN4("", VAR7);
FUN5(VAR8->VAR9, VAR10, VAR4);
FUN2("", VAR7);
FUN6(VAR8->VAR9,
VAR11, VAR4);
if ((VAR5 = FUN7(VAR4, &VAR6)) != 0)
FUN4("", VAR7, FUN8(VAR5));
if (VAR6 == 0) {
FUN2("", VAR7);
FUN9(VAR4);
return (NULL);
}
FUN9(VAR4);
return (VAR2);
}