static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = NULL;
    uint32_t VAR8 = VAR2 - VAR5->VAR9[1];
    switch (VAR8)
    {
    case VAR10:
    case VAR11:
    case VAR12:
        VAR7 = &VAR5->VAR13[FUN2(VAR8)];
        if ((VAR7->VAR14 & VAR15) && (VAR7->VAR16 & VAR17))
        {
            VAR7->VAR16 &= ~(VAR17 | VAR18);
            VAR7->VAR19 = VAR7->VAR20;
            VAR7->VAR20 = (VAR7->VAR20 + 1) % 32;
            FUN3(VAR5, VAR7);
        }
        VAR7->VAR21 = VAR3 % 32;
        FUN4("", FUN2(VAR8), VAR3);
        break;
    case VAR22:
    case VAR23:
    case VAR24:
        VAR7 = &VAR5->VAR13[FUN2(VAR8)];
        if (VAR3 & VAR25)
        {
            FUN5(VAR5, VAR7);
        }
        else
        {
            VAR7->VAR14 = VAR3 & VAR26;
            if (!(VAR7->VAR14 & VAR15))
            {
                FUN6(VAR5, VAR7 - VAR5->VAR13, 0);
                VAR7->VAR16 |= VAR17;
            }
            else
            {
                VAR7->VAR19 = VAR7->VAR20;
                VAR7->VAR20 = (VAR7->VAR20 + 1) % 32;
                FUN3(VAR5, VAR7);
                VAR7->VAR16 &= ~VAR17;
                FUN6(VAR5, VAR7 - VAR5->VAR13, 1);
            }
        }
        FUN4("", FUN2(VAR8), VAR3, VAR7->VAR14);
        break;
    case VAR27:
    case VAR28:
    case VAR29:
        VAR7 = &VAR5->VAR13[FUN2(VAR8)];
        VAR7->VAR16 |= VAR3 & ~(VAR30 | VAR31);
        FUN7(VAR5, VAR7, VAR7->VAR16 & ~(VAR3 & VAR31));
        FUN4("", FUN2(VAR8), VAR3, VAR7->VAR16);
        break;
    default:
        FUN4("", VAR2, VAR3);
        break;
    }
}