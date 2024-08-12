static int
FUN1(void)
{
struct VAR1 *VAR2;
VAR3 *VAR4, *VAR5;
int VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10 = NULL;
struct VAR11 *VAR12 = NULL;
struct VAR13 *VAR14;
char *VAR15;
uint32_t VAR16;

VAR14 = (struct VAR13 *)malloc(VAR17);
FUN2(VAR18, VAR17, (char *)VAR14);
VAR2 = (struct VAR1 *)VAR14;
VAR6 = FUN3(VAR2, VAR18, VAR2, VAR19);
if (VAR6)
return (0);
VAR15 = malloc(VAR14->VAR20.VAR21);
if (VAR15 == NULL) {
(void) fprintf(VAR22, FUN4(""
""));
FUN5(32);
}
FUN2(VAR14->VAR20.VAR23, VAR14->VAR20.VAR21,
VAR15);
VAR5 = (VAR3 *)VAR15 + VAR14->VAR20.VAR21;

VAR16 = VAR14->VAR20.VAR23;
for (VAR4 = (VAR3 *)VAR15; VAR4 < VAR5; VAR4 += VAR17,
VAR16++) {

VAR2 = (struct VAR1 *)VAR4;
VAR6 = FUN3(VAR2, VAR16, VAR2, 0);
if (VAR6)
continue;

switch (VAR2->VAR24) {
case VAR25:

VAR26 = VAR2->VAR27 + 1;
VAR8 = (struct VAR7 *)VAR2;
VAR28 = VAR8->VAR29 + 1;
break;
case VAR19:
VAR14 = (struct VAR13 *)VAR2;
break;
case VAR30:
break;
case VAR31:
break;
case VAR32:
VAR10 = (struct VAR9 *)VAR2;
VAR33 = VAR10->VAR34;
VAR35 = VAR10->VAR36;
VAR37 = VAR33 + VAR35;
break;
case VAR38:
VAR12 = (struct VAR11 *)VAR2;
break;
case VAR39:
break;
case VAR40:
goto VAR41;
break;
case VAR42:
break;
default:
break;
}
}
VAR41:
if (!VAR10 || !VAR12) {
return (0);
}
return (1);
}