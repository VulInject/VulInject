int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int VAR6)
{
    mmu_ctx_t VAR7;
    int VAR8 = 0, VAR9 = 0;
    int VAR10;
    int VAR11 = 0;
    if (VAR4 == 2)
    {
        VAR4 = 0;
        VAR10 = VAR12;
    }
    else
    {
        VAR10 = VAR13;
    }
    VAR11 = FUN2(VAR2, &VAR7, VAR3, VAR4, VAR10, 1);
    if (VAR11 == 0)
    {
        VAR11 = FUN3(VAR2, VAR3 & VAR14, VAR7.VAR15 & VAR14, VAR7.VAR16, VAR5, VAR6);
    }
    else if (VAR11 < 0)
    {
        if (VAR17 > 0)
            FUN4(VAR2, VAR18, fprintf, 0);
        if (VAR10 == VAR12)
        {
            VAR8 = VAR19;
            switch (VAR11)
            {
            case -1:
                if (FUN5(FUN6(VAR2) == VAR20))
                {
                    VAR8 = VAR21;
                    VAR2->VAR22[VAR23] = VAR3;
                    VAR2->VAR22[VAR24] = 0x80000000 | VAR7.VAR25;
                    VAR9 = 1 << 18;
                    goto VAR26;
                }
                else if (FUN5(FUN6(VAR2) == VAR27))
                {
                }
                else
                {
                    VAR9 = 0x40000000;
                }
                break;
            case -2:
                VAR9 = 0x08000000;
                break;
            case -3:
                VAR9 = 0x10000000;
                break;
            case -4:
                VAR9 = 0x10000000;
                break;
            case -5:
                VAR8 = VAR28;
                VAR9 = 0;
                break;
            }
        }
        else
        {
            VAR8 = VAR29;
            switch (VAR11)
            {
            case -1:
                if (FUN5(FUN6(VAR2) == VAR20))
                {
                    if (VAR4 == 1)
                    {
                        VAR8 = VAR30;
                        VAR9 = 1 << 16;
                    }
                    else
                    {
                        VAR8 = VAR31;
                        VAR9 = 0;
                    }
                    VAR2->VAR22[VAR32] = VAR3;
                    VAR2->VAR22[VAR33] = 0x80000000 | VAR7.VAR25;
                VAR26:
                    VAR9 |= VAR7.VAR34 << 19;
                    VAR2->VAR22[VAR35] = VAR7.VAR36[0];
                    VAR2->VAR22[VAR37] = VAR7.VAR36[1];
                    goto VAR38;
                }
                else if (FUN5(FUN6(VAR2) == VAR27))
                {
                }
                else
                {
                    VAR9 = 0x40000000;
                }
                break;
            case -2:
                VAR9 = 0x08000000;
                break;
            case -4:
                switch (VAR10)
                {
                case VAR39:
                    VAR8 = VAR40;
                    VAR9 = VAR41;
                    break;
                case VAR42:
                    VAR9 = 0x04000000;
                    break;
                case VAR43:
                    VAR9 = 0x04100000;
                    break;
                default:
                    FUN7("", VAR11);
                    VAR8 = VAR44;
                    VAR9 = VAR45 | VAR46;
                    break;
                }
                break;
            case -5:
                VAR8 = VAR47;
                VAR9 = 0;
                break;
            }
            if (VAR8 == VAR29 && VAR4 == 1)
                VAR9 |= 0x02000000;
            VAR2->VAR22[VAR48] = VAR3;
            VAR2->VAR22[VAR49] = VAR9;
        }
    VAR38:
        FUN7("", VAR50, VAR8, VAR9);
        VAR2->VAR51 = VAR8;
        VAR2->VAR9 = VAR9;
        VAR11 = 1;
    }
    return VAR11;
}