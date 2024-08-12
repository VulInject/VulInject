static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = (VAR3 *)VAR2->VAR5;
    int VAR6 = VAR2->VAR7 * VAR2->VAR8;
    int VAR9;
    VAR4->VAR2 = VAR2;
    VAR2->VAR10 = 0;
    VAR4->VAR11.VAR12[0] = NULL;
    memset(&(VAR4->VAR13), 0, sizeof(VAR14));
    if (VAR2->VAR15 < 8)
    {
        FUN2(VAR2, VAR16, "");
        return 1;
    }
    if (((VAR2->VAR17 == VAR18) && (*((char *)VAR2->VAR19 + 7) != VAR20)) || ((VAR2->VAR17 == VAR21) && (*((char *)VAR2->VAR19 + 7) != VAR22)))
    {
        FUN2(VAR2, VAR16, "");
    }
    switch (VAR4->VAR23 = *((char *)VAR2->VAR19 + 4))
    {
    case VAR24:
        VAR4->VAR25 = VAR6 * 3;
        FUN2(VAR2, VAR26, "");
        break;
    case VAR27:
        VAR4->VAR25 = VAR6 * 2;
        FUN2(VAR2, VAR26, "");
        break;
    case VAR28:
        VAR4->VAR25 = VAR6 * 3;
        FUN2(VAR2, VAR26, "");
        break;
    case VAR29:
        VAR4->VAR25 = VAR6 / 2 * 3;
        FUN2(VAR2, VAR26, "");
        break;
    case VAR30:
        VAR4->VAR25 = VAR6 * 2;
        FUN2(VAR2, VAR26, "");
        break;
    case VAR31:
        VAR4->VAR25 = VAR6 / 2 * 3;
        FUN2(VAR2, VAR26, "");
        break;
    default:
        FUN2(VAR2, VAR16, "", VAR4->VAR23);
        return 1;
    }
    VAR4->VAR32 = *((char *)VAR2->VAR19 + 5);
    switch (VAR2->VAR17)
    {
    case VAR18:
        switch (VAR4->VAR32)
        {
        case VAR33:
            FUN2(VAR2, VAR26, "");
            break;
        case VAR34:
            VAR4->VAR25 = 0;
            FUN2(VAR2, VAR26, "");
            break;
        default:
            FUN2(VAR2, VAR16, "", VAR4->VAR32);
            return 1;
        }
        break;
    case VAR21:
        switch (VAR4->VAR32)
        {
        case VAR35:
            FUN2(VAR2, VAR26, "");
            break;
        case VAR36:
            FUN2(VAR2, VAR26, "");
            break;
        case VAR37:
            FUN2(VAR2, VAR26, "");
            break;
        default:
            if ((VAR4->VAR32 < VAR38) || (VAR4->VAR32 > VAR39))
            {
                FUN2(VAR2, VAR16, "", VAR4->VAR32);
                return 1;
            }
            FUN2(VAR2, VAR26, "", VAR4->VAR32);
        }
        FUN2(VAR2, VAR16, "");
        return 1;
        break;
    default:
        FUN2(VAR2, VAR16, "");
        return 1;
    }
    if (VAR4->VAR25)
    {
        if ((VAR4->VAR40 = FUN3(VAR4->VAR25 + 4 * 8)) == NULL)
        {
            FUN2(VAR2, VAR16, "");
            return 1;
        }
    }
    VAR4->VAR41 = *((char *)VAR2->VAR19 + 6);
    if (VAR4->VAR41 & VAR42)
        FUN2(VAR2, VAR26, "");
    if (VAR4->VAR41 & VAR43)
        FUN2(VAR2, VAR26, "");
    if ((VAR2->VAR17 == VAR21) && (VAR4->VAR41 & VAR44))
        FUN2(VAR2, VAR26, "");
    if (VAR4->VAR41 & VAR45)
        FUN2(VAR2, VAR16, "", VAR4->VAR41);
    if (VAR2->VAR17 == VAR21)
    {
        VAR4->VAR13.VAR46 = VAR47;
        VAR4->VAR13.VAR48 = VAR47;
        VAR4->VAR13.VAR49 = VAR47;
        VAR9 = FUN4(&(VAR4->VAR13));
        if (VAR9 != VAR50)
        {
            FUN2(VAR2, VAR16, "", VAR9);
            return 1;
        }
        FUN2(VAR2, VAR16, "");
        return 1;
    }
    VAR2->VAR51 = VAR52;
    return 0;
}