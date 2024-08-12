static void FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5)
{
    long VAR6;
    FUN2(VAR2->VAR7);
    VAR2->VAR7 = NULL;
    VAR2->VAR8 = 0;
    FUN3(VAR2);
    VAR6 = FUN4(VAR3);
    if (VAR6 < 0)
    {
        FUN5(VAR5, VAR9, "", VAR3);
    }
    else if (VAR6 > 0)
    {
        if (VAR6 != VAR3)
        {
            FUN6(VAR5, "", VAR3, VAR6);
        }
        VAR2->VAR8 = VAR3;
        VAR2->VAR7 = NULL;
    }
    else
    {
        size_t VAR10 = 1ULL << VAR3;
        int VAR11;
        VAR2->VAR7 = FUN7(VAR10, VAR10);
        if (!VAR2->VAR7)
        {
            FUN5(VAR5, VAR9, "", VAR3);
            return;
        }
        memset(VAR2->VAR7, 0, VAR10);
        VAR2->VAR8 = VAR3;
        for (VAR11 = 0; VAR11 < VAR10 / VAR12; VAR11++)
        {
            FUN8(FUN9(VAR2->VAR7, VAR11));
        }
    }
}