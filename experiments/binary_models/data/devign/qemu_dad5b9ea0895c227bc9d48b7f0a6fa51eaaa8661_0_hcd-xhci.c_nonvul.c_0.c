static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7, VAR8;
    FUN2(VAR6->VAR9, VAR2, VAR3);
    switch (VAR2)
    {
    case 0x00:
        if (VAR3 & VAR10)
        {
            FUN3(VAR6, true);
            break;
        }
        if (VAR3 & VAR11)
        {
            FUN3(VAR6, false);
            break;
        }
        VAR7 = VAR6->VAR7;
        VAR8 = 0;
        VAR7 &= ~(VAR3 & (VAR12 | VAR13 | VAR14 | VAR15 | VAR16 | VAR17 | VAR18));
        if (VAR3 & VAR19)
        {
            uint32_t VAR20 = FUN4(VAR6->VAR7, VAR21);
            uint32_t VAR22 = FUN4(VAR3, VAR21);
            switch (VAR22)
            {
            case VAR23:
                if (VAR20 != VAR23)
                {
                    FUN5(&VAR7, VAR22, VAR21);
                    FUN6(VAR6->VAR9, VAR22);
                    VAR8 = VAR17;
                }
                break;
            case VAR24:
                if (VAR20 < VAR24)
                {
                    FUN5(&VAR7, VAR22, VAR21);
                    FUN6(VAR6->VAR9, VAR22);
                }
                break;
            case VAR25:
                break;
            default:
                fprintf(VAR26, "", VAR27, VAR20, VAR22);
                break;
            }
        }
        VAR7 &= ~(VAR28 | VAR29 | VAR30 | VAR31);
        VAR7 |= (VAR3 & (VAR28 | VAR29 | VAR30 | VAR31));
        VAR6->VAR7 = VAR7;
        if (VAR8)
        {
            FUN7(VAR6, VAR8);
        }
        break;
    case 0x04:
    case 0x08:
    default:
        FUN8("", VAR2);
    }
}