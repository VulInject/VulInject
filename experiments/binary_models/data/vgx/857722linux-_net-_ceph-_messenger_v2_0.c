static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR5.VAR6;
int VAR7;

if (FUN2(VAR2)) {
VAR7 = FUN3(VAR2);
if (VAR7) {
if (VAR7 == -VAR8)
VAR2->VAR9 = "";
return VAR7;
}
}

VAR7 = FUN4(VAR2->VAR5.VAR10, VAR4);
if (VAR7) {
if (VAR7 == -VAR8)
VAR2->VAR9 = "";
else
VAR2->VAR9 = "";
return VAR7;
}

FUN5("", VAR11,
VAR2, VAR4->VAR12, VAR4->VAR13, VAR4->VAR14[0],
VAR4->VAR14[1], VAR4->VAR14[2], VAR4->VAR14[3]);

if (!FUN2(VAR2))
return FUN6(VAR2);

if (VAR4->VAR14[0] > VAR15)
return FUN7(VAR2);

return FUN8(VAR2, FUN9(VAR2->VAR5.VAR10));
}