static int FUN1(struct VAR1 *VAR1)
{
int VAR2;

switch (FUN2(VAR1->VAR3)) {
case VAR4:
VAR2 = FUN3(VAR1->VAR3, VAR5);
break;
case VAR6:
VAR2 = FUN3(VAR1->VAR3, -1);
break;
case VAR7:
VAR2 = FUN3(VAR1->VAR3, VAR8);
break;
default:
FUN4(VAR9, VAR1->VAR10->VAR11,
""
"",
FUN2(VAR1->VAR3));
VAR2 = -1;
break;
}

return VAR2;
}