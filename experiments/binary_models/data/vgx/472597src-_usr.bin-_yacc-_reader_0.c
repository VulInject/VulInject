void
FUN1(void)
{
int VAR1, VAR2;

VAR3 = 256;
VAR4 = malloc(VAR3);
if (VAR4 == NULL)
FUN2();

for (;;) {
VAR1 = FUN3();
if (VAR1 == VAR5)
FUN4();
if (VAR1 != '')
FUN5(VAR6, VAR7, VAR8);
switch (VAR2 = FUN6()) {
case VAR9:
return;

case VAR10:
FUN7();
break;

case VAR11:
FUN8();
break;

case VAR12:
FUN9();
break;

case VAR13:
case VAR14:
case VAR15:
case VAR16:
FUN10(VAR2);
break;

case VAR17:
FUN11(VAR2);
break;

case VAR18:
FUN12();
break;

case VAR19:
FUN13();
break;
}
}
}