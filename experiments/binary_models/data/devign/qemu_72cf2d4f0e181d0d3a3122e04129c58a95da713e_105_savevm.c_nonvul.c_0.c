static VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    if (VAR5)
        return VAR5;
    FUN2(VAR4, &VAR6, VAR7)
    {
        VAR2 = VAR4->VAR8;
        if (FUN3(VAR2))
            goto VAR9;
    }
    return NULL;
VAR9:
    VAR5 = VAR2;
    return VAR2;
}