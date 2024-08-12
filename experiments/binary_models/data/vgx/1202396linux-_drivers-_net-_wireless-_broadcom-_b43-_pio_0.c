static struct VAR1 *FUN1(struct VAR2 *VAR3,
u8 VAR4)
{
struct VAR1 *VAR5;

if (VAR3->VAR6) {

switch (VAR4) {
default:
FUN2(1);
VAR7;
case 0:
VAR5 = VAR3->VAR8.VAR9;
break;
case 1:
VAR5 = VAR3->VAR8.VAR10;
break;
case 2:
VAR5 = VAR3->VAR8.VAR11;
break;
case 3:
VAR5 = VAR3->VAR8.VAR12;
break;
}
} else
VAR5 = VAR3->VAR8.VAR11;

return VAR5;
}