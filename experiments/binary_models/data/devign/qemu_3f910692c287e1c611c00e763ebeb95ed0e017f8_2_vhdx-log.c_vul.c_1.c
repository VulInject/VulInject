static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = 0;
    int VAR8;
    uint32_t VAR9, VAR10;
    uint64_t VAR11;
    void *VAR12 = NULL;
    VAR13 *VAR14 = NULL;
    VHDXLogEntryHeader VAR15 = {0};
    VAR9 = VAR6->VAR16;
    VAR12 = FUN2(VAR2, VAR17);
    VAR7 = FUN3(VAR2, VAR4);
    if (VAR7 < 0)
    {
        goto VAR18;
    }
    while (VAR9--)
    {
        VAR7 = FUN4(VAR2, &VAR6->VAR19, &VAR15);
        if (VAR7 < 0)
        {
            goto VAR18;
        }
        if (VAR15.VAR20 > FUN5(VAR2->VAR21->VAR2))
        {
            VAR7 = -VAR22;
            goto VAR18;
        }
        VAR7 = FUN6(VAR2, VAR4, &VAR6->VAR19, &VAR14, true);
        if (VAR7 < 0)
        {
            goto VAR18;
        }
        for (VAR8 = 0; VAR8 < VAR14->VAR23.VAR24; VAR8++)
        {
            if (VAR14->VAR25[VAR8].VAR26 == VAR27)
            {
                VAR7 = FUN7(VAR2, &VAR6->VAR19, &VAR10, VAR12, 1, false);
                if (VAR7 < 0)
                {
                    goto VAR18;
                }
                if (VAR10 != 1)
                {
                    VAR7 = -VAR22;
                    goto VAR18;
                }
                FUN8(VAR12);
            }
            VAR7 = FUN9(VAR2, &VAR14->VAR25[VAR8], VAR12);
            if (VAR7 < 0)
            {
                goto VAR18;
            }
        }
        if (FUN5(VAR2->VAR21->VAR2) < VAR14->VAR23.VAR28)
        {
            VAR11 = VAR14->VAR23.VAR28;
            if (VAR11 % (1024 * 1024))
            {
                VAR11 = ((VAR11 >> 20) + 1) << 20;
                FUN10(VAR2->VAR21, VAR11, VAR29, NULL);
            }
        }
        FUN11(VAR14);
        VAR14 = NULL;
    }
    FUN12(VAR2);
    FUN13(VAR2, VAR4);
VAR18:
    FUN11(VAR12);
    FUN11(VAR14);
    return VAR7;
}