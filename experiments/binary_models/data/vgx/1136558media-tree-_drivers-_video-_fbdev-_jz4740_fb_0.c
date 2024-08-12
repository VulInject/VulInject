static unsigned int FUN1(struct VAR1 *VAR1)
{
unsigned int VAR2;

switch (VAR1->VAR3->VAR4) {
case VAR5:
VAR2 = 4;
break;
case VAR6:
VAR2 = 4;
break;
case VAR7:
VAR2 = 3;
break;
case VAR8:
case VAR9:
case VAR10:
VAR2 = 8;
break;
default:
VAR2 = 0;
break;
}
return VAR2;
}