static VAR1 FUN1(VAR2 *VAR3, int VAR4, uint64_t VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    int64_t VAR9 = 0;
    void *VAR10 = NULL;
    int VAR11;
    VAR9 = FUN2(VAR3, VAR7->VAR12);
    if (VAR9 < 0)
    {
        fprintf(VAR13, "", strerror(-VAR9));
        VAR11 = VAR9;
        goto VAR14;
    }
    VAR11 = FUN3(VAR3, VAR7->VAR15, VAR5, &VAR10);
    if (VAR11 < 0)
    {
        fprintf(VAR13, "", strerror(-VAR11));
        goto VAR14;
    }
    VAR11 = FUN4(VAR3, 0, VAR9, VAR7->VAR12);
    if (VAR11 < 0)
    {
        fprintf(VAR13, ""
                        "",
                strerror(-VAR11));
        VAR9 = 0;
        goto VAR14;
    }
    VAR11 = FUN5(VAR3->VAR16, VAR9 / VAR17, VAR10, VAR7->VAR18);
    if (VAR11 < 0)
    {
        fprintf(VAR13, "", strerror(-VAR11));
        goto VAR14;
    }
    assert(!FUN6(VAR7, VAR9));
    VAR7->VAR19[VAR4] = VAR9;
    VAR11 = FUN7(VAR3, VAR4);
    if (VAR11 < 0)
    {
        fprintf(VAR13, "", strerror(-VAR11));
        goto VAR14;
    }
VAR14:
    if (VAR9 && (VAR11 < 0))
    {
        FUN8(VAR3, VAR9, VAR7->VAR12, VAR20);
    }
    if (VAR10)
    {
        if (VAR11 < 0)
        {
            FUN9(VAR3, VAR7->VAR15, &VAR10);
        }
        else
        {
            VAR11 = FUN9(VAR3, VAR7->VAR15, &VAR10);
        }
    }
    if (VAR11 < 0)
    {
        return VAR11;
    }
    return VAR9;
}