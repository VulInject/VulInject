static int FUN1(struct VAR1 *VAR2)
{
switch (FUN2(VAR2)->VAR3 & 0x7ff) {
case VAR4:
return 0;
case VAR5:
return -VAR6;
default:
return -VAR7;


case VAR8:
return -VAR9;
case VAR10:
return -VAR11;
case VAR12:
case VAR13:
case VAR14:
return -VAR15;
}
}