int
FUN1(uintptr_t VAR1, uint_t VAR2, int argc, const VAR3 *argv)
{
char *VAR4 = NULL;
uint_t VAR5 = VAR6;
uint_t VAR7 = VAR6;
uint64_t VAR8 = 0;
uintptr_t VAR9 = 0;
uint_t VAR10 = VAR6;
uint_t VAR11 = VAR6;
uint_t VAR12 = 0;
int VAR13 = VAR14;
int VAR15;

if ((argv = FUN2(VAR1, VAR2, argc, argv, &VAR2, &VAR4, &VAR5,
&VAR7, &VAR8, &VAR9, &VAR10, &VAR11, &VAR12)) == NULL ||
VAR5 || VAR10 || VAR12 != 0 || VAR7 || VAR8 != 0 || VAR11)
return (VAR16);

while (argv->VAR17 != VAR18 || argv->VAR19.VAR20 != NULL) {
if (argv->VAR17 == VAR18) {
VAR15 = FUN3(VAR21.VAR22, argv->VAR19.VAR20,
VAR2, VAR23, NULL);
} else {
VAR15 = FUN4(VAR21.VAR22, argv->VAR19.VAR24,
VAR2, VAR23, NULL);
}

if (VAR15 == 0) {
FUN5("",
argv->VAR17 == VAR18 ? argv->VAR19.VAR20 :
FUN6(argv->VAR19.VAR24, VAR21.VAR25,
VAR26 | VAR27));
VAR13 = VAR28;

} else if (VAR4 || VAR9)
FUN7(VAR21.VAR22, VAR15, VAR4, VAR9);

argv++;
}

return (VAR13);
}