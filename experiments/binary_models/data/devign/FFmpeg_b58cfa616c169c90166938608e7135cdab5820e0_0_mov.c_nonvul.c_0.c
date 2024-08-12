static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10;
    uint16_t VAR11 = FUN2(VAR4);
    VAR12 *VAR13 = FUN3(VAR2->VAR14->VAR15, "", NULL, VAR16);
    FUN2(VAR4);
    FUN4(VAR4);
    VAR6->VAR17->VAR18 = FUN2(VAR4);
    VAR6->VAR17->VAR19 = FUN2(VAR4);
    FUN5(VAR2->VAR14, VAR20, "", VAR6->VAR17->VAR18);
    VAR8->VAR21 = FUN2(VAR4);
    FUN2(VAR4);
    VAR6->VAR17->VAR22 = ((FUN4(VAR4) >> 16));
    FUN5(VAR2->VAR14, VAR20, "", VAR11, VAR2->VAR23);
    if (!VAR2->VAR23 || (VAR13 && strstr(VAR13->VAR24, "")))
    {
        if (VAR11 == 1)
        {
            VAR8->VAR25 = FUN4(VAR4);
            FUN4(VAR4);
            VAR8->VAR26 = FUN4(VAR4);
            FUN4(VAR4);
        }
        else if (VAR11 == 2)
        {
            FUN4(VAR4);
            VAR6->VAR17->VAR22 = FUN6(FUN7(VAR4));
            VAR6->VAR17->VAR18 = FUN4(VAR4);
            FUN4(VAR4);
            VAR6->VAR17->VAR19 = FUN4(VAR4);
            VAR10 = FUN4(VAR4);
            VAR8->VAR26 = FUN4(VAR4);
            VAR8->VAR25 = FUN4(VAR4);
            if (VAR6->VAR17->VAR27 == FUN8('', '', '', ''))
                VAR6->VAR17->VAR28 = FUN9(VAR6->VAR17->VAR19, VAR10);
        }
        if (VAR11 == 0 || (VAR11 == 1 && VAR8->VAR21 != -2))
        {
            switch (VAR6->VAR17->VAR28)
            {
            case VAR29:
            case VAR30:
                VAR6->VAR31 = VAR32;
                break;
            }
        }
    }
    if (VAR11 == 0 && VAR8->VAR33 == 0)
    {
        if (VAR6->VAR17->VAR19 == 8)
            VAR6->VAR17->VAR28 = FUN10(VAR6, FUN8('', '', '', ''));
        else if (VAR6->VAR17->VAR19 == 16)
            VAR6->VAR17->VAR28 = FUN10(VAR6, FUN8('', '', '', ''));
    }
    switch (VAR6->VAR17->VAR28)
    {
    case VAR34:
    case VAR35:
        if (VAR6->VAR17->VAR19 == 16)
            VAR6->VAR17->VAR28 = VAR36;
        break;
    case VAR37:
    case VAR36:
        if (VAR6->VAR17->VAR19 == 8)
            VAR6->VAR17->VAR28 = VAR34;
        else if (VAR6->VAR17->VAR19 == 24)
            VAR6->VAR17->VAR28 = VAR6->VAR17->VAR28 == VAR36 ? VAR38 : VAR39;
        else if (VAR6->VAR17->VAR19 == 32)
            VAR6->VAR17->VAR28 = VAR6->VAR17->VAR28 == VAR36 ? VAR40 : VAR41;
        break;
    case VAR42:
        VAR8->VAR25 = 6;
        VAR8->VAR26 = 2 * VAR6->VAR17->VAR18;
        break;
    case VAR43:
        VAR8->VAR25 = 6;
        VAR8->VAR26 = 1 * VAR6->VAR17->VAR18;
        break;
    case VAR44:
        VAR8->VAR25 = 64;
        VAR8->VAR26 = 34 * VAR6->VAR17->VAR18;
        break;
    case VAR45:
        VAR8->VAR25 = 160;
        VAR8->VAR26 = 33;
        break;
    default:
        break;
    }
    VAR9 = FUN11(VAR6->VAR17->VAR28);
    if (VAR9)
    {
        VAR6->VAR17->VAR19 = VAR9;
        VAR8->VAR46 = (VAR9 >> 3) * VAR6->VAR17->VAR18;
    }
}