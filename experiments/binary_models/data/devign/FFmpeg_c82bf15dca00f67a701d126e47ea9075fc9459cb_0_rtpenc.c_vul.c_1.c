static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0];
    int VAR11;
    int VAR12 = VAR4->VAR12;
    FUN2(VAR2, "", VAR4->VAR13, VAR12);
    VAR11 = ((VAR6->VAR14 - VAR6->VAR15) * VAR16) / VAR17;
    if ((VAR6->VAR18 || ((VAR11 >= VAR19) && (FUN3() - VAR6->VAR20 > 5000000))) && !(VAR6->VAR21 & VAR22))
    {
        FUN4(VAR2, FUN3(), 0);
        VAR6->VAR15 = VAR6->VAR14;
        VAR6->VAR18 = 0;
    }
    VAR6->VAR23 = VAR6->VAR24 + VAR4->VAR25;
    switch (VAR9->VAR26->VAR27)
    {
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
        return FUN5(VAR2, VAR4->VAR32, VAR12, 8 * VAR9->VAR26->VAR33);
    case VAR34:
    case VAR35:
    case VAR36:
    case VAR37:
        return FUN5(VAR2, VAR4->VAR32, VAR12, 16 * VAR9->VAR26->VAR33);
    case VAR38:
        return FUN5(VAR2, VAR4->VAR32, VAR12, 8 * VAR9->VAR26->VAR33);
    case VAR39:
        return FUN5(VAR2, VAR4->VAR32, VAR12, VAR9->VAR26->VAR40 * VAR9->VAR26->VAR33);
    case VAR41:
    case VAR42:
        FUN6(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR43:
    case VAR44:
        FUN7(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR45:
        if (VAR6->VAR21 & VAR46)
            FUN8(VAR2, VAR4->VAR32, VAR12);
        else
            FUN9(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR47:
    case VAR48:
        FUN10(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR49:
        FUN11(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR50:
        FUN12(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR51:
        FUN13(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR52:
        if (VAR6->VAR21 & VAR53)
        {
            int VAR54 = 0;
            const VAR55 *VAR56 = FUN14(VAR4, VAR57, &VAR54);
            FUN15(VAR2, VAR4->VAR32, VAR12, VAR56, VAR54);
            break;
        }
    case VAR58:
        FUN16(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR59:
        FUN17(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR60:
    case VAR61:
        FUN18(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR62:
        FUN19(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR63:
        FUN20(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR64:
        FUN21(VAR2, VAR4->VAR32, VAR12);
        break;
    case VAR65:
        if (VAR12 > VAR6->VAR66)
        {
            FUN22(VAR2, VAR67, "", VAR12, VAR6->VAR66);
            return FUN23(VAR68);
        }
    default:
        FUN24(VAR2, VAR4->VAR32, VAR12);
        break;
    }
    return 0;
}