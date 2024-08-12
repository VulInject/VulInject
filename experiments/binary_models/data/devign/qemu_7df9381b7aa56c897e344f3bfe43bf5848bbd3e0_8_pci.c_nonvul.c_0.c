static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4 = FUN2((VAR5)VAR6);
    off_t VAR7 = VAR2->VAR8 + VAR9;
    VAR10 *VAR11 = FUN3(VAR2);
    char VAR12[32];
    int VAR13 = VAR2->VAR14.VAR13;
    if (VAR2->VAR15.VAR16 || !VAR2->VAR15.VAR17)
    {
        if (FUN4(VAR2) && VAR2->VAR15.VAR16)
        {
            FUN5("", VAR2->VAR14.VAR12);
        }
        return;
    }
    if (pread(VAR13, &VAR3, 4, VAR7) != 4 || FUN6(VAR13, &VAR4, 4, VAR7) != 4 || pread(VAR13, &VAR4, 4, VAR7) != 4 || FUN6(VAR13, &VAR3, 4, VAR7) != 4)
    {
        FUN7("", VAR18, VAR2->VAR14.VAR12);
        return;
    }
    VAR4 = ~(FUN8(VAR4) & VAR6) + 1;
    if (!VAR4)
    {
        return;
    }
    if (FUN4(VAR2))
    {
        if (VAR11->VAR19 && FUN9(VAR11->VAR19, ""))
        {
            FUN5("", VAR2->VAR14.VAR12);
        }
        else
        {
            FUN5("", VAR2->VAR14.VAR12);
            return;
        }
    }
    FUN10(VAR2->VAR14.VAR12, VAR4);
    snprintf(VAR12, sizeof(VAR12), "", VAR2->VAR14.VAR12);
    FUN11(&VAR2->VAR15.VAR20, FUN12(VAR2), &VAR21, VAR2, VAR12, VAR4);
    FUN13(&VAR2->VAR15, VAR22, VAR23, &VAR2->VAR15.VAR20);
    VAR2->VAR15.VAR24 = true;
    VAR2->VAR25 = false;
}