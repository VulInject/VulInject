FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR5;
    VAR8 *VAR9;
    VAR9 = FUN2(&VAR10, VAR2, VAR4, VAR5);
    VAR9->VAR7 = VAR7;
    VAR9->VAR11 = VAR12;
    if (FUN3(VAR9) != 0)
    {
        FUN4(VAR9);
        return NULL;
    }
    FUN5(VAR7);
    return &VAR9->VAR13;
}