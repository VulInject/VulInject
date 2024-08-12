static VAR1 FUN1(VAR2* VAR3, int VAR4, void* VAR5, struct VAR6* VAR7)
{
if (VAR7->VAR8 == VAR9) {
int64_t VAR10;
memset(VAR7, 0, sizeof(*VAR7));
VAR7->VAR11 = 8;
VAR7->VAR8 = VAR12;
VAR7->VAR13 = 1;
VAR10 = FUN2(VAR3, VAR4);
return VAR10;

} else if (VAR7->VAR14) {
return (VAR15) VAR5;
}

switch (VAR7->VAR8) {
case VAR16:
case VAR17:
return *(VAR15*) VAR5;

case VAR12:
return *(VAR1*) VAR5;

case VAR18:
return VAR7->VAR19 ? (VAR1) *(VAR20*) VAR5 : (VAR1) *(VAR21*) VAR5;

case VAR22:
return VAR7->VAR19 ? (VAR1) *(VAR23*) VAR5 : (VAR1) *(VAR24*) VAR5;

case VAR25:
return VAR7->VAR19 ? (VAR1) *(VAR26*) VAR5 : (VAR1) *(VAR27*) VAR5;

default:
FUN3(VAR3, VAR4, "", 0, NULL);
return 0;
}
}