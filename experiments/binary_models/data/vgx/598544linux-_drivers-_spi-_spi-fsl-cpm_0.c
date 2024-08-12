static void FUN1(void)
{
FUN2(&VAR1);

switch (VAR2) {
case 0:
FUN3(1);
break;
case 1:
FUN4(VAR3);
VAR3 = NULL;
VAR4;
default:
VAR2--;
break;
}

FUN5(&VAR1);
}