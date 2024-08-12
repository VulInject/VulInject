static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, dma_addr_t VAR6, char *VAR7, uint32_t VAR8, VAR9 *VAR10, VAR11 **VAR12)
{
    VAR11 *VAR13 = NULL;
    int VAR14;
    VAR2->VAR10 = VAR10;
    if (VAR15 == 0)
    {
        VAR15 = FUN2();
        VAR16 = FUN3(1, FUN2(), VAR17 / 1000);
        VAR15 = FUN3(1, FUN2(), 1000);
        if (FUN2() >= VAR17)
        {
            VAR16 = FUN3(1, FUN2(), VAR17);
        }
        else
        {
            VAR16 = 1;
        }
        FUN4(VAR15, VAR16);
    }
    VAR2->VAR5 = VAR5;
    if (VAR7)
    {
        VAR18 *VAR19[VAR20];
        for (VAR14 = 0; VAR14 < VAR5; VAR14++)
        {
            VAR19[VAR14] = &VAR2->VAR21[VAR14].VAR22;
        }
        FUN5(VAR7, VAR19, VAR5, VAR8, VAR2, &VAR23, VAR24 | VAR25, &VAR13);
        if (VAR13)
        {
            FUN6(VAR12, VAR13);
            return;
        }
    }
    else
    {
        FUN7(&VAR2->VAR26, sizeof(VAR2->VAR26), &VAR27, VAR4);
        for (VAR14 = 0; VAR14 < VAR5; VAR14++)
        {
            FUN8(&VAR2->VAR26, &VAR2->VAR21[VAR14].VAR22, VAR2, VAR14, &VAR23, VAR24 | VAR25);
        }
    }
    FUN9(&VAR2->VAR28, FUN10(VAR4), &VAR29, VAR2, "", 256);
    VAR2->VAR6 = VAR6;
    VAR2->VAR30 = FUN11(FUN10(VAR4));
    FUN12(&VAR2->VAR31);
    VAR2->VAR32 = 0;
    FUN13(VAR33, VAR2);
}