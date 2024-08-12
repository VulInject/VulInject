static void FUN1(unsigned long VAR1)
{
    VAR2 = VAR3;
    VAR4 = VAR5;
    FUN2(VAR2, VAR4);
    VAR4 = VAR1;
    if (VAR4 == 0)
    {
        VAR4 = VAR5;
        VAR4 = (unsigned long)(VAR6 / 4);
    }
    if (VAR4 < VAR7)
        VAR4 = VAR7;
    {
        int VAR8;
        void *VAR9 = NULL;
        VAR8 = VAR10 | VAR11;
        VAR8 |= VAR12;
        if (VAR4 > (800 * 1024 * 1024))
            VAR4 = (800 * 1024 * 1024);
        VAR8 |= VAR13;
        VAR9 = (void *)0x60000000UL;
        if (VAR4 > (512 * 1024 * 1024))
            VAR4 = (512 * 1024 * 1024);
        VAR8 |= VAR13;
        VAR9 = (void *)0x01000000UL;
        if (VAR4 > 16 * 1024 * 1024)
            VAR4 = 16 * 1024 * 1024;
        if (VAR4 > (3ul * 1024 * 1024 * 1024))
        {
            VAR4 = 3ul * 1024 * 1024 * 1024;
        }
        VAR9 = (void *)0x90000000UL;
        VAR2 = FUN3(VAR9, VAR4, VAR14 | VAR15 | VAR16, VAR8, -1, 0);
        if (VAR2 == VAR17)
        {
            fprintf(VAR18, "");
            FUN4(1);
        }
    }
    || FUN5(VAR19) || FUN5(VAR20)
    {
        int VAR8;
        void *VAR21 = NULL;
        VAR8 = VAR10 | VAR11;
        VAR8 |= VAR13;
        VAR21 = (void *)0x40000000;
        if (VAR4 > (800 * 1024 * 1024))
            VAR4 = (800 * 1024 * 1024);
        VAR8 |= VAR13;
        VAR21 = (void *)0x60000000UL;
        if (VAR4 > (512 * 1024 * 1024))
        {
            VAR4 = (512 * 1024 * 1024);
        }
        VAR2 = FUN3(VAR21, VAR4, VAR14 | VAR15 | VAR16, VAR8, -1, 0);
        if (VAR2 == VAR17)
        {
            fprintf(VAR18, "");
            FUN4(1);
        }
    }
    VAR2 = FUN6(VAR4);
    FUN2(VAR2, VAR4);
    FUN2(VAR22, sizeof(VAR22));
    VAR23 = VAR4 - (VAR24 * VAR25);
    VAR26 = VAR4 / VAR27;
    VAR28 = FUN6(VAR26 * sizeof(VAR29));
}