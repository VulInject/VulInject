int FUN1(VAR1 *VAR2, VAR3 *VAR4, int av_unused VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    if (FUN2(VAR7->VAR10) < sizeof(VAR4))
    {
        FUN3(VAR2, VAR11, ""
                                  "");
        return FUN4(VAR12);
    }
    VAR9 = FUN5(VAR2, VAR4);
    if (VAR9 < 0)
        return VAR9;
    if (sizeof(VAR4) != FUN6(VAR7->VAR10, &VAR4, sizeof(VAR4), NULL))
    {
        FUN3(VAR2, VAR11, "");
        return FUN4(VAR12);
    }
    return 0;
}