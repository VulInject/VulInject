static int FUN1(struct VAR1 *VAR2,
enum fe_modulation VAR3)
{
int VAR4 = 0;

switch (VAR3) {
case VAR5:
VAR4 = 0;
break;

case VAR6:
VAR4 = 1;
break;

case VAR7:
VAR4 = 4;
break;

case VAR8:
VAR4 = 2;
break;

case VAR9:
VAR4 = 3;
break;

default:
return -VAR10;
}

FUN2(VAR2, 0x00, 0x70, VAR4 << 4);

return 0;
}