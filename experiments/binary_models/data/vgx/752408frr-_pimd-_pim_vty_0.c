static int FUN1(struct VAR1 *VAR1, int VAR2,
struct VAR3 *VAR4)
{

if (VAR4->VAR5) {
FUN2(VAR1, "");
++VAR2;
}

if (VAR4->VAR6 != VAR7)
FUN2(VAR1, "", VAR4->VAR6);


if (VAR4->VAR8 !=
VAR9)
FUN2(VAR1, "",
VAR4->VAR8);

if (VAR4->VAR10 != VAR11)
FUN2(VAR1, "",
VAR4->VAR10);


if (VAR4->VAR12 !=
VAR13)
FUN2(VAR1, "",
VAR4->VAR12);


if (VAR4->VAR14 !=
VAR15)
FUN2(VAR1, "",
VAR4->VAR14);

return VAR2;
}