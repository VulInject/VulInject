static VAR1
FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR5);
struct VAR10 *VAR11 = FUN3(VAR3);
struct ptp_ocp_signal VAR12 = { };
int VAR13 = (VAR14)VAR9->VAR15;
int argc, VAR16;
char **argv;

argv = FUN4(VAR17, VAR6, &argc);
if (!argv)
return -VAR18;

VAR16 = -VAR19;
VAR12.VAR20 = VAR11->signal[VAR13].VAR20;
VAR12.VAR21 = VAR11->signal[VAR13].VAR21;
VAR12.VAR22 = VAR11->signal[VAR13].VAR22;
VAR12.VAR23 = VAR11->signal[VAR13].VAR23;

switch (argc) {
case 4:
argc--;
VAR16 = FUN5(argv[argc], &VAR12.VAR23);
if (VAR16)
goto VAR24;
VAR25;
case 3:
argc--;
VAR16 = FUN6(argv[argc], 0, &VAR12.VAR21);
if (VAR16)
goto VAR24;
VAR25;
case 2:
argc--;
VAR16 = FUN7(argv[argc], 0, &VAR12.VAR20);
if (VAR16)
goto VAR24;
VAR25;
case 1:
argc--;
VAR16 = FUN6(argv[argc], 0, &VAR12.VAR22);
if (VAR16)
goto VAR24;
break;
default:
goto VAR24;
}

VAR16 = FUN8(VAR11, VAR13, &VAR12);
if (VAR16)
goto VAR24;

VAR16 = FUN9(VAR11->VAR26[VAR13], VAR13, VAR12.VAR22 != 0);

VAR24:
FUN10(argv);
return VAR16 ? VAR16 : VAR7;
}