bool FUN1(
enum clock_source_id VAR1,
VAR2 *VAR3)
{
if (VAR3 == NULL) {
FUN2();
return false;
}

switch (VAR1) {
case VAR4:
*VAR3 = VAR5;
return true;
case VAR6:
*VAR3 = VAR7;
return true;
case VAR8:
*VAR3 = VAR9;
return true;
case VAR10:
*VAR3 = VAR11;
return true;
case VAR12:
*VAR3 = VAR13;
return true;
default:

FUN2();
return false;
}
}