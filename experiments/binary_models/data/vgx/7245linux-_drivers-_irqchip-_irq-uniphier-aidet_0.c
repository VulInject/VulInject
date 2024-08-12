static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;
unsigned int VAR7;


switch (VAR3) {
case VAR8:
case VAR9:
VAR7 = 0;
break;
case VAR10:
VAR7 = 1;
VAR3 = VAR8;
break;
case VAR11:
VAR7 = 1;
VAR3 = VAR9;
break;
default:
return -VAR12;
}

FUN2(VAR5, VAR2->VAR13, VAR7);

return FUN3(VAR2, VAR3);
}