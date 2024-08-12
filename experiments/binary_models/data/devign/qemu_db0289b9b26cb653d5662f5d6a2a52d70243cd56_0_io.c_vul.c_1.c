static bool FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5, *VAR6;
    bool VAR7;
    FUN2(VAR2, VAR3);
    VAR7 = FUN3(VAR2, FUN4(&VAR2->VAR8) > 0);
    FUN5(VAR5, &VAR2->VAR9, VAR10, VAR6)
    {
        VAR1 *VAR2 = VAR5->VAR2;
        bool VAR11 = FUN6() == FUN7();
        assert(VAR2->VAR12 > 0);
        if (VAR11)
        {
            FUN8(VAR2);
        }
        VAR7 |= FUN1(VAR2, VAR3);
        if (VAR11)
        {
            FUN9(VAR2);
        }
    }
    return VAR7;
}