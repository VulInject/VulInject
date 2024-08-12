static int FUN1(struct VAR1 *VAR2,
unsigned long VAR3)
{
FUN2(VAR4, "");


switch (VAR3) {
case VAR5:
case VAR6:
break;
case VAR7:
if (!FUN3(VAR8))
return -VAR9;
break;
case 0:
return VAR2->VAR10;

default:
if (!FUN3(VAR3))
return -VAR9;
}
VAR2->VAR10 |= (int) VAR3;
return VAR2->VAR10;
}