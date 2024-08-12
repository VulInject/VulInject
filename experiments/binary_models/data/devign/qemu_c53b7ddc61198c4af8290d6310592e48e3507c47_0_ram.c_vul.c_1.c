static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0, VAR4 = 0;
    bool VAR5 = false;
    bool VAR6 = VAR7 == VAR8;
    VAR9 *VAR10 = FUN2();
    void *VAR11 = FUN3(VAR10);
    void *VAR12 = NULL;
    while (!VAR4 && !(VAR3 & VAR13))
    {
        ram_addr_t VAR14;
        void *VAR15 = NULL;
        void *VAR16 = NULL;
        void *VAR17 = NULL;
        uint8_t VAR18;
        bool VAR19 = false;
        VAR14 = FUN4(VAR2);
        VAR3 = VAR14 & ~VAR20;
        VAR14 &= VAR20;
        FUN5((VAR21)VAR14, VAR3);
        VAR5 = false;
        if (VAR3 & (VAR22 | VAR23))
        {
            VAR15 = FUN6(VAR2, VAR14, VAR3);
            if (!VAR15)
            {
                FUN7("" VAR24, VAR14);
                VAR4 = -VAR25;
                break;
            }
            VAR16 = VAR15;
            VAR16 = VAR11 + ((VAR26)VAR15 & ~VAR27);
            if (!((VAR26)VAR15 & ~VAR27))
            {
                VAR19 = true;
            }
            else
            {
                if (VAR15 != (VAR12 + VAR8))
                {
                    FUN7("", VAR15, VAR12);
                    VAR4 = -VAR25;
                    break;
                }
            }
            VAR5 = (((VAR26)VAR15 + VAR8) & ~VAR27) == 0;
            VAR17 = VAR11;
        }
        switch (VAR3 & ~VAR28)
        {
        case VAR22:
            VAR18 = FUN8(VAR2);
            memset(VAR16, VAR18, VAR8);
            if (VAR18)
            {
                VAR19 = false;
            }
            break;
        case VAR23:
            VAR19 = false;
            if (!VAR5 || !VAR6)
            {
                FUN9(VAR2, VAR16, VAR8);
            }
            else
            {
                FUN10(VAR2, (VAR29 **)&VAR17, VAR8);
            }
            break;
        case VAR13:
            break;
        default:
            FUN7(""
                         "",
                         VAR3);
            VAR4 = -VAR25;
        }
        if (VAR5)
        {
            if (VAR19)
            {
                VAR4 = FUN11(VAR10, VAR15 + VAR8 - VAR7);
            }
            else
            {
                VAR4 = FUN12(VAR10, VAR15 + VAR8 - VAR7, VAR17);
            }
        }
        if (!VAR4)
        {
            VAR4 = FUN13(VAR2);
        }
    }
    return VAR4;