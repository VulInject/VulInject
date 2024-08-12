void FUN1(const VAR1 *VAR2)
{
    TCGOpcode VAR3;
    VAR4 *VAR5;
    const char *VAR6;
    int VAR7, VAR8;
    for (;;)
    {
        if (VAR2->VAR3 == (VAR9)-1)
            break;
        VAR3 = VAR2->VAR3;
        FUN2((unsigned)VAR3 < VAR10);
        VAR5 = &VAR11[VAR3];
        FUN2(!VAR5->VAR12);
        VAR5->VAR12 = 1;
        VAR8 = VAR5->VAR13 + VAR5->VAR14;
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            VAR6 = VAR2->VAR15[VAR7];
            FUN2(VAR6 != NULL);
            FUN3(VAR5->VAR16[VAR7].VAR17.VAR18);
            VAR5->VAR16[VAR7].VAR19 = 0;
            if (VAR6[0] >= '' && VAR6[0] <= '')
            {
                int VAR20;
                VAR20 = VAR6[0] - '';
                FUN2(VAR20 < VAR5->VAR14);
                FUN2(VAR5->VAR16[VAR20].VAR19 & VAR21);
                VAR5->VAR16[VAR7] = VAR5->VAR16[VAR20];
                VAR5->VAR16[VAR20].VAR19 = VAR22;
                VAR5->VAR16[VAR20].VAR23 = VAR7;
                VAR5->VAR16[VAR7].VAR19 |= VAR24;
                VAR5->VAR16[VAR7].VAR23 = VAR20;
            }
            else
            {
                for (;;)
                {
                    if (*VAR6 == '')
                        break;
                    switch (*VAR6)
                    {
                    case '':
                        VAR5->VAR16[VAR7].VAR19 |= VAR25;
                        VAR6++;
                        break;
                    default:
                        if (FUN4(&VAR5->VAR16[VAR7], &VAR6) < 0)
                        {
                            fprintf(VAR26, "", VAR6, VAR7, VAR5->VAR27);
                            FUN5(1);
                        }
                    }
                }
            }
        }
        FUN2(VAR7 == VAR28 || VAR2->VAR15[VAR7] == NULL);
        FUN6(VAR5, 0, VAR5->VAR14);
        FUN6(VAR5, VAR5->VAR14, VAR5->VAR13);
        {
            int VAR7;
            FUN7("", VAR5->VAR27);
            for (VAR7 = 0; VAR7 < VAR5->VAR14 + VAR5->VAR13; VAR7++)
                FUN7("", VAR5->VAR29[VAR7]);
            FUN7("");
        }
        VAR2++;
    }
    VAR7 = 0;
    for (VAR3 = 0; VAR3 < VAR30; VAR3++)
    {
        const VAR4 *VAR5 = &VAR11[VAR3];
        if (VAR5->VAR31 & VAR32)
        {
            if (VAR5->VAR12)
            {
                fprintf(VAR26, "", VAR5->VAR27);
                VAR7 = 1;
            }
        }
        else
        {
            if (!VAR5->VAR12)
            {
                fprintf(VAR26, "", VAR5->VAR27);
                VAR7 = 1;
            }
        }
    }
    if (VAR7 == 1)
    {
        FUN8();
    }
}