VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    struct IscsiTask VAR9;
    struct unmap_list VAR10;
    if (!FUN2(VAR4, VAR5, VAR7))
    {
        return -VAR11;
    }
    if (!VAR7->VAR12.VAR13)
    {
        return 0;
    }
    VAR10.VAR14 = FUN3(VAR4, VAR7);
    VAR10.VAR15 = FUN3(VAR5, VAR7);
    FUN4(VAR7, &VAR9);
VAR16:
    if (FUN5(VAR7->VAR17, VAR7->VAR18, 0, 0, &VAR10, 1, VAR19, &VAR9) == NULL)
    {
        return -VAR20;
    }
    while (!VAR9.VAR21)
    {
        FUN6(VAR7);
        FUN7();
    }
    if (VAR9.VAR22 != NULL)
    {
        FUN8(VAR9.VAR22);
        VAR9.VAR22 = NULL;
    }
    if (VAR9.VAR23)
    {
        goto VAR16;
    }
    if (VAR9.VAR24 == VAR25)
    {
        return 0;
    }
    if (VAR9.VAR24 != VAR26)
    {
        return -VAR20;
    }
    return 0;
}