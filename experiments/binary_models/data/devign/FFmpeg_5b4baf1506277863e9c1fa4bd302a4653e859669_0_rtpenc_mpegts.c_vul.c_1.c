static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = NULL, *VAR7 = NULL;
    VAR8 *VAR9 = FUN2("", NULL, NULL);
    VAR8 *VAR10 = FUN2("", NULL, NULL);
    int VAR11, VAR12 = FUN3(VAR13);
    VAR14 *VAR15;
    if (!VAR9 || !VAR10)
        return FUN3(VAR16);
    VAR6 = FUN4();
    if (!VAR6)
        return FUN3(VAR13);
    VAR6->VAR17 = VAR9;
    VAR6->VAR18 = VAR2->VAR18;
    for (VAR11 = 0; VAR11 < VAR2->VAR19; VAR11++)
    {
        VAR14 *VAR15 = FUN5(VAR6, NULL);
        if (!VAR15)
            VAR15->VAR20 = VAR2->VAR21[VAR11]->VAR20;
        VAR15->VAR22 = VAR2->VAR21[VAR11]->VAR22;
        FUN6(VAR15->VAR23, VAR2->VAR21[VAR11]->VAR23);
        if ((VAR12 = FUN7(&VAR6->VAR24)) < 0)
            if ((VAR12 = FUN8(VAR6, NULL)) < 0)
                for (VAR11 = 0; VAR11 < VAR2->VAR19; VAR11++)
                    VAR2->VAR21[VAR11]->VAR20 = VAR6->VAR21[VAR11]->VAR20;
        VAR4->VAR6 = VAR6;
        VAR6 = NULL;
        VAR7 = FUN4();
        if (!VAR7)
        {
            VAR7->VAR17 = VAR10;
            VAR15 = FUN5(VAR7, NULL);
            VAR15->VAR20.VAR25 = 1;
            VAR15->VAR20.VAR26 = 90000;
            VAR15->VAR23->VAR27 = VAR28;
            VAR7->VAR24 = VAR2->VAR24;
            if ((VAR12 = FUN8(VAR7, NULL)) < 0)
                VAR4->VAR7 = VAR7;
            return 0;
        VAR29:
            if (VAR6)
            {
                FUN9(&VAR6->VAR24);
                FUN10(VAR6);
                if (VAR7)
                    FUN10(VAR7);
                FUN11(VAR2);
                return VAR12;