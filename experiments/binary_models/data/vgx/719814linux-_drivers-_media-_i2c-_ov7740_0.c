static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = FUN2(VAR2->VAR4,
struct VAR3, VAR5);
int VAR6;

switch (VAR2->VAR7) {
case VAR8:
VAR6 = FUN3(VAR3, VAR2);
break;
case VAR9:
VAR6 = FUN4(VAR3, VAR2);
break;
default:
VAR6 = -VAR10;
break;
}
return VAR6;
}