static void
FUN1(VAR1 *VAR2)
{
int VAR3;
uint64_t VAR4 = (VAR5)(-1);
int VAR6;

FUN2("", VAR2->VAR7);

for (VAR6 = 0; VAR6 < VAR2->VAR8; VAR6++) {
VAR3 = FUN3(VAR2->VAR9,
&(VAR2->VAR10[VAR6]->VAR11), &VAR4);


if (VAR3 == 0 && FUN4(VAR2->VAR9, VAR4))
VAR2->VAR10[VAR6]->VAR12 = VAR4;
else
VAR2->VAR10[VAR6]->VAR12 = (VAR5)-1;
}

FUN2("", VAR4);

switch (FUN5(VAR4, NULL)) {
case 0:
case VAR13:
FUN2("");
return;
case VAR14:

if (VAR2->VAR10[0]->VAR15 !=
VAR16 &&
VAR2->VAR10[0]->VAR15 != VAR17) {
FUN2("", VAR4,
VAR2->VAR18);
(void) FUN6(VAR4, VAR2->VAR18);
}
break;
case VAR19:
default:

break;
}

for (VAR6 = 0; VAR6 < VAR2->VAR8; VAR6++) {
mc_aflt_t VAR20;
if (VAR2->VAR10[VAR6]->VAR12 != (VAR5)-1) {
VAR20 = *VAR2;
VAR20.VAR8 = 1;
VAR20.VAR10[0] = VAR2->VAR10[VAR6];
FUN7(&VAR20);
}
}
}