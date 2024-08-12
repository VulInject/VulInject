void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 =
FUN2(&VAR4->VAR7.VAR8, 0);
unsigned VAR9 =
FUN3(&VAR4->VAR7.VAR8, 0) / sizeof(*VAR6);

VAR2->VAR10[0] = false;
VAR2->VAR10[1] = false;
VAR2->VAR11 = false;
while (VAR9--) {
switch (VAR6->VAR12) {
case VAR13:
if ((VAR2->VAR14 & VAR15) && VAR6->VAR16 == 21) {
VAR2->VAR10[!!VAR6->VAR17] = true;
VAR2->VAR18[!!VAR6->VAR17][0] = VAR6->VAR19[0];
VAR2->VAR18[!!VAR6->VAR17][1] = VAR6->VAR19[1];
}
break;
case VAR20:
if ((VAR2->VAR14 & VAR21) &&
VAR6->VAR17 == 0 && VAR6->VAR16 == 23) {
VAR2->VAR11 = true;
VAR2->VAR22[0] = VAR6->VAR19[0];
VAR2->VAR22[1] = VAR6->VAR19[1];
}
break;
}
VAR6++;
}
}