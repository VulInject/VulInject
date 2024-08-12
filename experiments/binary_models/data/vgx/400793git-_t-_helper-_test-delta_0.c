*
* This code is free VAR1; you can redistribute it and/or VAR2
* it under the terms of the GNU General Public License version 2 VAR3
* published by the Free Software VAR4.


static const char VAR5[] =
"";

int FUN1(int argc, const char **argv)
{
int VAR6;
struct stat VAR7;
void *VAR8 = NULL, *VAR9 = NULL, *VAR10 = NULL;
unsigned long VAR11, VAR12, VAR13;
int VAR14 = 1;

if (argc != 5 || (strcmp(argv[1], "") && strcmp(argv[1], ""))) {
fprintf(VAR15, "", VAR5);
return 1;
}

VAR6 = open(argv[2], VAR16);
if (VAR6 < 0 || FUN2(VAR6, &VAR7)) {
FUN3(argv[2]);
return 1;
}
VAR11 = VAR7.VAR17;
VAR8 = xmalloc(VAR11);
if (FUN4(VAR6, VAR8, VAR11) < 0) {
FUN3(argv[2]);
close(VAR6);
goto VAR18;
}
close(VAR6);

VAR6 = open(argv[3], VAR16);
if (VAR6 < 0 || FUN2(VAR6, &VAR7)) {
FUN3(argv[3]);
goto VAR18;
}
VAR12 = VAR7.VAR17;
VAR9 = xmalloc(VAR12);
if (FUN4(VAR6, VAR9, VAR12) < 0) {
FUN3(argv[3]);
close(VAR6);
goto VAR18;
}
close(VAR6);

if (argv[1][1] == '')
VAR10 = FUN5(VAR8, VAR11,
VAR9, VAR12,
&VAR13, 0);
else
VAR10 = FUN6(VAR8, VAR11,
VAR9, VAR12,
&VAR13);
if (!VAR10) {
fprintf(VAR15, "");
goto VAR18;
}

VAR6 = open (argv[4], VAR19|VAR20|VAR21, 0666);
if (VAR6 < 0 || FUN7(VAR6, VAR10, VAR13) < 0) {
FUN3(argv[4]);
goto VAR18;
}

VAR14 = 0;
VAR18:
free(VAR8);
free(VAR9);
free(VAR10);

return VAR14;
}