static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    struct VAR5 *VAR6 = FUN2(VAR2->VAR7.VAR8);
    if (VAR9)
    {
        VAR3 = (FUN3() & (VAR10 | VAR11)) == (VAR10 | VAR11);
    }
    else if (VAR12)
    {
        VAR3 = (FUN3() & VAR13) == VAR13;
    }
    else
    {
        VAR3 = (FUN3() & VAR10) == VAR10;
        VAR14 = VAR3;
        if (VAR14)
        {
            switch (VAR2->VAR7.VAR15.VAR16)
            {
            case VAR17:
            case VAR18:
            case VAR19:
            case VAR20:
            case VAR21:
            case VAR22:
            case VAR23:
            case VAR24:
                VAR4 = VAR2->VAR7.VAR15.VAR16 - VAR25;
                if (VAR4 < VAR26)
                {
                    VAR5[VAR4].VAR27 = !VAR5[VAR4].VAR27;
                    if (VAR5[VAR4].VAR28)
                    {
                        if (VAR5[VAR4].VAR27)
                        {
                            FUN4(VAR5[VAR4].VAR28);
                        }
                        else
                        {
                            FUN5(VAR5[VAR4].VAR28);
                            VAR29 = 1;
                            break;
                        case VAR30:
                            FUN6(VAR6);
                            VAR29 = 1;
                            break;
                        case VAR31:
                            FUN7(VAR6);
                            FUN8(VAR6);
                            if (!VAR6->VAR32)
                            {
                                FUN9(&VAR6->VAR33, VAR6->VAR34);
                                VAR29 = 1;
                                break;
                            case VAR35:
                            case VAR36:
                                if (!VAR37)
                                {
                                    int VAR38, VAR39;
                                    int VAR40, VAR41;
                                    FUN10(VAR6->VAR28, &VAR38, &VAR39);
                                    VAR40 = FUN11(VAR38 + (VAR2->VAR7.VAR15.VAR16 == VAR35 ? 50 : -50), 160);
                                    VAR41 = (FUN12(VAR6->VAR34) * VAR40) / FUN13(VAR6->VAR34);
                                    fprintf(VAR42, "", VAR43, VAR40, VAR41);
                                    FUN14(VAR6, VAR40, VAR41);
                                    FUN15(VAR6);
                                    VAR29 = 1;
                                default:
                                    break;
                                    if (!VAR29)
                                    {
                                        FUN16(VAR6, &VAR2->VAR7)