static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8[VAR3].VAR9;
    FUN2(VAR3, "", VAR4, VAR5);
    switch (VAR4)
    {
    case VAR10:
        VAR7->VAR11 = VAR5;
        break;
    case VAR12:
        VAR7->VAR13 = VAR5;
        break;
    case VAR14:
        VAR7->VAR15 = VAR5;
        break;
    case VAR16:
        VAR7->VAR17 = VAR5;
        break;
    case VAR18:
        VAR7->VAR19 &= ~VAR5;
        FUN3(VAR2);
        break;
    case VAR20:
        VAR7->VAR21 = VAR5 & 0xfdc000ff;
        FUN3(VAR2);
        break;
    case VAR22:
        VAR7->VAR23 = (VAR7->VAR23 & VAR24) | (VAR5 & ~VAR24);
        if (VAR7->VAR23 & VAR25)
        {
            if (FUN4(&VAR2->VAR8[VAR3]))
            {
                VAR7->VAR23 |= VAR26;
            }
            else
            {
                FUN5(""
                             "");
            }
        }
        else if (VAR7->VAR23 & VAR26)
        {
            FUN6(&VAR2->VAR8[VAR3]);
            VAR7->VAR23 = VAR7->VAR23 & ~(VAR26);
        }
        if (VAR7->VAR23 & VAR27)
        {
            if (FUN7(&VAR2->VAR8[VAR3]))
            {
                VAR7->VAR23 |= VAR28;
            }
            else
            {
                FUN5(""
                             "");
            }
        }
        else if (VAR7->VAR23 & VAR28)
        {
            FUN8(&VAR2->VAR8[VAR3]);
            VAR7->VAR23 = VAR7->VAR23 & ~(VAR28);
        }
        if ((VAR7->VAR23 & VAR28) && !VAR2->VAR8[VAR3].VAR29)
        {
            FUN9(&VAR2->VAR8[VAR3]);
            VAR2->VAR8[VAR3].VAR29 = true;
        }
        FUN10(VAR2, VAR3);
        break;
    case VAR30:
        break;
    case VAR31:
        break;
    case VAR32:
        break;
    case VAR33:
        if (((VAR7->VAR34 & VAR35) == 1) && ((VAR5 & VAR35) == 0))
        {
            FUN11(VAR2, VAR3);
        }
        VAR7->VAR34 = VAR5;
        break;
    case VAR36:
        VAR7->VAR37 &= ~VAR5;
        break;
    case VAR38:
        VAR7->VAR39 |= VAR5;
        break;
    case VAR40:
        VAR7->VAR41 |= VAR5;
        FUN10(VAR2, VAR3);
        break;
    default:
        break;
    }
}