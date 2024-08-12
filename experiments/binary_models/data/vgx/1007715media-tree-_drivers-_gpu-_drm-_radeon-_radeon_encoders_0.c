static void FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR1->VAR6.VAR5;
struct VAR7 *VAR8 = VAR5->VAR9;
bool VAR10 = false;

if (!(VAR1->VAR11 & (VAR12)))
return;

if (VAR13 == 0) {
return;
} else if (VAR13 == 1) {
VAR10 = true;
} else if (VAR13 == -1) {


if ((VAR8->VAR14->VAR15 == 0x9583) &&
(VAR8->VAR14->VAR16 == 0x1734) &&
(VAR8->VAR14->VAR17 == 0x1107))
VAR10 = false;


else if (VAR8->VAR18 < VAR19)
VAR10 = false;
else
VAR10 = true;
}

if (VAR10) {
if (VAR8->VAR20)
FUN2(VAR1, VAR3);
else
FUN3(VAR1, VAR3);
}
}