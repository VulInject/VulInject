void FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    if (FUN2(VAR1) != NULL)
    {
        return;
    }
    VAR3 = FUN3(sizeof(*VAR3));
    VAR3->VAR1 = strdup(VAR1);
    FUN4(&VAR4, VAR3, VAR5);
    VAR3->VAR6 = -1;
    VAR3->VAR7 = -1;
    FUN5(&VAR3->VAR8);
    VAR3->VAR9 = VAR10;
    if (VAR11)
    {
        FUN6(VAR11);
        VAR3->VAR12 = FUN7(VAR13, VAR11);
    }
    else
    {
        VAR3->VAR12 = FUN7(VAR13, "");
    }
    if (!VAR3->VAR12)
        FUN8(1);
    FUN9(&VAR3->mutex);
    FUN10();
    VAR3->VAR14.VAR15 = &VAR16;
    FUN11(&VAR3->VAR14);
}