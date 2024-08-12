VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    struct IscsiTask VAR9;
    struct unmap_list VAR10;
    int VAR11 = 0;
    if (!FUN2(VAR4, VAR5, VAR7))
    {
        return -VAR12;
    }
    if (!VAR7->VAR13.VAR14)
    {
        return 0;
    }
    VAR10.VAR15 = VAR4 / VAR7->VAR16;
    VAR10.VAR17 = VAR5 / VAR7->VAR16;
    FUN3(VAR7, &VAR9);
    FUN4(&VAR7->mutex);
VAR18:
    if (FUN5(VAR7->VAR19, VAR7->VAR20, 0, 0, &VAR10, 1, VAR21, &VAR9) == NULL)
    {
        VAR11 = -VAR22;
        goto VAR23;
    }
    while (!VAR9.VAR24)
    {
        FUN6(VAR7);
        FUN7(&VAR7->mutex);
        FUN8();
        FUN4(&VAR7->mutex);
    }
    if (VAR9.VAR25 != NULL)
    {
        FUN9(VAR9.VAR25);
        VAR9.VAR25 = NULL;
    }
    if (VAR9.VAR26)
    {
        VAR9.VAR24 = 0;
        goto VAR18;
    }
    if (VAR9.VAR27 == VAR28)
    {
        goto VAR23;
    }
    if (VAR9.VAR27 != VAR29)
    {
        VAR11 = VAR9.VAR30;
        goto VAR23;
    }
    FUN10(VAR7, VAR4 >> VAR31, VAR5 >> VAR31);
VAR23:
    FUN7(&VAR7->mutex);
    return VAR11;
}