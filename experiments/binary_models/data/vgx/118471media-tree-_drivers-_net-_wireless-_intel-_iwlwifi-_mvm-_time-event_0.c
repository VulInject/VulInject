static bool FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, void *VAR5)
{
struct VAR6 *VAR7 =
FUN2(VAR2, struct VAR6, VAR2);
struct VAR8 *VAR9 = VAR5;
struct VAR10 *VAR11;
int VAR12 = FUN3(VAR4);

if (FUN4(VAR4->VAR13.VAR14 != VAR15))
return true;

if (FUN5(VAR12 != sizeof(*VAR11))) {
FUN6(VAR7, "");
return true;
}

VAR11 = (void *)VAR4->VAR5;


if (FUN7(VAR11->VAR16) != VAR9->VAR17)
return false;

FUN8(VAR7, "",
VAR9->VAR17);
if (!VAR11->VAR18)
FUN6(VAR7,
"");

return true;
}