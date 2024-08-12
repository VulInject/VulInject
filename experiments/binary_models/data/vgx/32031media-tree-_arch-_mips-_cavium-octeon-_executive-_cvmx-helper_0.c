int FUN1(int VAR1)
{
FUN2(VAR1);

switch (FUN3(VAR1)) {

case VAR2:
case VAR3:
break;

case VAR4:
FUN4(VAR1);
break;

case VAR5:
case VAR6:
FUN5(VAR1);
break;

case VAR7:
FUN6(VAR1);
break;

case VAR8:
case VAR9:
FUN7(VAR1);
break;

case VAR10:
FUN8(VAR1);
break;

case VAR11:
FUN9(VAR1);
break;
}


VAR12;

return 0;
}