static int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = &VAR1->VAR4;
struct VAR5 *VAR5 = (struct VAR5 *)VAR1;

VAR1->VAR6.VAR4 = VAR3;
FUN2(VAR3, 2);

switch (VAR5->VAR7) {
case 0x7003:
VAR5->VAR8 = FUN3(VAR3, &VAR9,
VAR10, 0, 20, 1, 0);
VAR5->VAR11 = FUN3(VAR3, &VAR9,
VAR12, 0, 1, 1, 1);
break;
default:
break;
}

return 0;
}