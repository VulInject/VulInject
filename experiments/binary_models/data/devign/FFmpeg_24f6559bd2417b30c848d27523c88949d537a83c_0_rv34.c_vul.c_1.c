static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    VAR6 *VAR7 = &VAR5->VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12 = VAR5->VAR13 * 2 + VAR5->VAR14 * 2 * VAR5->VAR15;
    int VAR16;
    memset(VAR2->VAR17, 0, sizeof(VAR2->VAR17));
    for (VAR8 = 0; VAR8 < VAR18[VAR3]; VAR8++)
    {
        VAR2->VAR17[VAR8][0] = FUN2(VAR7);
        VAR2->VAR17[VAR8][1] = FUN2(VAR7);
        switch (VAR3)
        {
        case VAR19:
        case VAR20:
            FUN3(VAR5->VAR21->VAR22[0][VAR5->VAR13 * 2 + VAR5->VAR14 * 2 * VAR5->VAR15], VAR5->VAR15);
            return 0;
        case VAR23:
            if (VAR5->VAR24 == VAR25)
            {
                FUN3(VAR5->VAR21->VAR22[0][VAR5->VAR13 * 2 + VAR5->VAR14 * 2 * VAR5->VAR15], VAR5->VAR15);
                FUN4(VAR2, VAR3, 0, 0, 0, 2, 2, 0);
                break;
            case VAR26:
                if (VAR27 && (VAR5->VAR28->VAR29 & VAR30))
                    FUN5(&VAR5->VAR31->VAR32, FUN6(0, VAR5->VAR14 - 1), 0);
                VAR16 = VAR5->VAR31->VAR33[VAR5->VAR13 + VAR5->VAR14 * VAR5->VAR34];
                if (FUN7(VAR16) || FUN8(VAR16))
                {
                    FUN3(VAR5->VAR21->VAR22[0][VAR5->VAR13 * 2 + VAR5->VAR14 * 2 * VAR5->VAR15], VAR5->VAR15);
                    FUN3(VAR5->VAR21->VAR22[1][VAR5->VAR13 * 2 + VAR5->VAR14 * 2 * VAR5->VAR15], VAR5->VAR15);
                }
                else
                    for (VAR9 = 0; VAR9 < 2; VAR9++)
                        for (VAR8 = 0; VAR8 < 2; VAR8++)
                            for (VAR10 = 0; VAR10 < 2; VAR10++)
                                for (VAR11 = 0; VAR11 < 2; VAR11++)
                                    VAR5->VAR21->VAR22[VAR11][VAR12 + VAR8 + VAR9 * VAR5->VAR15][VAR10] = FUN9(VAR2, VAR11, VAR5->VAR31->VAR22[0][VAR12 + VAR8 + VAR9 * VAR5->VAR15][VAR10]);
                if (!(FUN10(VAR16) || FUN11(VAR16) || FUN12(VAR16)))
                    FUN13(VAR2, VAR3);
                else
                    FUN14(VAR2);
                FUN3(VAR5->VAR21->VAR22[0][VAR5->VAR13 * 2 + VAR5->VAR14 * 2 * VAR5->VAR15], VAR5->VAR15);
                break;
            case VAR35:
            case VAR36:
                FUN15(VAR2, VAR3, 0, 0);
                FUN4(VAR2, VAR3, 0, 0, 0, 2, 2, 0);
                break;
            case VAR37:
            case VAR38:
                VAR2->VAR17[1][0] = VAR2->VAR17[0][0];
                VAR2->VAR17[1][1] = VAR2->VAR17[0][1];
                if (VAR2->VAR39)
                    FUN16(VAR2, VAR3, VAR3 == VAR38);
                else
                    FUN17(VAR2, VAR3, VAR3 == VAR38);
                FUN4(VAR2, VAR3, 0, 0, 0, 2, 2, VAR3 == VAR38);
                break;
            case VAR40:
            case VAR41:
                FUN15(VAR2, VAR3, 0, 0);
                FUN15(VAR2, VAR3, 1 + (VAR3 == VAR40), 1);
                if (VAR3 == VAR40)
                {
                    FUN4(VAR2, VAR3, 0, 0, 0, 2, 1, 0);
                    FUN4(VAR2, VAR3, 0, 8, VAR5->VAR15, 2, 1, 0);
                    if (VAR3 == VAR41)
                    {
                        FUN4(VAR2, VAR3, 0, 0, 0, 1, 2, 0);
                        FUN4(VAR2, VAR3, 8, 0, 1, 1, 2, 0);
                        break;
                    case VAR42:
                        FUN17(VAR2, VAR3, 0);
                        FUN17(VAR2, VAR3, 1);
                        FUN13(VAR2, VAR3);
                        break;
                    case VAR43:
                        for (VAR8 = 0; VAR8 < 4; VAR8++)
                        {
                            FUN15(VAR2, VAR3, VAR8, VAR8);
                            FUN4(VAR2, VAR3, (VAR8 & 1) << 3, (VAR8 & 2) << 2, (VAR8 & 1) + (VAR8 >> 1) * VAR5->VAR15, 1, 1, 0);
                            break;
                            return 0;