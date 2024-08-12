void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    VAR5 *VAR6 = FUN4(VAR4);
    VAR7 *VAR8 = FUN5(VAR2);
    VAR9 *VAR10 = FUN6(VAR4, VAR8->VAR11, NULL);
    if (VAR6->VAR12)
    {
        VAR13 *VAR14 = FUN7(FUN8(VAR2));
        int VAR15;
        for (VAR15 = 0; VAR15 < VAR8->VAR16; VAR15++)
        {
            VAR17 *VAR18 = FUN9(VAR14->VAR19[VAR15]);
            FUN10(VAR18->VAR20);
        }
    }
    assert(VAR10);
    VAR10->VAR21 = NULL;
    FUN11(FUN8(VAR2));
}