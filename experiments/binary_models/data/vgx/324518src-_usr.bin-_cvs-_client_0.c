void
FUN1(void)
{
struct VAR1 *VAR2;
char *VAR3, *argv[10], *VAR4;
int VAR5[2], VAR6[2], argc;

if (VAR7 == 1)
FUN2("");

switch (VAR8->VAR9) {
case VAR10:
case VAR11:
case VAR12:
case VAR13:
FUN2("");
default:
break;
}

if (FUN3(VAR5) == -1)
FUN2("", strerror(VAR14));
if (FUN3(VAR6) == -1)
FUN2("", strerror(VAR14));

switch (FUN4()) {
case -1:
FUN2("", strerror(VAR14));
case 0:
if (FUN5(VAR5[0], VAR15) == -1)
FUN2("", strerror(VAR14));
if (FUN5(VAR6[1], VAR16) == -1)
FUN2("", strerror(VAR14));

close(VAR5[1]);
close(VAR6[0]);

if ((VAR3 = getenv("")) == NULL)
VAR3 = VAR17;

argc = 0;
argv[argc++] = VAR18;

if (VAR8->VAR19 != NULL) {
argv[argc++] = "";
argv[argc++] = VAR8->VAR19;
}

argv[argc++] = "";
argv[argc++] = VAR8->VAR20;
argv[argc++] = VAR3;
argv[argc++] = "";
argv[argc] = NULL;

FUN6(VAR21, "",
VAR8->VAR20);

execvp(argv[0], argv);
FUN2("");
default:
break;
}

close(VAR5[0]);
close(VAR6[1]);

if ((VAR8->VAR22 = FUN7(VAR5[1], "")) == NULL)
FUN2("", strerror(VAR14));
if ((VAR8->VAR23 = FUN7(VAR6[0], "")) == NULL)
FUN2("", strerror(VAR14));

FUN8(VAR8->VAR22, NULL,VAR24, 0);
FUN8(VAR8->VAR23, NULL, VAR24, 0);

FUN9();

if (VAR25 != VAR26)
FUN10("", VAR8->VAR27);

VAR4 = FUN11();
FUN10("", VAR4);
free(VAR4);

FUN10("");
FUN12();

FUN10("");

if (VAR28 == 1)
FUN10("");

if (VAR29 == 1)
FUN10("");

switch (VAR30) {
case 0:
FUN10("");
break;
case 1:

FUN10("");
break;
default:
break;
}

if (VAR31 == 1)
FUN10("");

if (VAR32 == 1)
FUN10("");


FUN13(VAR2, &VAR33, VAR34)
FUN10("", VAR2->VAR35, VAR2->VAR36);
}