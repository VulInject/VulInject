static int FUN1(struct VAR1 *VAR2, int VAR3,
int VAR4)
{
const struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = FUN3(VAR6);
int VAR9;

switch (VAR4) {
case VAR10:
VAR9 = FUN4(VAR8, VAR2, VAR3, VAR11,
&VAR8->VAR12);
break;
case VAR13:
VAR9 = FUN5(VAR2, VAR3, VAR14);
if (VAR9 >= 0) {

if (VAR9 > VAR8->VAR15[VAR3])
VAR8->VAR15[VAR3] = VAR9;
VAR9 = VAR8->VAR15[VAR3];
}
break;
case VAR16:
VAR9 = FUN4(VAR8, VAR2, VAR3,
VAR17,
&VAR8->VAR18[VAR3]);
break;
case VAR19:
case VAR20:
case VAR21:
VAR9 = 0;
break;
default:
VAR9 = FUN6(VAR2);
if (VAR9 < 0)
return VAR9;
VAR9 = -VAR22;
break;
}
return VAR9;
}