int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;

if (VAR2->VAR5 != VAR6)
return VAR7;

VAR4 = FUN2(VAR2->VAR8, NULL, true);

if (!FUN3(VAR4->VAR9))
return VAR7;

VAR4->VAR9->export = FUN4(VAR2->VAR8, NULL);
if (VAR4->VAR9->export) {
if (VAR10)
FUN5("");
if (FUN6(true) != 0)
FUN7("");
} else {
if (VAR10)
FUN5("");
if (FUN6(false) != 0)
FUN7("");
}

return VAR7;
}