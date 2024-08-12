void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    uint32_t VAR7;
    FUN3(VAR2->VAR8);
    switch (VAR2->VAR8)
    {
    case VAR9:
        FUN4(VAR6->VAR10, VAR11);
        VAR6->VAR12.VAR13[VAR6->VAR12.VAR14] |= VAR15;
        break;
    case VAR16:
        FUN4(VAR6->VAR10, VAR11);
        VAR6->VAR12.VAR13[VAR6->VAR12.VAR14] |= VAR17;
        break;
    case VAR18:
        FUN4(VAR6->VAR10, VAR11);
        VAR6->VAR12.VAR13[VAR6->VAR12.VAR14] |= VAR19;
        break;
    case VAR20:
        FUN4(VAR6->VAR10, VAR21);
        break;
    case VAR22:
    case VAR23:
        switch (VAR6->VAR24.VAR25 & 0xf)
        {
        case 0x8:
            switch (VAR2->VAR8)
            {
            case VAR22:
                VAR6->VAR12.VAR13[VAR26] |= VAR27;
                FUN5(VAR28, "");
                break;
            case VAR23:
                VAR6->VAR12.VAR13[VAR26] |= (VAR29 | VAR30);
                VAR6->VAR12.VAR31 = VAR6->VAR24.VAR32;
                FUN5(VAR28, "", VAR6->VAR12.VAR31);
                break;
            }
            FUN4(VAR6->VAR10, VAR33);
            break;
        default:
            switch (VAR2->VAR8)
            {
            case VAR22:
                VAR6->VAR12.VAR13[VAR6->VAR12.VAR14] |= VAR34;
                FUN5(VAR28, "");
                break;
            case VAR23:
                VAR6->VAR12.VAR13[VAR6->VAR12.VAR14] |= (VAR35 | VAR36);
                VAR6->VAR12.VAR37[VAR6->VAR12.VAR14] = VAR6->VAR24.VAR32;
                FUN5(VAR28, "", VAR6->VAR12.VAR37[VAR6->VAR12.VAR14]);
                break;
            }
            FUN4(VAR6->VAR10, VAR38);
            break;
        }
        break;
    case VAR39:
        if (FUN6())
        {
            int VAR40;
            VAR40 = FUN7(VAR6, VAR6->VAR41[15], FUN8(VAR6)) & 0xff;
            if (VAR40 == 0xab)
            {
                VAR6->VAR41[15] += 2;
                FUN5(VAR28, "", VAR6->VAR41[0]);
                VAR6->VAR41[0] = FUN9(VAR6);
                return;
            }
        }
        FUN4(VAR6->VAR10, VAR42);
        break;
    case VAR43:
        break;
    case VAR44:
        FUN10(VAR4);
        return;
    default:
        FUN11(VAR2, "", VAR2->VAR8);
        return;
    }
    VAR7 = VAR45 | VAR46 | VAR47 | VAR48 | VAR49;
    if (VAR6->VAR12.VAR50[VAR6->VAR12.VAR14] & VAR51)
    {
        VAR7 |= VAR52;
    }
    if (!FUN12(VAR6))
    {
        VAR7 |= VAR53;
    }
    FUN13(VAR4);
    FUN14(VAR4, VAR7);
    FUN5(VAR28, "", VAR6->VAR12.VAR24);
}