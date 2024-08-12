static void FUN1(const struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6 = VAR2->VAR6;
unsigned int VAR7;

while (1) {
VAR7 = FUN2(&VAR6->VAR8) & VAR9;

switch (VAR7) {
case VAR10:
if (((FUN2(&VAR6->VAR8) >> VAR11) &
VAR12) == 1)
return;

FUN3(VAR13, &VAR6->VAR14);
while ((FUN2(&VAR6->VAR8) & VAR9) != VAR15)
;

while ((FUN2(&VAR4->VAR16) & VAR17)
!= VAR17)
;
break;
case VAR18:
FUN3(VAR19, &VAR6->VAR14);
while ((FUN2(&VAR6->VAR8) & VAR9) != VAR20)
;
VAR21;
case VAR20:
FUN3(VAR22, &VAR6->VAR14);
while ((FUN2(&VAR6->VAR8) & VAR9) == VAR20)
;
break;
case VAR15:
return;
default:
break;
}
}
}