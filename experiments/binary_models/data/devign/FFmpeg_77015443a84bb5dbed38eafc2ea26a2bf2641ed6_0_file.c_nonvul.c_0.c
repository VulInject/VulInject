static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = 0;
    const char *VAR5 = VAR2->VAR5;
    FUN2(VAR5, "", &VAR5);
    {
        if (FUN3(VAR5, VAR6) < 0)
            return FUN4(VAR7);
        if (VAR3 & VAR8)
            if (FUN3(VAR5, VAR9) >= 0)
                VAR4 |= VAR8;
        if (VAR3 & VAR10)
            if (FUN3(VAR5, VAR11) >= 0)
                VAR4 |= VAR10;
        struct stat VAR12;
        VAR4 = FUN5(VAR5, &VAR12);
        if (VAR4 < 0)
            return FUN4(VAR7);
        VAR4 |= VAR12.VAR13 & VAR14 ? VAR3 & VAR8 : 0;
        VAR4 |= VAR12.VAR13 & VAR15 ? VAR3 & VAR10 : 0;
    }
    return VAR4;
}