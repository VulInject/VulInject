static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned int VAR4, int VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);

switch (VAR4) {
case VAR8:
if (VAR5)
VAR5 = 1000;

case VAR9:
if (VAR7->VAR10)
VAR7->VAR11 = FUN3(VAR7, VAR5);
else
VAR7->VAR11 = FUN4(VAR7, VAR5);
break;
default:
return -1;
}


FUN5(&VAR7->VAR12);
return 0;
}