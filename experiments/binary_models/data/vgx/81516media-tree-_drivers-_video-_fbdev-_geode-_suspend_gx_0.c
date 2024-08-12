static void FUN1(struct VAR1 *VAR2)
{
int VAR3;

for (VAR3 = 0; VAR3 < FUN2(VAR2->VAR4); VAR3++) {
switch (VAR3) {
case VAR5:

FUN3(VAR2, VAR5, VAR6);
break;

case VAR7:

FUN3(VAR2, VAR3, VAR2->VAR4[VAR3] & ~(VAR8 |
VAR9 |
VAR10 |
VAR11));
break;

case VAR12:

FUN3(VAR2, VAR3, VAR2->VAR4[VAR3] & ~(VAR13 |
VAR14 |
VAR15));
break;

case VAR16:
case VAR17:
case VAR18:
case VAR19:
case VAR20:
case VAR21:
case VAR22:
case VAR23:
case VAR24:
case VAR25:
case VAR26:

break;
default:
FUN3(VAR2, VAR3, VAR2->VAR4[VAR3]);
}
}


FUN3(VAR2, VAR22, 0);
for (VAR3 = 0; VAR3 < FUN2(VAR2->VAR27); VAR3++)
FUN3(VAR2, VAR23, VAR2->VAR27[VAR3]);
}