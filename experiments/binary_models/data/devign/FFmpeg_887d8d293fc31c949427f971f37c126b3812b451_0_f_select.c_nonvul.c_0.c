static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0];
    double VAR11;
    if (FUN2(VAR6->VAR12[VAR13]))
        VAR6->VAR12[VAR13] = FUN3(VAR4->VAR14);
    if (FUN2(VAR6->VAR12[VAR15]))
        VAR6->VAR12[VAR15] = FUN3(VAR4->VAR14) * FUN4(VAR9->VAR16);
    VAR6->VAR12[VAR17] = VAR9->VAR18;
    VAR6->VAR12[VAR19] = FUN3(VAR4->VAR14);
    VAR6->VAR12[VAR20] = FUN3(VAR4->VAR14) * FUN4(VAR9->VAR16);
    VAR6->VAR12[VAR21] = FUN5(VAR4) == -1 ? VAR22 : FUN5(VAR4);
    switch (VAR9->VAR23)
    {
    case VAR24:
        VAR6->VAR12[VAR25] = VAR4->VAR26;
        break;
    case VAR27:
        VAR6->VAR12[VAR28] = !VAR4->VAR29 ? VAR30 : VAR4->VAR31 ? VAR32
                                                                                                                      : VAR33;
        VAR6->VAR12[VAR34] = VAR4->VAR35;
        if (VAR6->VAR36)
        {
            char VAR37[32];
            VAR6->VAR12[VAR38] = FUN6(VAR2, VAR4);
            snprintf(VAR37, sizeof(VAR37), "", VAR6->VAR12[VAR38]);
            FUN7(FUN8(VAR4), "", VAR37, 0);
        }
        break;
    }
    VAR6->VAR6 = VAR11 = FUN9(VAR6->VAR39, VAR6->VAR12, NULL);
    FUN10(VAR9->VAR40, VAR41, "", VAR6->VAR12[VAR17], VAR6->VAR12[VAR19], VAR6->VAR12[VAR20], (int)VAR6->VAR12[VAR42]);
    switch (VAR9->VAR23)
    {
    case VAR27:
        FUN10(VAR9->VAR40, VAR41, "", (!VAR4->VAR29) ? '' : VAR4->VAR31 ? ''
                                                                                                                                                : '',
               FUN11(VAR4->VAR35), VAR6->VAR12[VAR38]);
        break;
    case VAR24:
        FUN10(VAR9->VAR40, VAR41, "", (int)VAR6->VAR12[VAR25], (int)VAR6->VAR12[VAR43]);
        break;
    }
    if (VAR11 == 0)
    {
        VAR6->VAR44 = -1;
    }
    else if (FUN2(VAR11) || VAR11 < 0)
    {
        VAR6->VAR44 = 0;
    }
    else
    {
        VAR6->VAR44 = FUN12(FUN13(VAR11) - 1, VAR6->VAR45 - 1);
    }
    FUN10(VAR9->VAR40, VAR41, "", VAR11, VAR6->VAR44);
    if (VAR11)
    {
        VAR6->VAR12[VAR46] = VAR6->VAR12[VAR17];
        VAR6->VAR12[VAR47] = VAR6->VAR12[VAR19];
        VAR6->VAR12[VAR48] = VAR6->VAR12[VAR20];
        VAR6->VAR12[VAR49] += 1.0;
        if (VAR9->VAR23 == VAR24)
            VAR6->VAR12[VAR43] += VAR4->VAR26;
    }
    VAR6->VAR12[VAR50] = VAR6->VAR12[VAR19];
    VAR6->VAR12[VAR51] = VAR6->VAR12[VAR20];
}