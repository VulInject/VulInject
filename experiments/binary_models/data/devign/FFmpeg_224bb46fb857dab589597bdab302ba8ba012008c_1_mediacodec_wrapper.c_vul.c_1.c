VAR1 *FUN1(void)
{
    VAR2 *VAR3 = NULL;
    VAR1 *VAR4 = NULL;
    VAR4 = FUN2(sizeof(VAR1));
    if (!VAR4)
    {
        return NULL;
    }
    VAR4->class = &VAR5;
    VAR3 = FUN3(VAR4);
    if (!VAR3)
    {
        FUN4(&VAR4);
        return NULL;
    }
    if (FUN5(VAR3, &VAR4->VAR6, VAR7, 1, VAR4) < 0)
    {
        goto VAR8;
    }
    VAR4->VAR9 = (*VAR3)->FUN6(VAR3, VAR4->VAR6.VAR10, VAR4->VAR6.VAR11);
    if (!VAR4->VAR9)
    {
        goto VAR8;
    }
    VAR4->VAR9 = (*VAR3)->FUN7(VAR3, VAR4->VAR9);
    if (!VAR4->VAR9)
    {
        goto VAR8;
    }
    return VAR4;
VAR8:
    FUN8(VAR3, &VAR4->VAR6, VAR7, 1, VAR4);
    FUN4(&VAR4);
    return NULL;
}