static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    int VAR6;
    AVProbeData VAR7 = {VAR3, NULL, 0};
    int VAR8 = VAR9;
    if (VAR2->VAR10)
    {
        VAR2->VAR11 |= VAR12;
        if (!VAR2->VAR13)
            return FUN2(VAR2->VAR10, &VAR2->VAR13, VAR3, VAR2, 0, VAR2->VAR14);
        else if (VAR2->VAR13->VAR11 & VAR15)
            FUN3(VAR2, VAR16, ""
                                      "");
        return 0;
    }
    if ((VAR2->VAR13 && VAR2->VAR13->VAR11 & VAR15) || (!VAR2->VAR13 && (VAR2->VAR13 = FUN4(&VAR7, 0, &VAR8))))
        return VAR8;
    if ((VAR6 = FUN5(&VAR2->VAR10, VAR3, VAR17 | VAR2->VAR18, &VAR2->VAR19, VAR5, VAR2->VAR20)) < 0)
        return VAR6;
    if (VAR2->VAR13)
        return 0;
    return FUN2(VAR2->VAR10, &VAR2->VAR13, VAR3, VAR2, 0, VAR2->VAR14);
}