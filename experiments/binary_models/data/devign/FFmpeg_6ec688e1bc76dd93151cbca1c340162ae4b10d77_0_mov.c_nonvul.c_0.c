static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    if (VAR6->VAR9->VAR10 == VAR11 && !VAR6->VAR9->VAR12 && VAR8->VAR13 > 1)
        VAR6->VAR9->VAR12 = VAR8->VAR13;
    switch (VAR6->VAR9->VAR14)
    {
    case VAR15:
        VAR2->VAR16 = FUN2();
        if (!VAR2->VAR16)
        {
            FUN3(VAR2->VAR17, VAR18, "");
            return FUN4(VAR19);
        }
        VAR2->VAR20 = FUN5(VAR2->VAR16);
        if (!VAR2->VAR20)
        {
            FUN3(VAR2->VAR17, VAR18, "");
            return FUN4(VAR19);
        }
        VAR8->VAR21 = 1;
        VAR6->VAR9->VAR14 = VAR22;
        break;
    case VAR23:
        VAR6->VAR9->VAR24 = 1;
        if (VAR6->VAR9->VAR25 != FUN6('', '', '', ''))
            VAR6->VAR9->VAR12 = 8000;
        break;
    case VAR26:
        VAR6->VAR9->VAR24 = 1;
        VAR6->VAR9->VAR12 = 8000;
        break;
    case VAR27:
        VAR6->VAR9->VAR24 = 1;
        VAR6->VAR9->VAR12 = 16000;
        break;
    case VAR28:
    case VAR29:
        VAR6->VAR9->VAR10 = VAR11;
        break;
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
        VAR6->VAR9->VAR34 = VAR8->VAR35;
        break;
    case VAR36:
        if (VAR6->VAR9->VAR37 == 36)
        {
            VAR6->VAR9->VAR24 = FUN7(VAR6->VAR9->VAR38 + 21);
            VAR6->VAR9->VAR12 = FUN8(VAR6->VAR9->VAR38 + 32);
        }
        break;
    case VAR39:
        VAR6->VAR40 = VAR41;
        break;
    default:
        break;
    }
    return 0;
}