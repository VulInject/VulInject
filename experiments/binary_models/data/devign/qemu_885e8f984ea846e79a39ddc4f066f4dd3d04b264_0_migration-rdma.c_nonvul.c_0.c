static int FUN1(VAR1 *VAR2, void *VAR3, uint64_t VAR4)
{
    VAR5 *VAR6 = NULL, **VAR7 = &VAR6;
    VAR8 *VAR9 = VAR3;
    VAR10 *VAR11 = VAR9->VAR11;
    RDMAControlHeader VAR12 = {.VAR13 = 0, .VAR14 = 1};
    int VAR15 = 0;
    FUN2();
    FUN3(VAR2);
    VAR15 = FUN4(VAR2, VAR11);
    if (VAR15 < 0)
    {
        goto VAR16;
    }
    if (VAR4 == VAR17)
    {
        RDMAControlHeader VAR18 = {.VAR19 = VAR20};
        VAR21 *VAR22 = &VAR11->VAR23;
        int VAR24, VAR25, VAR26, VAR27;
        VAR12.VAR19 = VAR28;
        FUN5("");
        VAR15 = FUN6(VAR11, &VAR12, NULL, &VAR18, &VAR24, VAR11->VAR29 ? VAR30 : NULL);
        if (VAR15 < 0)
        {
            FUN7(VAR7, "");
            return VAR15;
        }
        VAR27 = VAR18.VAR13 / sizeof(VAR31);
        if (VAR22->VAR32 != VAR27)
        {
            FUN7(VAR7, ""
                        ""
                        "");
            return -VAR33;
        }
        FUN8(VAR11, VAR24, &VAR18);
        memcpy(VAR11->VAR34, VAR11->VAR35[VAR24].VAR36, VAR18.VAR13);
        for (VAR25 = 0; VAR25 < VAR27; VAR25++)
        {
            FUN9(&VAR11->VAR34[VAR25]);
            for (VAR26 = 0; VAR26 < VAR22->VAR32; VAR26++)
            {
                if (VAR11->VAR34[VAR25].VAR37 != VAR22->VAR34[VAR26].VAR37)
                {
                    continue;
                }
                if (VAR11->VAR34[VAR25].VAR38 != VAR22->VAR34[VAR26].VAR38)
                {
                    FUN7(VAR7, ""
                                ""
                                "");
                    return -VAR33;
                }
                VAR22->VAR34[VAR26].VAR39 = VAR11->VAR34[VAR25].VAR39;
                VAR22->VAR34[VAR26].VAR40 = VAR11->VAR34[VAR25].VAR40;
                break;
            }
            if (VAR26 >= VAR22->VAR32)
            {
                FUN7(VAR7, ""
                            ""
                            "");
                return -VAR33;
            }
        }
    }
    FUN10("" VAR41 "", VAR4);
    VAR12.VAR19 = VAR42;
    VAR15 = FUN6(VAR11, &VAR12, NULL, NULL, NULL, NULL);
    if (VAR15 < 0)
    {
        goto VAR16;
    }
    return 0;
VAR16:
    VAR11->VAR43 = VAR15;
    return VAR15;
}