int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5 = 0;
switch (VAR4->VAR6) {
case VAR7:
VAR5 = FUN2(VAR2, VAR4);
break;
default:
FUN3(VAR8, "",
VAR9, VAR4->VAR6);
VAR5 = -1;
break;
}
return VAR5;
}