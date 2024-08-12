static void FUN1(int VAR1, int VAR2, bool VAR3)
{
    struct qht_stats VAR4;
    int VAR5;
    for (VAR5 = VAR1; VAR5 < VAR2; VAR5++)
    {
        void *VAR6;
        uint32_t VAR7;
        int32_t VAR8;
        VAR8 = VAR5;
        VAR7 = VAR5;
        VAR6 = FUN2(&VAR9, VAR10, &VAR8, VAR7);
        FUN3(!!VAR6 == VAR3);
    }
    FUN4();
    FUN5(&VAR9, &VAR4);
    if (VAR4.VAR11)
    {
        FUN6(FUN7(&VAR4.VAR12), >=, 1.0);
    }
    FUN8(VAR4.VAR13, >, 0);
    FUN9(&VAR4);