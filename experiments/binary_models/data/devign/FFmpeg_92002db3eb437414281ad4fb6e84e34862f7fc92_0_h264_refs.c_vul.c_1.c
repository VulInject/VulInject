int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, FUN2(VAR7);
    int VAR8 = 0, VAR9 = 0;
    VAR10 *FUN2(VAR11);
    if ((VAR2->VAR12->VAR13 & VAR14) && VAR5 == 0)
        FUN3(VAR2->VAR12, VAR15, "");
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        int FUN2(VAR16), FUN2(VAR17);
        if (VAR2->VAR12->VAR13 & VAR14)
            FUN3(VAR2->VAR12, VAR15, "", VAR2->VAR4[VAR6].VAR18, VAR2->VAR4[VAR6].VAR19, VAR2->VAR4[VAR6].VAR20);
        if (VAR4[VAR6].VAR18 == VAR21 || VAR4[VAR6].VAR18 == VAR22)
        {
            VAR17 = FUN4(VAR2, VAR4[VAR6].VAR19, &VAR16);
            VAR11 = FUN5(VAR2, VAR17, &VAR7);
            if (!VAR11)
            {
                if (VAR4[VAR6].VAR18 != VAR22 || !VAR2->VAR23[VAR4[VAR6].VAR20] || VAR2->VAR23[VAR4[VAR6].VAR20]->VAR17 != VAR17)
                {
                    FUN3(VAR2->VAR12, VAR24, "");
                    VAR9 = VAR25;
                    continue;
                    switch (VAR4[VAR6].VAR18)
                    {
                    case VAR21:
                        if (VAR2->VAR12->VAR13 & VAR14)
                            FUN3(VAR2->VAR12, VAR15, "", VAR2->VAR4[VAR6].VAR19, VAR2->VAR26);
                        FUN6(VAR2, VAR17, VAR16 ^ VAR27);
                        break;
                    case VAR22:
                        if (VAR2->VAR23[VAR4[VAR6].VAR20] != VAR11)
                            FUN7(VAR2, VAR4[VAR6].VAR20, 0);
                        FUN8(VAR2, VAR7);
                        VAR2->VAR23[VAR4[VAR6].VAR20] = VAR11;
                        if (VAR2->VAR23[VAR4[VAR6].VAR20])
                        {
                            VAR2->VAR23[VAR4[VAR6].VAR20]->VAR23 = 1;
                            VAR2->VAR28++;
                            break;
                        case VAR29:
                            VAR7 = FUN4(VAR2, VAR4[VAR6].VAR20, &VAR16);
                            VAR11 = VAR2->VAR23[VAR7];
                            if (VAR11)
                            {
                                FUN7(VAR2, VAR7, VAR16 ^ VAR27);
                            }
                            else if (VAR2->VAR12->VAR13 & VAR14)
                                FUN3(VAR2->VAR12, VAR15, "");
                            break;
                        case VAR30:
                            if (VAR2->VAR23[VAR4[VAR6].VAR20] != VAR2->VAR31)
                            {
                                FUN7(VAR2, VAR4[VAR6].VAR20, 0);
                                VAR2->VAR23[VAR4[VAR6].VAR20] = VAR2->VAR31;
                                VAR2->VAR23[VAR4[VAR6].VAR20]->VAR23 = 1;
                                VAR2->VAR28++;
                                VAR2->VAR31->VAR32 |= VAR2->VAR33;
                                VAR8 = 1;
                                break;
                            case VAR34:
                                assert(VAR4[VAR6].VAR20 <= 16);
                                for (VAR7 = VAR4[VAR6].VAR20; VAR7 < 16; VAR7++)
                                {
                                    FUN7(VAR2, VAR7, 0);
                                    break;
                                case VAR35:
                                    while (VAR2->VAR26)
                                    {
                                        FUN6(VAR2, VAR2->VAR36[0]->VAR17, 0);
                                        for (VAR7 = 0; VAR7 < 16; VAR7++)
                                        {
                                            FUN7(VAR2, VAR7, 0);
                                            VAR2->VAR17 = VAR2->VAR31->VAR17 = 0;
                                            VAR2->VAR37 = 1;
                                            VAR2->VAR31->VAR37 = 1;
                                            for (VAR7 = 0; VAR7 < VAR38; VAR7++)
                                                VAR2->VAR39[VAR7] = VAR40;
                                            break;
                                        default:
                                            assert(0);
                                            if (!VAR8)
                                            {
                                                if (VAR2->VAR26 && VAR2->VAR36[0] == VAR2->VAR31)
                                                {
                                                    VAR2->VAR31->VAR32 = VAR27;
                                                }
                                                else if (VAR2->VAR31->VAR23)
                                                {
                                                    FUN3(VAR2->VAR12, VAR24, ""
                                                                                   ""
                                                                                   ""
                                                                                   "");
                                                    VAR9 = VAR25;
                                                }
                                                else
                                                {
                                                    VAR11 = FUN6(VAR2, VAR2->VAR31->VAR17, 0);
                                                    if (VAR11)
                                                    {
                                                        FUN3(VAR2->VAR12, VAR24, "");
                                                        VAR9 = VAR25;
                                                        if (VAR2->VAR26)
                                                            memmove(&VAR2->VAR36[1], &VAR2->VAR36[0], VAR2->VAR26 * sizeof(VAR10 *));
                                                        VAR2->VAR36[0] = VAR2->VAR31;
                                                        VAR2->VAR26++;
                                                        VAR2->VAR31->VAR32 |= VAR2->VAR33;
                                                        if (VAR2->VAR28 + VAR2->VAR26 > FUN9(VAR2->VAR41.VAR42, 1))
                                                        {
                                                            FUN3(VAR2->VAR12, VAR24, ""
                                                                                           "",
                                                                   VAR2->VAR28, VAR2->VAR26, VAR2->VAR41.VAR42);
                                                            VAR9 = VAR25;
                                                            if (VAR2->VAR28 && !VAR2->VAR26)
                                                            {
                                                                for (VAR6 = 0; VAR6 < 16; ++VAR6)
                                                                    if (VAR2->VAR23[VAR6])
                                                                        break;
                                                                assert(VAR6 < 16);
                                                                FUN7(VAR2, VAR6, 0);
                                                            }
                                                            else
                                                            {
                                                                VAR11 = VAR2->VAR36[VAR2->VAR26 - 1];
                                                                FUN6(VAR2, VAR11->VAR17, 0);
                                                                FUN10(VAR2);
                                                                FUN11(VAR2);
                                                                if (VAR9 >= 0 && VAR2->VAR28 == 0 && VAR2->VAR26 <= 2 && VAR2->VAR43.VAR44[0] <= 1 + (VAR2->VAR33 != VAR27) && VAR2->VAR31->VAR45.VAR46 == VAR47)
                                                                {
                                                                    VAR2->VAR31->VAR48 |= 1;
                                                                    if (!VAR2->VAR12->VAR49)
                                                                        VAR2->VAR48 = 2;
                                                                    return (VAR2->VAR12->VAR50 & VAR51) ? VAR9 : 0;