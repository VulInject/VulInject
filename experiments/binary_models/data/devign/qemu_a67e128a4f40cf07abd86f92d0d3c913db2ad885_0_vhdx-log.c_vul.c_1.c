static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8, bool VAR9)
{
    int VAR10 = 0;
    uint32_t VAR11;
    uint32_t VAR12;
    VHDXLogEntryHeader VAR13;
    VAR7 *VAR14 = NULL;
    VHDXLogDescriptor VAR15;
    int VAR16;
    assert(*VAR8 == NULL);
    VAR10 = FUN2(VAR2, VAR6, &VAR13);
    if (VAR10 < 0)
    {
        goto VAR17;
    }
    if (FUN3(VAR6, &VAR13, VAR4) == false)
    {
        VAR10 = -VAR18;
        goto VAR17;
    }
    VAR11 = FUN4(VAR13.VAR19);
    VAR14 = FUN5(VAR2, VAR11 * VAR20);
    VAR10 = FUN6(VAR2, VAR6, &VAR12, VAR14, VAR11, false);
    if (VAR10 < 0)
    {
        goto VAR21;
    }
    if (VAR12 != VAR11)
    {
        VAR10 = -VAR18;
        goto VAR21;
    }
    for (VAR16 = 0; VAR16 < VAR13.VAR19; VAR16++)
    {
        VAR15 = VAR14->VAR15[VAR16];
        FUN7(&VAR15);
        if (VAR9)
        {
            VAR14->VAR15[VAR16] = VAR15;
        }
        if (FUN8(&VAR15, &VAR13) == false)
        {
            VAR10 = -VAR18;
            goto VAR21;
        }
    }
    if (VAR9)
    {
        VAR14->VAR13 = VAR13;
    }
    *VAR8 = VAR14;
    goto VAR17;
VAR21:
    FUN9(VAR14);
VAR17:
    return VAR10;
}