static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = 0;
    int VAR8;
    uint32_t VAR9, VAR10;
    uint64_t VAR11;
    void *VAR12 = NULL;
    int64_t VAR13;
    VAR14 *VAR15 = NULL;
    VHDXLogEntryHeader VAR16 = {0};
    VAR9 = VAR6->VAR17;
    VAR12 = FUN2(VAR2, VAR18);
    VAR7 = FUN3(VAR2, VAR4);
    if (VAR7 < 0)
    {
        goto VAR19;
    }
    while (VAR9--)
    {
        VAR7 = FUN4(VAR2, &VAR6->VAR20, &VAR16);
        if (VAR7 < 0)
        {
            goto VAR19;
        }
        VAR13 = FUN5(VAR2->VAR21->VAR2);
        if (VAR13 < 0)
        {
            VAR7 = VAR13;
            goto VAR19;
        }
        if (VAR16.VAR22 > VAR13)
        {
            VAR7 = -VAR23;
            goto VAR19;
        }
        VAR7 = FUN6(VAR2, VAR4, &VAR6->VAR20, &VAR15, true);
        if (VAR7 < 0)
        {
            goto VAR19;
        }
        for (VAR8 = 0; VAR8 < VAR15->VAR24.VAR25; VAR8++)
        {
            if (VAR15->VAR26[VAR8].VAR27 == VAR28)
            {
                VAR7 = FUN7(VAR2, &VAR6->VAR20, &VAR10, VAR12, 1, false);
                if (VAR7 < 0)
                {
                    goto VAR19;
                }
                if (VAR10 != 1)
                {
                    VAR7 = -VAR23;
                    goto VAR19;
                }
                FUN8(VAR12);
            }
            VAR7 = FUN9(VAR2, &VAR15->VAR26[VAR8], VAR12);
            if (VAR7 < 0)
            {
                goto VAR19;
            }
        }
        if (VAR13 < VAR15->VAR24.VAR29)
        {
            VAR11 = VAR15->VAR24.VAR29;
            if (VAR11 % (1024 * 1024))
            {
                VAR11 = FUN10(VAR11, VAR30);
                if (VAR11 > VAR31)
                {
                    VAR7 = -VAR23;
                    goto VAR19;
                }
                VAR7 = FUN11(VAR2->VAR21, VAR11, VAR32, NULL);
                if (VAR7 < 0)
                {
                    goto VAR19;
                }
            }
        }
        FUN12(VAR15);
        VAR15 = NULL;
    }
    VAR7 = FUN13(VAR2);
    if (VAR7 < 0)
    {
        goto VAR19;
    }
    FUN14(VAR2, VAR4);
VAR19:
    FUN12(VAR12);
    FUN12(VAR15);
    return VAR7;
}