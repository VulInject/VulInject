static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    FUN2(VAR2);
    VAR2->VAR5 = FUN3(&VAR2->VAR6);
VAR7:
    VAR2->VAR8 = FUN4(VAR2->VAR5 * sizeof(VAR9));
    for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
    {
        VAR9 *VAR10 = &VAR2->VAR8[VAR4];
        MSIMessage VAR11 = FUN5(&VAR2->VAR6, VAR4);
        VAR10->VAR2 = VAR2;
        VAR10->VAR12 = -1;
        VAR10->VAR13 = true;
        if (FUN6(&VAR10->VAR14, 0))
        {
            FUN7("");
        }
        FUN8(FUN9(&VAR10->VAR14), VAR15, NULL, VAR10);
        FUN10(VAR2, VAR10, &VAR11, false);
    }
    VAR2->VAR14 = VAR16;
    VAR3 = FUN11(VAR2, false);
    if (VAR3)
    {
        if (VAR3 < 0)
        {
            FUN7("");
        }
        else if (VAR3 != VAR2->VAR5)
        {
            FUN7(""
                         "",
                         VAR2->VAR5, VAR3);
        }
        for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
        {
            VAR9 *VAR10 = &VAR2->VAR8[VAR4];
            if (VAR10->VAR12 >= 0)
            {
                FUN12(VAR10);
            }
            FUN8(FUN9(&VAR10->VAR14), NULL, NULL, NULL);
            FUN13(&VAR10->VAR14);
        }
        FUN14(VAR2->VAR8);
        if (VAR3 > 0 && VAR3 != VAR2->VAR5)
        {
            VAR2->VAR5 = VAR3;
            goto VAR7;
        }
        VAR2->VAR5 = 0;
        FUN7("");
        VAR2->VAR14 = VAR17;
        return;
    }
    FUN15(VAR2->VAR18.VAR19, VAR2->VAR5);
}