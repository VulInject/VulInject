VAR1 *FUN1(void)
{
    size_t VAR2;
    int VAR3 = 0;
    const char *VAR4;
    VAR1 *VAR5 = &VAR6;
    FUN2(&VAR5->VAR7);
    FUN2(&VAR5->VAR8);
    FUN2(&VAR5->VAR9);
    FUN3(VAR10);
    VAR5->VAR11 = FUN4(VAR12, VAR13, VAR5);
    if (!VAR5->VAR11)
    {
        FUN5("");
        return NULL;
    }
    FUN6("", VAR14);
    VAR5->VAR15 = VAR16.VAR17.VAR18;
    VAR5->VAR19 = VAR16.VAR20.VAR18;
    if (VAR5->VAR15 <= 0)
    {
        FUN5("", VAR5->VAR15);
        VAR5->VAR15 = 1;
    }
    if (VAR5->VAR19 <= 0)
    {
        FUN5("", VAR5->VAR19);
        VAR5->VAR19 = 0;
    }
    {
        int VAR21;
        VAR4 = FUN7("", NULL, &VAR21);
    }
    if (VAR4)
    {
        int VAR22 = 0;
        for (VAR2 = 0; VAR2 < FUN8(VAR23); VAR2++)
        {
            if (!strcmp(VAR4, VAR23[VAR2]->VAR24))
            {
                VAR3 = !FUN9(VAR5, VAR23[VAR2]);
                VAR22 = 1;
                break;
            }
        }
        if (!VAR22)
        {
            FUN5("", VAR4);
            FUN5("");
        }
    }
    if (!VAR3)
    {
        for (VAR2 = 0; !VAR3 && VAR2 < FUN8(VAR23); VAR2++)
        {
            if (VAR23[VAR2]->VAR25)
            {
                VAR3 = !FUN9(VAR5, VAR23[VAR2]);
            }
        }
    }
    if (!VAR3)
    {
        VAR3 = !FUN9(VAR5, &VAR26);
        if (!VAR3)
        {
            FUN5("");
        }
        else
        {
            FUN5("");
        }
    }
    if (VAR3)
    {
        VAR27 *VAR28;
        if (VAR16.VAR29.VAR30 <= 0)
        {
            if (VAR16.VAR29.VAR30 < 0)
            {
                FUN5(""
                      "",
                      VAR16.VAR29.VAR30);
            }
            VAR16.VAR29.VAR31 = 1;
        }
        else
        {
            VAR16.VAR29.VAR31 = VAR32 / VAR16.VAR29.VAR30;
        }
        VAR28 = FUN10(VAR33, VAR5);
        if (!VAR28)
        {
            FUN5(""
                  "");
        }
    }
    else
    {
        FUN11(VAR5->VAR11);
        return NULL;
    }
    FUN2(&VAR5->VAR34);
    FUN12("", 0, 1, VAR35, VAR36, VAR5);
    FUN13(VAR5->VAR11, FUN14(VAR12) + VAR16.VAR29.VAR31);
    return VAR5;
}