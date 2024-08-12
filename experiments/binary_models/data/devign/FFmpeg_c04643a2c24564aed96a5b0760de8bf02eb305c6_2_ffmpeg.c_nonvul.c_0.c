void FUN1(void)
{
    int VAR1, VAR2, VAR3, VAR4;
    VAR5 *VAR6;
    VAR5 *VAR7;
    AVFormatParameters VAR8, *VAR9 = &VAR8;
    VAR1 = 0;
    VAR2 = 0;
    memset(VAR9, 0, sizeof(*VAR9));
    for (VAR4 = 0; VAR4 < VAR10; VAR4++)
    {
        VAR6 = VAR11[VAR4];
        for (VAR3 = 0; VAR3 < VAR6->VAR12; VAR3++)
        {
            VAR13 *VAR14 = &VAR6->VAR15[VAR3]->VAR16;
            switch (VAR14->VAR17)
            {
            case VAR18:
                if (VAR14->VAR19 > VAR9->VAR19)
                    VAR9->VAR19 = VAR14->VAR19;
                if (VAR14->VAR20 > VAR9->VAR20)
                    VAR9->VAR20 = VAR14->VAR20;
                VAR2 = 1;
                break;
            case VAR21:
                if (VAR14->VAR22 > VAR9->VAR22)
                    VAR9->VAR22 = VAR14->VAR22;
                if (VAR14->VAR23 > VAR9->VAR23)
                    VAR9->VAR23 = VAR14->VAR23;
                if (VAR14->VAR24 > VAR9->VAR24)
                    VAR9->VAR24 = VAR14->VAR24;
                VAR1 = 1;
                break;
            default:
                FUN2();
            }
        }
    }
    if (VAR1 == 0 && VAR2 == 0)
    {
        fprintf(VAR25, "");
        FUN3(1);
    }
    if (VAR1)
    {
        VAR26 *VAR27;
        VAR27 = FUN4("");
        if (FUN5(&VAR7, "", VAR27, 0, VAR9) < 0)
        {
            fprintf(VAR25, "");
            FUN3(1);
        }
        VAR7->VAR15[0]->VAR28 = VAR9->VAR24;
        VAR29[VAR30] = VAR7;
        FUN6(VAR7, VAR30, VAR31, 0);
        VAR30++;
    }
    if (VAR2)
    {
        VAR26 *VAR27;
        VAR27 = FUN4("");
        if (FUN5(&VAR7, "", VAR27, 0, VAR9) < 0)
        {
            fprintf(VAR25, "");
            FUN3(1);
        }
        VAR29[VAR30] = VAR7;
        FUN6(VAR7, VAR30, VAR32, 0);
        VAR30++;
    }
}