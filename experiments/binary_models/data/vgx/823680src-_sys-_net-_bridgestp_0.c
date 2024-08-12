int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5;


VAR5 = VAR6;

switch (VAR4->VAR7) {
case VAR8:
if (FUN2(&VAR2->VAR9, &VAR4->VAR10))

VAR5 = VAR11;
else if (FUN3(&VAR2->VAR9, &VAR4->VAR10) ==
VAR12) {
if (VAR2->VAR13 != VAR4->VAR14 ||
VAR2->VAR15 != VAR4->VAR16 ||
VAR2->VAR17 != VAR4->VAR18 ||
VAR2->VAR19 != VAR4->VAR20)

VAR5 = VAR11;
else

VAR5 = VAR21;
} else

VAR5 = VAR22;

break;

case VAR23:
case VAR24:
case VAR25:
if (FUN3(&VAR2->VAR9, &VAR4->VAR10) <= VAR12)

VAR5 = VAR26;
break;
}

return (VAR5);
}