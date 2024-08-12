int FUN1(void)
{
unsigned long VAR1 = FUN2();
unsigned long *VAR2;
unsigned long *VAR3;
unsigned long *VAR4;
unsigned long *VAR5;
unsigned long *VAR6;
int VAR7;

if (VAR1 == VAR8) {
VAR2 = VAR9;
VAR3 = VAR10;
VAR4 = VAR11;
VAR5 = VAR12;
VAR6 = VAR13;

} else if (VAR1 == VAR14) {
VAR2 = VAR15;
VAR3 = VAR16;
VAR4 = VAR17;
VAR5 = VAR18;
VAR6 = VAR19;

} else {
VAR2 = VAR20;
VAR3 = VAR21;
VAR4 = VAR22;
VAR5 = VAR23;
VAR6 = VAR24;
}

VAR7 = FUN3(VAR2);
if (VAR7 != VAR25)
return VAR7;

VAR7 = FUN3(VAR3);
if (VAR7 != VAR25)
return VAR7;

VAR7 = FUN3(VAR4);
if (VAR7 != VAR25)
return VAR7;

VAR7 = FUN3(VAR5);
if (VAR7 != VAR25)
return VAR7;

VAR7 = FUN3(VAR6);
if (VAR7 != VAR25)
return VAR7;

return VAR25;
}