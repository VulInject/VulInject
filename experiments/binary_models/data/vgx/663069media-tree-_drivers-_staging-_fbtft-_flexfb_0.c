static void FUN1(struct VAR1 *VAR2,
int VAR3, int VAR4, int VAR5, int VAR6)
{
switch (VAR2->VAR7->VAR8.VAR9) {


case 0:
FUN2(VAR2, 0x0020, VAR3);
FUN2(VAR2, 0x0021, VAR4);
break;
case 180:
FUN2(VAR2, 0x0020, VAR10 - 1 - VAR3);
FUN2(VAR2, 0x0021, VAR11 - 1 - VAR4);
break;
case 270:
FUN2(VAR2, 0x0020, VAR10 - 1 - VAR4);
FUN2(VAR2, 0x0021, VAR3);
break;
case 90:
FUN2(VAR2, 0x0020, VAR4);
FUN2(VAR2, 0x0021, VAR11 - 1 - VAR3);
break;
}
FUN2(VAR2, 0x0022); 
}