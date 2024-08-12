static void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    int VAR5, VAR6;
    if (VAR2->VAR7 && VAR2->VAR8)
    {
        if (VAR2->VAR9)
        {
            RDMAControlHeader VAR10 = {
                .VAR11 = 0,
                .VAR12 = VAR13,
                .VAR14 = 1,
            };
            FUN2("");
            FUN3(VAR2, NULL, &VAR10);
        }
        VAR5 = FUN4(VAR2->VAR7);
        if (!VAR5)
        {
            FUN5();
            VAR5 = FUN6(VAR2->VAR15, &VAR4);
            if (!VAR5)
            {
                FUN7(VAR4);
            }
        }
        FUN8();
        VAR2->VAR8 = false;
    }
    FUN9(VAR2->VAR16);
    VAR2->VAR16 = NULL;
    for (VAR6 = 0; VAR6 < VAR17; VAR6++)
    {
        if (VAR2->VAR18[VAR6].VAR19)
        {
            VAR2->VAR20--;
            FUN10(VAR2->VAR18[VAR6].VAR19);
        }
        VAR2->VAR18[VAR6].VAR19 = NULL;
    }
    if (VAR2->VAR21.VAR16)
    {
        while (VAR2->VAR21.VAR22)
        {
            FUN11(VAR2, VAR2->VAR21.VAR16->VAR23);
        }
    }
    if (VAR2->VAR24)
    {
        FUN12(VAR2->VAR24);
        VAR2->VAR24 = NULL;
    }
    if (VAR2->VAR25)
    {
        FUN13(VAR2->VAR25);
        VAR2->VAR25 = NULL;
    }
    if (VAR2->VAR26)
    {
        FUN14(VAR2->VAR26);
        VAR2->VAR26 = NULL;
    }
    if (VAR2->VAR27)
    {
        FUN15(VAR2->VAR27);
        VAR2->VAR27 = NULL;
    }
    if (VAR2->VAR7)
    {
        if (VAR2->VAR28)
        {
            FUN16(VAR2->VAR7);
            VAR2->VAR28 = NULL;
        }
        FUN15(VAR2->VAR7);
        VAR2->VAR7 = NULL;
    }
    if (VAR2->VAR15)
    {
        FUN17(VAR2->VAR15);
        VAR2->VAR15 = NULL;
    }
    FUN9(VAR2->VAR29);
    VAR2->VAR29 = NULL;
}