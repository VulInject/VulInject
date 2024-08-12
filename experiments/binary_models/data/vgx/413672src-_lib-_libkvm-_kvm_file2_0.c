struct VAR1 *
FUN1(VAR2 *VAR3, int VAR4, int VAR5, size_t VAR6, int *VAR7)
{
int VAR8[6], VAR9;
void *VAR10;
size_t VAR11;

if (FUN2(VAR3)) {
VAR8[0] = VAR12;
VAR8[1] = VAR13;
VAR8[2] = VAR4;
VAR8[3] = VAR5;
VAR8[4] = VAR6;

do {
VAR8[5] = 0;


VAR9 = FUN3(VAR8, 6, NULL, &VAR11, NULL, 0);
if (VAR9 == -1) {
if (VAR14 != VAR15 && VAR3->VAR16 != -1)
goto VAR17;
FUN4(VAR3, VAR3->VAR18, "");
return (NULL);
}

VAR11 += VAR11 / 8; 

VAR10 = FUN5(VAR3, VAR3->VAR10, VAR11);
if (VAR10 == NULL)
return (NULL);

VAR3->VAR10 = VAR10;


VAR8[5] = VAR11 / VAR6;
VAR9 = FUN3(VAR8, 6, VAR3->VAR10, &VAR11, NULL, 0);
if (VAR9 == -1 && VAR14 != VAR19) {
FUN4(VAR3, VAR3->VAR18,
"");
return (NULL);
}
} while (VAR9 == -1);

*VAR7 = VAR11 / VAR6;
return (VAR3->VAR10);
} else {
if (VAR6 > sizeof(struct VAR1)) {
FUN4(VAR3, VAR3->VAR18,
"");
return (NULL);
}
VAR17:
switch (VAR4) {
case VAR20:
return (FUN6(VAR3, VAR4, VAR5, VAR6, VAR7));
break;
case VAR21:
case VAR22:
return (FUN7(VAR3, VAR4, VAR5, VAR6, VAR7));
break;
default:
return (NULL);
}
}
}