static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;


FUN2(VAR2, VAR4, 0x40);

switch (VAR2->VAR5) {
case VAR6:
VAR3 = FUN3(VAR2);
break;
case VAR7:
FUN4(VAR2);

case VAR8:
case VAR9:
VAR3 = FUN5(VAR2);
break;
case VAR10:
FUN6(VAR2);
break;
}

return VAR3;
}