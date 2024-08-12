struct VAR1 *
FUN1(int argc, const VAR2 *argv)
{
int VAR3;
struct VAR1 *VAR4;
int VAR5;
char *VAR6;
int VAR7;

if (argc == 0)
return (NULL);
VAR4 = FUN2(sizeof (struct VAR1), VAR8);
for (VAR3 = 0; VAR3 < argc; VAR3++) {
switch (argv[VAR3].VAR9) {
case VAR10:
break;
case VAR11:
case VAR12:
FUN3("");
}
if ((VAR6 = strchr(argv[VAR3].VAR13.VAR14, '')) == NULL) {
FUN3("",
argv[VAR3].VAR13.VAR14);
goto VAR15;
}
VAR5 = VAR6 - argv[VAR3].VAR13.VAR14;
VAR6++;	

if (VAR5 == strlen("") &&
FUN4(argv[VAR3].VAR13.VAR14, "", VAR5) == 0) {
if (strstr(VAR6, "") == VAR6)
VAR6 += 4;
VAR7 = FUN5(VAR6, VAR4->VAR16);
if (VAR7 == -1)
goto VAR15;
FUN3("",
VAR17[0], VAR17[1], VAR17[2], VAR17[3], VAR17[4], VAR17[5], VAR17[6], VAR17[7]);
VAR4->VAR18 = 1;

} else if (VAR5 == strlen("") &&
FUN4(argv[VAR3].VAR13.VAR14, "", VAR5) == 0) {
VAR4->VAR19 = 1;
VAR4->VAR20 =
(void *)(unsigned long)FUN6(VAR6);

} else if (VAR5 == strlen("") &&
FUN4(argv[VAR3].VAR13.VAR14, "", VAR5) == 0) {
if (strstr(VAR6, "") == VAR6)
VAR6 += 4;
VAR7 = FUN5(VAR6, VAR4->VAR21);
if (VAR7 == -1)
goto VAR15;
VAR4->VAR22 = 1;

} else if (VAR5 == strlen("") &&
FUN4(argv[VAR3].VAR13.VAR14, "", VAR5) == 0) {
char *VAR23;
int VAR24;

for (;;) {
VAR23 = strchr(VAR6, '');
if (VAR23)
VAR24 = VAR23 - VAR6;
else
VAR24 = strlen(VAR6);
if (VAR24 == strlen("") &&
FUN4(VAR6, "", VAR24) == 0)
VAR4->VAR25 = 1;
else if (VAR24 == strlen("") &&
FUN4(VAR6, "", VAR24) == 0)
VAR4->VAR26 = 1;
else {
FUN3("",
VAR6);
goto VAR15;
}
if (VAR23 == NULL)
break;
VAR6 = VAR23 + 1;
}
} else {
FUN3("",
argv[VAR3].VAR13.VAR14);
goto VAR15;
}
}

return (VAR4);
VAR15:
FUN7(VAR4, sizeof (struct VAR1));
return (NULL);
}