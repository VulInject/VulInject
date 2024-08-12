VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4 = NULL, **VAR5 = &VAR4;
    VAR6 *VAR7 = NULL;
    while ((VAR7 = FUN2(VAR7)))
    {
        VAR1 *VAR8 = FUN3(sizeof(*VAR8));
        VAR8->VAR9 = FUN4(VAR7);
        *VAR5 = VAR8;
        VAR5 = &VAR8->VAR10;
    }
    return VAR4;