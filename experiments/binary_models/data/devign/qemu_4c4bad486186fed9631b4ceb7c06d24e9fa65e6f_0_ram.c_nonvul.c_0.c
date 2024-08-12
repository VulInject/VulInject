static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0, VAR4 = 0;
    bool VAR5 = false;
    bool VAR6 = VAR7 == VAR8;
    VAR9 *VAR10 = FUN2();
    void *VAR11 = FUN3(VAR10);
    void *VAR12 = NULL;
    bool VAR13 = false;
    while (!VAR4 && !(VAR3 & VAR14))
    {
        ram_addr_t VAR15;
        void *VAR16 = NULL;
        void *VAR17 = NULL;
        void *VAR18 = NULL;
        uint8_t VAR19;
        VAR15 = FUN4(VAR2);
        VAR3 = VAR15 & ~VAR20;
        VAR15 &= VAR20;
        FUN5((VAR21)VAR15, VAR3);
        VAR5 = false;
        if (VAR3 & (VAR22 | VAR23))
        {
            VAR24 *VAR25 = FUN6(VAR2, VAR3);
            VAR16 = FUN7(VAR25, VAR15);
            if (!VAR16)
            {
                FUN8("" VAR26, VAR15);
                VAR4 = -VAR27;
                break;
            }
            VAR17 = VAR16;
            VAR17 = VAR11 + ((VAR28)VAR16 & ~VAR29);
            if (!((VAR28)VAR16 & ~VAR29))
            {
                VAR13 = true;
            }
            else
            {
                if (VAR16 != (VAR12 + VAR8))
                {
                    FUN8("", VAR16, VAR12);
                    VAR4 = -VAR27;
                    break;
                }
            }
            VAR5 = (((VAR28)VAR16 + VAR8) & ~VAR29) == 0;
            VAR18 = VAR11;
        }
        VAR12 = VAR16;
        switch (VAR3 & ~VAR30)
        {
        case VAR22:
            VAR19 = FUN9(VAR2);
            memset(VAR17, VAR19, VAR8);
            if (VAR19)
            {
                VAR13 = false;
            }
            break;
        case VAR23:
            VAR13 = false;
            if (!VAR5 || !VAR6)
            {
                FUN10(VAR2, VAR17, VAR8);
            }
            else
            {
                FUN11(VAR2, (VAR31 **)&VAR18, VAR8);
            }
            break;
        case VAR14:
            break;
        default:
            FUN8(""
                         "",
                         VAR3);
            VAR4 = -VAR27;
        }
        if (VAR5)
        {
            if (VAR13)
            {
                VAR4 = FUN12(VAR10, VAR16 + VAR8 - VAR7);
            }
            else
            {
                VAR4 = FUN13(VAR10, VAR16 + VAR8 - VAR7, VAR18);
            }
        }
        if (!VAR4)
        {
            VAR4 = FUN14(VAR2);
        }
    }
    return VAR4;
}