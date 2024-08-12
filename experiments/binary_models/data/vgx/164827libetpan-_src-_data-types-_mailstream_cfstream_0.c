static void FUN1(CFWriteStreamRef VAR1, CFStreamEventType VAR2, void *VAR3)
{
VAR4 * VAR5;
struct VAR6 * VAR7;

VAR5 = (VAR4 *) VAR3;
VAR7 = (struct VAR6 *) VAR5->VAR8;

switch (VAR2) {
case VAR9:
break;
case VAR10:
VAR7->VAR11 = 0;
VAR7->VAR12 = 0;
switch (VAR7->VAR13) {
case VAR14:
VAR7->VAR13 = VAR15;
break;
case VAR16:
VAR7->VAR13 = VAR17;
break;
}
break;
case VAR18:
break;
case VAR19:

VAR7->VAR20 = 0;
switch (VAR7->VAR13) {
case VAR21:
FUN2(VAR5);
VAR7->VAR13 = VAR22;
break;
case VAR23:
VAR7->VAR13 = VAR24;
break;
case VAR25:
VAR7->VAR13 = VAR26;
break;
}
break;
case VAR27:
VAR7->VAR11 = -1;
VAR7->VAR12 = -1;
VAR7->VAR20 = -1;
switch (VAR7->VAR13) {
case VAR14:
VAR7->VAR13 = VAR15;
break;
case VAR16:
VAR7->VAR13 = VAR17;
break;
case VAR21:
VAR7->VAR13 = VAR15;
break;
case VAR23:
VAR7->VAR13 = VAR24;
break;
case VAR25:
VAR7->VAR13 = VAR26;
break;
}
break;
case VAR28:
VAR7->VAR11 = -1;
VAR7->VAR12 = -1;
VAR7->VAR20 = -1;
switch (VAR7->VAR13) {
case VAR14:
VAR7->VAR13 = VAR15;
break;
case VAR16:
VAR7->VAR13 = VAR17;
break;
case VAR21:
VAR7->VAR13 = VAR15;
break;
}
break;
}
}