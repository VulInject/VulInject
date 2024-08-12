void FUN1(void)
{
    char *VAR1;
    char *VAR2;
    char *VAR3;
    uintptr_t VAR4;
    int VAR5;
    fprintf(VAR6, "", VAR7);
    for (VAR5 = 0; VAR5 < 0x2fff; VAR5++)
    {
        int VAR8;
        VAR1 = FUN2(NULL, VAR9, VAR10, VAR11 | VAR12, -1, 0);
        FUN3(VAR1 != VAR13);
        VAR4 = (VAR14)VAR1;
        FUN3((VAR4 & VAR15) == 0);
        memcpy(VAR16, VAR1, VAR9);
        VAR2 = FUN2(NULL, VAR9, VAR10, VAR11 | VAR12, -1, 0);
        FUN3(VAR2 != VAR13);
        VAR4 = (VAR14)VAR2;
        FUN3((VAR4 & VAR15) == 0);
        memcpy(VAR16, VAR2, VAR9);
        FUN4(VAR1, VAR9);
        VAR8 = VAR9 * 8;
        VAR3 = FUN2(NULL, VAR8, VAR10, VAR11 | VAR12, -1, 0);
        if (VAR3 < VAR2 && (VAR3 + VAR8) > VAR2)
            FUN3(0);
        memcpy(VAR16, VAR3, VAR9);
        FUN3(VAR3 != VAR13);
        VAR4 = (VAR14)VAR3;
        FUN3((VAR4 & VAR15) == 0);
        FUN4(VAR2, VAR9);
        FUN4(VAR3, VAR8);
    }
    fprintf(VAR6, "");
}