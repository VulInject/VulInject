bool FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, int *VAR6) {
ut32 VAR7 = FUN2 (VAR2, 0);
if (VAR7 == VAR8) {
return false;
}

*VAR5 = 32;
*VAR6 = 0;

switch (VAR7) {
case VAR9:
*VAR6 = 1;
*VAR4 = VAR10;
return true;

case VAR11:
*VAR5 = 64;

case VAR12:
*VAR4 = VAR13;
return true;

case VAR14:
*VAR5 = 64;

case VAR15:
*VAR6 = 1;
*VAR4 = VAR16;
return true;

case VAR17:
*VAR6 = 1;

case VAR18:
*VAR5 = 64;
*VAR4 = VAR19;
return true;

case VAR20:
*VAR6 = 1;

case VAR21:
*VAR4 = VAR19;
return true;

case VAR22:
*VAR5 = 64;

case VAR23:
*VAR4 = VAR24;
return true;

case VAR25:
*VAR5 = 64;

case VAR26:
*VAR6 = 1;
*VAR4 = VAR27;
return true;
}

return false;
}