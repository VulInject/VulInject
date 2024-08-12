static int FUN1(VAR1 *VAR2, VAR3 *VAR4, struct VAR5 *VAR6, struct VAR5 **VAR7)
{
    int VAR8;
VAR9:
    VAR8 = FUN2(VAR4->VAR10, VAR6, VAR7);
    if (VAR2->VAR11 & VAR12)
    {
        if (!VAR8 && *VAR7 != NULL && !strcmp(VAR6->VAR13, VAR14))
        {
            goto VAR9;
        }
    }
    return VAR8;
}