static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    int VAR6;
    AVProbeData VAR7 = {VAR3, NULL, 0};
    if (VAR2->VAR8 && !strlen(VAR3))
        return 0;
    if (VAR2->VAR9)
    {
        VAR2->VAR10 |= VAR11;
        if (!VAR2->VAR8)
            return FUN2(VAR2->VAR9, &VAR2->VAR8, VAR3, VAR2, 0, 0);
        else if (VAR2->VAR8->VAR10 & VAR12)
            FUN3(VAR2, VAR13, ""
                                      "");
        return 0;
    }
    if ((VAR2->VAR8 && VAR2->VAR8->VAR10 & VAR12) || (!VAR2->VAR8 && (VAR2->VAR8 = FUN4(&VAR7, 0))))
        return 0;
    if ((VAR6 = FUN5(&VAR2->VAR9, VAR3, VAR14, &VAR2->VAR15, VAR5)) < 0)
        return VAR6;
    if (VAR2->VAR8)
        return 0;
    return FUN2(VAR2->VAR9, &VAR2->VAR8, VAR3, VAR2, 0, 0);
}