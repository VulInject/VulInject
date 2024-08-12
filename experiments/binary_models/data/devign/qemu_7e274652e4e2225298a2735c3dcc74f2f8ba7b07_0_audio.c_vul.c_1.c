static void FUN1(void)
{
    size_t VAR1;
    int VAR2 = 0;
    const char *VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7 = &VAR8;
    if (VAR7->VAR9)
    {
        return;
    }
    FUN2(&VAR7->VAR10);
    FUN2(&VAR7->VAR11);
    FUN2(&VAR7->VAR12);
    FUN3(VAR13);
    VAR7->VAR14 = FUN4(VAR15, VAR16, VAR7);
    if (!VAR7->VAR14)
    {
        FUN5("");
    }
    FUN6("", VAR17);
    VAR7->VAR18 = VAR19.VAR20.VAR21;
    VAR7->VAR22 = VAR19.VAR23.VAR21;
    if (VAR7->VAR18 <= 0)
    {
        FUN7("", VAR7->VAR18);
        VAR7->VAR18 = 1;
    }
    if (VAR7->VAR22 <= 0)
    {
        FUN7("", VAR7->VAR22);
        VAR7->VAR22 = 0;
    }
    {
        int VAR24;
        VAR3 = FUN8("", NULL, &VAR24);
    }
    if (VAR3)
    {
        int VAR25 = 0;
        for (VAR1 = 0; VAR1 < FUN9(VAR26); VAR1++)
        {
            if (!strcmp(VAR3, VAR26[VAR1]->VAR27))
            {
                VAR2 = !FUN10(VAR7, VAR26[VAR1]);
                VAR25 = 1;
                break;
            }
        }
        if (!VAR25)
        {
            FUN7("", VAR3);
            FUN7("");
        }
    }
    if (!VAR2)
    {
        for (VAR1 = 0; !VAR2 && VAR1 < FUN9(VAR26); VAR1++)
        {
            if (VAR26[VAR1]->VAR28)
            {
                VAR2 = !FUN10(VAR7, VAR26[VAR1]);
            }
        }
    }
    if (!VAR2)
    {
        VAR2 = !FUN10(VAR7, &VAR29);
        if (!VAR2)
        {
            FUN5("");
        }
        else
        {
            FUN7("");
        }
    }
    if (VAR19.VAR30.VAR31 <= 0)
    {
        if (VAR19.VAR30.VAR31 < 0)
        {
            FUN7(""
                  "",
                  VAR19.VAR30.VAR31);
        }
        VAR19.VAR30.VAR32 = 1;
    }
    else
    {
        VAR19.VAR30.VAR32 = FUN11(1, FUN12(), VAR19.VAR30.VAR31);
    }
    VAR5 = FUN13(VAR33, VAR7);
    if (!VAR5)
    {
        FUN7(""
              "");
    }
    FUN2(&VAR7->VAR34);
    FUN14(NULL, 0, &VAR35, VAR7);
}