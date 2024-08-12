static int FUN1(struct VAR1 *VAR2, u8 VAR3, int *VAR4)
{
int VAR5;

VAR5 = FUN2(VAR2, VAR3);
if (FUN3(VAR5 < 0))
return VAR5;

switch (VAR3) {
case VAR6:

VAR5 = (VAR5 & 0x1FFF) << 3;
*VAR4 = (VAR5 * 1000) >> 7;
break;
case VAR7:
case VAR8:

*VAR4 = FUN4(VAR5) * 1942 / (4 * 100);
break;
case VAR9:

*VAR4 = (FUN4(VAR5) * 30518 /
(4 * 100 * 1000)) + 2500;
break;
default:
return -VAR10; 
}

return 0;
}