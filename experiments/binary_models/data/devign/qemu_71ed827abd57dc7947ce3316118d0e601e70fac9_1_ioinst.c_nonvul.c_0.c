int FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    uint64_t VAR11;
    int VAR12;
    VAR13 *VAR14;
    hwaddr VAR15 = sizeof(*VAR14);
    VAR11 = FUN2(VAR2, VAR4);
    if (VAR11 & 3)
    {
        FUN3(VAR2, VAR16, 2);
        return -VAR17;
    }
    VAR14 = FUN4(VAR2, VAR11, &VAR15, 1);
    if (!VAR14 || VAR15 != sizeof(*VAR14))
    {
        FUN3(VAR2, VAR18, 2);
        VAR12 = -VAR17;
        goto VAR19;
    }
    if (FUN5(VAR3, &VAR8, &VAR5, &VAR6, &VAR7))
    {
        FUN3(VAR2, VAR20, 2);
        VAR12 = -VAR17;
        goto VAR19;
    }
    FUN6("", VAR5, VAR6, VAR7);
    VAR10 = FUN7(VAR8, VAR5, VAR6, VAR7);
    if (VAR10)
    {
        if (FUN8(VAR10))
        {
            FUN9(VAR10, VAR14);
            VAR12 = 0;
        }
        else
        {
            VAR12 = 3;
        }
    }
    else
    {
        if (FUN10(VAR8, VAR5, VAR6, VAR7))
        {
            VAR12 = 3;
        }
        else
        {
            memset(VAR14, 0, sizeof(*VAR14));
            VAR12 = 0;
        }
    }
VAR19:
    FUN11(VAR2, VAR14, VAR15, 1);
    return VAR12;
}