static int FUN1(u32 VAR1, u32 VAR2)
{
int VAR3 = 0;

switch (VAR1) {
case VAR4:
case VAR5:
case VAR6:
case VAR7:
VAR3 = FUN2(VAR2, 1, 8);
break;
case VAR8:
case VAR9:
case VAR10:
case VAR11:
VAR3 = FUN2(VAR2, 2, 8);
break;
}

return VAR3;
}