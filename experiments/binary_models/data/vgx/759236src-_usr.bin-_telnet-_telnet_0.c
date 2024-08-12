static void
FUN1(int VAR1)
{
if (VAR2[VAR1]) {
--VAR2[VAR1];
if (VAR2[VAR1] && FUN2(VAR1))
--VAR2[VAR1];
}

if ((VAR2[VAR1] == 0) && FUN3(VAR1)) {

switch (VAR1) {

case VAR3:
if (!VAR4)
break;

case VAR5:
FUN4(VAR6);
break;

case VAR7:
if (VAR8)
VAR8 = 0;
FUN5(VAR1);
FUN6(VAR1);
return;		

default:
break;
}
FUN5(VAR1);
if (FUN7(VAR1))
FUN8(VAR1, 0);
FUN9(0);			
} else if (VAR1 == VAR7) {

if (VAR8)
VAR8 = 0;
FUN5(VAR1);
}
FUN6(VAR1);
}