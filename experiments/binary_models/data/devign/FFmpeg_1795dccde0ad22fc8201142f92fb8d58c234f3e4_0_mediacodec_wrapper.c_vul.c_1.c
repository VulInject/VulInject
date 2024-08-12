VAR1 *FUN1(const char *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR1 *VAR5 = NULL;
    jstring VAR6 = NULL;
    VAR5 = FUN2(sizeof(VAR1));
    if (!VAR5)
    {
        return NULL;
    }
    VAR5->class = &VAR7;
    VAR4 = FUN3(VAR5);
    if (!VAR4)
    {
        FUN4(&VAR5);
        return NULL;
    }
    if (FUN5(VAR4, &VAR5->VAR8, VAR9, 1, VAR5) < 0)
    {
        goto VAR10;
    }
    VAR6 = FUN6(VAR4, VAR2, VAR5);
    if (!VAR6)
    {
        goto VAR10;
    }
    VAR5->VAR11 = (*VAR4)->FUN7(VAR4, VAR5->VAR8.VAR12, VAR5->VAR8.VAR13, VAR6);
    if (FUN8(VAR4, 1, VAR5) < 0)
    {
        goto VAR10;
    }
    VAR5->VAR11 = (*VAR4)->FUN9(VAR4, VAR5->VAR11);
    if (!VAR5->VAR11)
    {
        goto VAR10;
    }
    if (FUN10(VAR5) < 0)
    {
        goto VAR10;
    }
    if (VAR5->VAR8.VAR14 && VAR5->VAR8.VAR15)
    {
        VAR5->VAR16 = 1;
    }
    return VAR5;
VAR10:
    FUN11(VAR4, &VAR5->VAR8, VAR9, 1, VAR5);
    if (VAR6)
    {
        (*VAR4)->FUN12(VAR4, VAR6);
    }
    FUN4(&VAR5);
    return NULL;
}