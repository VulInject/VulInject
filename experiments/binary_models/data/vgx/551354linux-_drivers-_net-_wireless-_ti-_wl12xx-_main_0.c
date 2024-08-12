static bool FUN1(struct VAR1 *VAR2)
{
bool VAR3 = false;
u8 VAR4, VAR5;

if (VAR2->VAR6.VAR7 == VAR8) {
VAR4 = FUN2(VAR2->VAR9);
VAR5 = FUN3(VAR2->VAR9);


if (VAR4 > 2 || (VAR4 == 2 && VAR5 >= 1))
VAR3 = true;
} else {
VAR4 = FUN4(VAR2->VAR9);
VAR5 = FUN5(VAR2->VAR9);


if (VAR4 == 3 && VAR5 >= 1)
VAR3 = true;
}

FUN6(VAR10,
"",
VAR4, VAR5, VAR3 ? "" : "");

return VAR3;
}