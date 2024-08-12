void FUN1(VAR1 *VAR2, hwaddr VAR3, uint32_t VAR4, const char *VAR5, const char *VAR6, void (*VAR7)(VAR1 *))
{
    VAR8 *VAR9;
    const char *VAR10;
    const char *VAR11;
    const char *VAR12;
    VAR9 = FUN2();
    VAR10 = FUN3(VAR9, "");
    VAR11 = FUN3(VAR9, "");
    VAR12 = FUN3(VAR9, "");
    if (VAR12)
    {
        VAR6 = VAR12;
    }
    else
    {
        VAR6 = FUN4(VAR13, VAR6);
    }
    VAR14.VAR7 = VAR7;
    FUN5(VAR15, VAR2);
    if (VAR10)
    {
        int VAR16;
        uint64_t VAR17, VAR18, VAR19;
        uint32_t VAR20;
        int VAR21 = 0;
        VAR21 = 1;
        VAR16 = FUN6(VAR10, NULL, NULL, &VAR17, &VAR18, &VAR19, VAR21, VAR22, 0);
        VAR20 = VAR17;
        if (VAR20 == 0xc0000000)
        {
            VAR16 = FUN6(VAR10, VAR23, NULL, &VAR17, NULL, NULL, VAR21, VAR22, 0);
        }
        VAR14.VAR24 = VAR3 + (VAR17 & 0x0fffffff);
        if (VAR16 < 0)
        {
            hwaddr VAR25, VAR26;
            VAR16 = FUN7(VAR10, &VAR25, &VAR26, 0);
            VAR14.VAR24 = VAR25;
            VAR19 = (VAR26 + VAR16 + 3) & ~3;
        }
        if (VAR16 < 0)
        {
            VAR16 = FUN8(VAR10, VAR3, VAR27);
            VAR14.VAR24 = VAR3;
            VAR19 = (VAR3 + VAR16 + 3) & ~3;
        }
        if (VAR5)
        {
            int VAR28;
            uint32_t VAR29;
            VAR19 = FUN9(VAR19 + VAR16, 4);
            VAR14.VAR30 = VAR19;
            VAR29 = VAR14.VAR30 - VAR3;
            VAR28 = FUN10(VAR5, VAR14.VAR30, VAR27 - VAR29);
            if (VAR28 < 0)
            {
                VAR28 = FUN8(VAR5, VAR14.VAR30, VAR27 - VAR29);
            }
            if (VAR28 < 0)
            {
                FUN11("", VAR5);
                FUN12(VAR31);
            }
            VAR14.VAR32 = VAR14.VAR30 + VAR28;
            VAR19 = FUN9(VAR19 + VAR28, 4);
        }
        VAR14.VAR33 = VAR19 + 4096;
        if (VAR11 && strlen(VAR11))
        {
            FUN13("", VAR14.VAR33, 256, VAR11);
        }
        VAR14.VAR34 = VAR14.VAR33 + 4096;
        FUN14(VAR14.VAR34, VAR27, VAR14.VAR30, VAR14.VAR32, VAR11, VAR6);
    }
}