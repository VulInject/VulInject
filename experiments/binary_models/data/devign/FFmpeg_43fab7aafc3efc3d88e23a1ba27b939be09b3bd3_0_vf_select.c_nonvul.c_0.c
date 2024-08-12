static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0];
    double VAR11;
    if (FUN2(VAR6->VAR12[VAR13]))
        VAR6->VAR12[VAR13] = FUN3(VAR4->VAR14);
    if (FUN2(VAR6->VAR12[VAR15]))
        VAR6->VAR12[VAR15] = FUN3(VAR4->VAR14) * FUN4(VAR9->VAR16);
    VAR6->VAR12[VAR17] = FUN3(VAR4->VAR14);
    VAR6->VAR12[VAR18] = FUN3(VAR4->VAR14) * FUN4(VAR9->VAR16);
    VAR6->VAR12[VAR19] = VAR4->VAR20 == -1 ? VAR21 : VAR4->VAR20;
    VAR6->VAR12[VAR22] = FUN3(VAR4->VAR14);
    VAR6->VAR12[VAR23] = !VAR4->VAR24->VAR25 ? VAR26 : VAR4->VAR24->VAR27 ? VAR28
                                                                                                                            : VAR29;
    VAR6->VAR12[VAR30] = VAR4->VAR24->VAR31;
    VAR11 = FUN5(VAR6->VAR32, VAR6->VAR12, NULL);
    FUN6(VAR9->VAR33, VAR34, ""
                                      "",
           (int)VAR6->VAR12[VAR35], (int)VAR6->VAR12[VAR17], VAR6->VAR12[VAR18], (int)VAR6->VAR12[VAR19], VAR6->VAR12[VAR23] == VAR26 ? '' : VAR6->VAR12[VAR23] == VAR28 ? ''
                                                                                                                                                                                                         : VAR6->VAR12[VAR23] == VAR29   ? ''
                                                                                                                                                                                                                                                                        : '',
           (int)VAR6->VAR12[VAR36], FUN7(VAR6->VAR12[VAR30]), VAR11);
    VAR6->VAR12[VAR35] += 1.0;
    if (VAR11)
    {
        VAR6->VAR12[VAR37] = VAR6->VAR12[VAR35];
        VAR6->VAR12[VAR38] = VAR6->VAR12[VAR17];
        VAR6->VAR12[VAR39] = VAR6->VAR12[VAR18];
        VAR6->VAR12[VAR40] += 1.0;
    }
    return VAR11;
}