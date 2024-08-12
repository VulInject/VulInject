VAR1 *FUN1(int VAR2, int VAR3, int VAR4, int VAR5, VAR6 *VAR7, bool VAR8)
{
    VAR1 *VAR9 = FUN2(VAR1, 1);
    if (VAR8)
    {
        VAR9->VAR10 = FUN3(VAR4);
    }
    else
    {
        VAR9->VAR10 = FUN4(VAR4);
    }
    VAR9->VAR11 = FUN5(&VAR9->VAR10);
    assert(VAR9->VAR11 != 0);
    VAR9->VAR12 = FUN6(VAR9->VAR11, VAR2, VAR3, (void *)VAR7, VAR5);
    assert(VAR9->VAR12 != NULL);
    VAR9->VAR13 = VAR14;
    return VAR9;
}