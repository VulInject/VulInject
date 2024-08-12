static struct VAR1 *FUN1(struct VAR2 *VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    struct VAR1 *VAR8 = NULL;
    VAR8 = FUN2(VAR3, VAR4, VAR5, VAR6, 64);
    if (VAR8 == NULL || VAR8->VAR9 != VAR10)
    {
        goto VAR11;
    }
    VAR7 = FUN3(VAR8);
    if (VAR7 > VAR8->VAR12.VAR13)
    {
        FUN4(VAR8);
        VAR8 = FUN2(VAR3, VAR4, VAR5, VAR6, VAR7);
        if (VAR8 == NULL || VAR8->VAR9 != VAR10)
        {
            goto VAR11;
        }
    }
    return VAR8;
VAR11:
    FUN5("", FUN6(VAR3));
    if (VAR8)
    {
        FUN4(VAR8);
        return NULL;
    }
    return NULL;
}