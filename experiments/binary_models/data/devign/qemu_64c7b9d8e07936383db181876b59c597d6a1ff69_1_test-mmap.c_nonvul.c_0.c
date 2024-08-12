void FUN1(void)
{
    char *VAR1;
    char *VAR2;
    unsigned int *VAR3;
    uintptr_t VAR4;
    int VAR5;
    VAR1 = FUN2(NULL, VAR6 * 44, VAR7, VAR8 | VAR9, -1, 0);
    fprintf(VAR10, "", VAR11, (void *)VAR1);
    FUN3(VAR1 != VAR12);
    for (VAR5 = 0; VAR5 < 0x10; VAR5++)
    {
        VAR3 = FUN2(VAR1, VAR6, VAR7, VAR8 | VAR13, VAR14, (VAR15 - sizeof *VAR3) & ~VAR16);
        FUN3(VAR3 != VAR12);
        VAR4 = (VAR17)VAR3;
        FUN3((VAR4 & VAR16) == 0);
        FUN3(VAR3[(VAR15 & VAR16) / sizeof *VAR3 - 1] == ((VAR15 - sizeof *VAR3) / sizeof *VAR3));
        VAR2 = (void *)VAR3;
        FUN3(VAR2[VAR6 - 4] == 0);
        FUN4(VAR3, VAR6);
        VAR1 += VAR6;
    }
    fprintf(VAR10, "");
}