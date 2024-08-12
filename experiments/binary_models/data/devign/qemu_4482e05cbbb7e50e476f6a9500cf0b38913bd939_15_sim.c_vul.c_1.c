static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR5 *VAR6 = NULL;
    ram_addr_t VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR8;
    const char *VAR9 = VAR2->VAR9;
    int VAR10;
    if (!VAR8)
    {
        VAR8 = VAR11;
    }
    for (VAR10 = 0; VAR10 < VAR12; VAR10++)
    {
        VAR4 = FUN2(FUN3(VAR13, VAR8));
        if (VAR4 == NULL)
        {
            FUN4("", VAR8);
            FUN5(VAR14);
        }
        VAR6 = &VAR4->VAR6;
        VAR6->VAR15[VAR16] = VAR10;
        FUN6(VAR17, VAR4);
        FUN7(VAR4);
    }
    if (VAR6)
    {
        XtensaMemory VAR18 = VAR6->VAR19->VAR18;
        VAR18.VAR20[0].VAR21 = VAR7;
        FUN8(&VAR6->VAR19->VAR22, "");
        FUN8(&VAR6->VAR19->VAR23, "");
        FUN8(&VAR6->VAR19->VAR24, "");
        FUN8(&VAR6->VAR19->VAR25, "");
        FUN8(&VAR6->VAR19->VAR26, "");
        FUN8(&VAR18, "");
    }
    if (VAR27[0])
    {
        FUN9(VAR27[0]);
    }
    if (VAR9)
    {
        uint64_t VAR28;
        uint64_t VAR29;
        int VAR30 = FUN10(VAR9, VAR31, VAR4, &VAR28, &VAR29, NULL, 1, VAR32, 0, 0);
        int VAR30 = FUN10(VAR9, VAR31, VAR4, &VAR28, &VAR29, NULL, 0, VAR32, 0, 0);
        if (VAR30 > 0)
        {
            VAR6->VAR33 = VAR28;
        }
    }
}