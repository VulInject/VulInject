int FUN1(VAR1 *VAR2, zend_off_t VAR3, int VAR4, zend_off_t VAR5, int VAR6) 
{
VAR7 *VAR8 = FUN2(VAR2, VAR6);
zend_off_t VAR9, VAR10;

if (!VAR8) {
return -1;
}

if (VAR6) {
VAR1 *VAR11;
VAR11 = FUN3(VAR2);
if (VAR11) {
VAR2 = VAR11;
}
}

if (VAR2->VAR12) {
return 0;
}

VAR10 = FUN4(VAR2);

switch (VAR4) {
case VAR13:
VAR9 = VAR10 + VAR2->VAR14 + VAR3;
break;
case VAR15:
VAR9 = VAR10 + VAR5 + VAR3;
break;
case VAR16:
VAR9 = VAR10 + VAR3;
break;
default:
VAR9 = 0;
}

if (VAR9 > VAR10 + (VAR17) VAR2->VAR14) {
return -1;
}

if (VAR9 < VAR10) {
return -1;
}

return FUN5(VAR8, VAR9, VAR16);
}