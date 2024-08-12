static void FUN1(VAR1 *VAR2, long VAR3, int64_t VAR4, int64_t VAR5, bool VAR6)
{
    void *VAR7 = NULL;
    QEMUIOVector VAR8;
    int VAR9 = VAR10;
    VAR7 = FUN2(VAR5);
    if (VAR3)
    {
        memset(VAR7, VAR3, VAR5);
    }
    else
    {
        memset(VAR7, 0x00, VAR5);
    }
    FUN3(&VAR8, 1);
    FUN4(&VAR8, VAR7, VAR5);
    FUN5(VAR2, VAR4, &VAR8, 0, VAR11, &VAR9);
    while (VAR9 == VAR10)
    {
        FUN6(false);
    }
    if (VAR6)
    {
        FUN7(VAR9 != 0);
    }
    else
    {
        FUN7(VAR9 == 0);
    }
    FUN8(VAR7);