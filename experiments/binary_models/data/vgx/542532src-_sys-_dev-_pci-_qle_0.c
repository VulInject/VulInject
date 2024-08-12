void
FUN1(struct VAR1 *VAR2)
{
VAR2->VAR3[0] = VAR4;
if (FUN2(VAR2, 0x0001)) {
FUN3(VAR5, "", FUN4(VAR2));
VAR2->VAR6 = VAR7;
} else {
VAR2->VAR6 = VAR2->VAR3[6];
VAR2->VAR8 = VAR2->VAR3[1];

switch (VAR2->VAR6) {
case VAR9:
case VAR10:
FUN3(VAR5, "", FUN4(VAR2),
VAR2->VAR8);
break;

case VAR11:
case VAR12:
VAR2->VAR13 = VAR2->VAR3[2] |
(VAR2->VAR3[3] << 16);
FUN3(VAR5, "",
FUN4(VAR2), VAR2->VAR13);
break;

case VAR7:
default:
FUN3(VAR5, "", FUN4(VAR2));
break;
}

switch (VAR2->VAR6) {
case VAR9:
case VAR11:
VAR2->VAR14 = 126;
break;

case VAR10:
VAR2->VAR14 = 2;
break;

default:
VAR2->VAR14 = 0;
break;
}
}
}