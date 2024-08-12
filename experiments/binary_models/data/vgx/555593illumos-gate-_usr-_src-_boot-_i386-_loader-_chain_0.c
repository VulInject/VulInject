FUN1(VAR1, "", "", VAR2);

static int
FUN2(int argc, char *argv[])
{
int VAR3, VAR4, VAR5 = VAR6;
struct stat VAR7;
vm_offset_t VAR8 = 0x100000;
struct VAR9 *VAR10;

if (argc == 1) {
VAR11 = "";
return (VAR12);
}
if (argc != 2) {
VAR11 = "";
return (VAR12);
}

VAR3 = open(argv[1], VAR13);
if (VAR3 == -1) {
VAR11 = "";
return (VAR12);
}

VAR4 = strlen(argv[1]);
if (argv[1][VAR4-1] != '') {
if (FUN3(VAR3, &VAR7) == -1) {
VAR11 = "";
close(VAR3);
return (VAR12);
}
VAR5 = VAR7.VAR14;
} else if (FUN4(argv[1], "", 4) != 0) {
VAR11 = "";
close(VAR3);
return (VAR12);
}

FUN5((void **)(&VAR10), argv[1], NULL);
if (VAR10 == NULL) {
VAR11 = "";
close(VAR3);
return (VAR12);
}

if (VAR15.FUN6(VAR3, VAR8, VAR5) != VAR5) {
VAR11 = "";
close(VAR3);
return (VAR12);
}
close(VAR3);

if (argv[1][VAR4-1] == '' &&
*((VAR16 *)FUN7(VAR8 + VAR17)) != VAR18) {
VAR11 = "";
return (VAR12);
}

FUN8(3);
VAR19[0].VAR20 = VAR8;
VAR19[0].VAR21 = 0x7C00;
VAR19[0].VAR5 = VAR5;

VAR22 = FUN9(VAR10);
VAR23 = VAR24;
VAR25 = 0;
VAR26 = 0;
VAR27 = 0;
VAR28 = 0;
VAR29 = 0;
VAR30 = 0;
VAR31 = 0x7C00;
VAR32 = 0x7C00;
VAR33 = 0;

FUN10(VAR34, 0x600, VAR24);

FUN11();

FUN12((void *)0x600);

FUN13("");
return (VAR12);		
}