static void FUN1(struct VAR1 *VAR2)
{
uint8_t VAR3;
uint8_t VAR4;

FUN2(VAR5, VAR3, VAR4);

switch (VAR4) {
case 6:
VAR2->VAR6.VAR7 = VAR8;
break;
case 7:
VAR2->VAR6.VAR7 = VAR9;
break;
default:
FUN3("", VAR4);
VAR2->VAR6.VAR7 = VAR10;
break;
}
}