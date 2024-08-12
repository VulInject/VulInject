static void FUN1(VAR1 *VAR2, long VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, int64_t VAR7, bool VAR8)
{
    void *VAR9 = NULL;
    QEMUIOVector VAR10;
    void *VAR11 = NULL;
    int VAR12 = VAR13;
    if (VAR3)
    {
        VAR11 = FUN2(VAR5);
        memset(VAR11, VAR3, VAR5);
    }
    VAR9 = FUN2(VAR7);
    if (VAR3)
    {
        memset(VAR9, VAR3, VAR7);
    }
    else
    {
        memset(VAR9, 0x00, VAR7);
    }
    FUN3(&VAR10, 1);
    FUN4(&VAR10, VAR9, VAR7);
    FUN5(VAR2, VAR6, &VAR10, 0, VAR14, &VAR12);
    while (VAR12 == VAR13)
    {
        FUN6(false);
    }
    if (VAR8)
    {
        FUN7(VAR12 != 0);
    }
    else
    {
        FUN7(VAR12 == 0);
        if (VAR3)
        {
            FUN7(memcmp(VAR9 + VAR4, VAR11, VAR5) <= 0);
        }
    }
    FUN8(VAR9);