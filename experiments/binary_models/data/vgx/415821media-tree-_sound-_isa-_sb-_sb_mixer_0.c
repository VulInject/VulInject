static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned long VAR7;
int VAR8;
unsigned char VAR9, VAR10;

if (VAR4->VAR11.VAR12.VAR13[0] > 4)
return -VAR14;
switch (VAR4->VAR11.VAR12.VAR13[0]) {
case 0:
VAR9 = VAR15;
break;
case 1:
VAR9 = VAR16;
break;
case 2:
VAR9 = VAR17;
break;
case 3:
VAR9 = VAR18;
break;
case 4:
VAR9 = VAR19;
break;
default:
VAR9 = VAR19;
}
FUN3(&VAR6->VAR20, VAR7);
VAR10 = FUN4(VAR6, VAR21);
VAR8 = VAR9 != VAR10;
if (VAR8)
FUN5(VAR6, VAR21, VAR9);
FUN6(&VAR6->VAR20, VAR7);
return VAR8;
}