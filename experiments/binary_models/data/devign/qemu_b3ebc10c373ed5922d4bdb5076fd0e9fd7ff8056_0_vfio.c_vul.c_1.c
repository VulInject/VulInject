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
        VAR10->VAR2 = VAR2;
        VAR10->VAR11 = true;
        if (FUN5(&VAR10->VAR12, 0))
        {
            FUN6("");
        }
        VAR10->VAR13 = FUN7(&VAR2->VAR6, VAR4);
        VAR10->VAR14 = FUN8(VAR15, VAR10->VAR13);
        if (VAR10->VAR14 < 0 || FUN9(VAR15, &VAR10->VAR12, NULL, VAR10->VAR14) < 0)
        {
            FUN10(FUN11(&VAR10->VAR12), VAR16, NULL, VAR10);
        }
    }
    VAR3 = FUN12(VAR2, false);
    if (VAR3)
    {
        if (VAR3 < 0)
        {
            FUN6("");
        }
        else if (VAR3 != VAR2->VAR5)
        {
            FUN6(""
                         "",
                         VAR2->VAR5, VAR3);
        }
        for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
        {
            VAR9 *VAR10 = &VAR2->VAR8[VAR4];
            if (VAR10->VAR14 >= 0)
            {
                FUN13(VAR15, &VAR10->VAR12, VAR10->VAR14);
                FUN14(VAR15, VAR10->VAR14);
                VAR10->VAR14 = -1;
            }
            else
            {
                FUN10(FUN11(&VAR10->VAR12), NULL, NULL, NULL);
            }
            FUN15(&VAR10->VAR12);
        }
        FUN16(VAR2->VAR8);
        if (VAR3 > 0 && VAR3 != VAR2->VAR5)
        {
            VAR2->VAR5 = VAR3;
            goto VAR7;
        }
        VAR2->VAR5 = 0;
        return;
    }
    VAR2->VAR12 = VAR17;
    FUN17("", VAR18, VAR2->VAR19.VAR20, VAR2->VAR19.VAR21, VAR2->VAR19.VAR22, VAR2->VAR19.VAR23, VAR2->VAR5);
}