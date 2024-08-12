static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4;
    AVProbeData VAR5 = {VAR3, NULL, 0};
    if (VAR2->VAR6)
    {
        VAR2->VAR7 |= VAR8;
        if (!VAR2->VAR9)
            return FUN2(VAR2->VAR6, &VAR2->VAR9, VAR3, VAR2, 0, 0);
        else if (VAR2->VAR9->VAR7 & VAR10)
            FUN3(VAR2, VAR11, ""
                                      "");
    }
    if ((VAR2->VAR9 && VAR2->VAR9->VAR7 & VAR10) || (!VAR2->VAR9 && (VAR2->VAR9 = FUN4(&VAR5, 0))))
        if ((VAR4 = FUN5(&VAR2->VAR6, VAR3, VAR12)) < 0)
            return VAR4;
    if (VAR2->VAR9)
        return FUN2(VAR2->VAR6, &VAR2->VAR9, VAR3, VAR2, 0, 0);