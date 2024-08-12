static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    enum AVMediaType VAR7 = FUN2(VAR4->VAR8->VAR9, VAR4->VAR10);
    int VAR11;
    if (VAR7 != VAR12 && VAR7 != VAR13)
    {
        FUN3(NULL, VAR14, ""
                                   "");
        FUN4(1);
    }
    if (VAR4->VAR15)
    {
        VAR16 *VAR17;
        VAR18 *VAR19 = NULL;
        char *VAR20;
        int VAR21 = FUN5(VAR4->VAR15, &VAR20, 0);
        if (VAR21 < 0 || VAR21 >= VAR22)
        {
            FUN3(NULL, VAR14, "", VAR21, VAR2->VAR23);
            FUN4(1);
        }
        VAR17 = VAR24[VAR21]->VAR25;
        for (VAR11 = 0; VAR11 < VAR17->VAR26; VAR11++)
        {
            if (VAR17->VAR27[VAR11]->VAR28->VAR29 != VAR7)
                continue;
            if (FUN6(VAR17, VAR17->VAR27[VAR11], *VAR20 == '' ? VAR20 + 1 : VAR20) == 1)
            {
                VAR19 = VAR17->VAR27[VAR11];
                break;
            }
        }
        if (!VAR19)
        {
            FUN3(NULL, VAR14, ""
                                       "",
                   VAR20, VAR2->VAR23);
            FUN4(1);
        }
        VAR6 = VAR30[VAR24[VAR21]->VAR31 + VAR19->VAR32];
    }
    else
    {
        for (VAR11 = 0; VAR11 < VAR33; VAR11++)
        {
            VAR6 = VAR30[VAR11];
            if (VAR6->VAR19->VAR28->VAR29 == VAR7 && VAR6->VAR34)
                break;
        }
        if (VAR11 == VAR33)
        {
            FUN3(NULL, VAR14, ""
                                       "",
                   VAR4->VAR10, VAR4->VAR8->VAR15);
            FUN4(1);
        }
    }
    VAR6->VAR34 = 0;
    VAR6->VAR35 = 1;
    VAR6->VAR19->VAR34 = VAR36;
    VAR2->VAR37 = FUN7(VAR2->VAR37, sizeof(*VAR2->VAR37), &VAR2->VAR38, VAR2->VAR38 + 1);
    if (!(VAR2->VAR37[VAR2->VAR38 - 1] = FUN8(sizeof(*VAR2->VAR37[0]))))
        FUN4(1);
    VAR2->VAR37[VAR2->VAR38 - 1]->VAR6 = VAR6;
    VAR2->VAR37[VAR2->VAR38 - 1]->VAR39 = VAR2;
    VAR6->VAR40 = FUN7(VAR6->VAR40, sizeof(*VAR6->VAR40), &VAR6->VAR41, VAR6->VAR41 + 1);
    VAR6->VAR40[VAR6->VAR41 - 1] = VAR2->VAR37[VAR2->VAR38 - 1];
}