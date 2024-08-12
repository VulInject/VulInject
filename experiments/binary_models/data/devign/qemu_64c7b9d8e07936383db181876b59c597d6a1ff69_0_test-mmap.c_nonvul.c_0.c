void FUN1(void)
{
    char *VAR1;
    unsigned int *VAR2;
    uintptr_t VAR3;
    int VAR4;
    fprintf(VAR5, "", VAR6);
    for (VAR4 = 0; VAR4 < 0x10; VAR4++)
    {
        VAR2 = FUN2(NULL, VAR7, VAR8, VAR9, VAR10, (VAR11 - sizeof *VAR2) & ~VAR12);
        FUN3(VAR2 != VAR13);
        VAR3 = (VAR14)VAR2;
        FUN3((VAR3 & VAR12) == 0);
        FUN3(VAR2[(VAR11 & VAR12) / sizeof *VAR2 - 1] == ((VAR11 - sizeof *VAR2) / sizeof *VAR2));
        VAR1 = (void *)VAR2;
        FUN3(VAR1[VAR7 - 4] == 0);
        FUN4(VAR2, VAR7);
    }
    fprintf(VAR5, "");
}