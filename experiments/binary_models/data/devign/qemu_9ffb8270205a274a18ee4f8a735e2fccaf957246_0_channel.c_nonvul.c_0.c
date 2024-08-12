int FUN1(VAR1 *VAR2, const struct VAR3 *VAR4, size_t VAR5, VAR6 **VAR7)
{
    int VAR8 = -1;
    struct VAR3 *VAR9 = FUN2(struct VAR3, VAR5);
    struct VAR3 *VAR10 = VAR9;
    unsigned int VAR11 = VAR5;
    VAR11 = FUN3(VAR9, VAR11, VAR4, VAR5, 0, FUN4(VAR4, VAR5));
    while (VAR11 > 0)
    {
        ssize_t VAR12;
        VAR12 = FUN5(VAR2, VAR9, VAR11, VAR7);
        if (VAR12 == VAR13)
        {
            if (FUN6())
            {
                FUN7(VAR2, VAR14);
            }
            else
            {
                FUN8(VAR2, VAR14);
            }
            continue;
        }
        if (VAR12 < 0)
        {
            goto VAR15;
        }
        FUN9(&VAR9, &VAR11, VAR12);
    }
    VAR8 = 0;
VAR15:
    FUN10(VAR10);
    return VAR8;
}