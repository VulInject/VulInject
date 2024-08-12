static void FUN1(const struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
int VAR7;
bool VAR8;

VAR7 = VAR4->VAR7;
if (VAR7 >= VAR2->VAR9) {
FUN2(VAR2->VAR10->VAR2.VAR11,
"", VAR7);
return;
}

VAR6 = VAR2->VAR12[VAR7];
VAR8 = false;

if (VAR4->VAR13 != VAR6->VAR14.VAR13) {
VAR4->VAR15.VAR16 |= VAR17;
VAR8 = true;
}
if (VAR4->VAR18 != VAR6->VAR14.VAR18) {
VAR4->VAR15.VAR16 |= VAR19;
VAR8 = true;
}
if ((VAR4->VAR20 & VAR21) &&
!(VAR4->VAR15.VAR22 & VAR21)) {
VAR4->VAR15.VAR16 |= VAR23;
VAR8 = true;
}

if (VAR8)
FUN3(VAR2, VAR4);
}