static int
FUN1(VAR1 *VAR2, int VAR3, int VAR4, size_t VAR5)
{
int VAR6 = 0;

FUN2(&VAR7);

if (FUN3(VAR2)) {
FUN4(&VAR7);
return (VAR8);
}


if ((VAR3 && VAR2->VAR9 != &VAR10) ||
(!VAR3 && VAR2->VAR9 != VAR11)) {
FUN4(&VAR7);
return (VAR12);
}

switch (VAR4) {
case VAR13:
if (VAR5 > VAR14)
VAR6 = VAR15;
else if ((VAR2->VAR16 & VAR17) && VAR5 != 0)
VAR6 = VAR18;
else
VAR2->VAR19 = (VAR20)VAR5;
break;

case VAR21:
if (VAR5 > VAR2->VAR22)
VAR6 = VAR23;
else
VAR2->VAR24 = VAR5;
break;

case VAR25:
if (VAR5 < VAR2->VAR24)
VAR6 = VAR23;
else
VAR2->VAR22 = VAR5;
break;

default:
VAR6 = VAR23;
break;
}

FUN4(&VAR7);
return (VAR6);
}