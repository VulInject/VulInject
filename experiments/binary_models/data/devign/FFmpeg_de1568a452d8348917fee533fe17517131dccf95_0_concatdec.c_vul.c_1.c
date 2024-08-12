static int FUN1(VAR1 *VAR2, char *VAR3, VAR4 **VAR5, unsigned *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR4 *VAR10;
    char *VAR11;
    size_t VAR12;
    if (VAR8->VAR13 > 0 && !FUN2(VAR3))
    {
        FUN3(VAR2, VAR14, "", VAR3);
        return FUN4(VAR15);
    }
    VAR12 = strlen(VAR2->VAR3) + strlen(VAR3) + 16;
    if (!(VAR11 = FUN5(VAR12)))
        return FUN4(VAR16);
    FUN6(VAR11, VAR12, VAR2->VAR3, VAR3);
    FUN7(VAR3);
    if (VAR8->VAR17 >= *VAR6)
    {
        size_t VAR18 = FUN8(*VAR6 * 2, 16);
        VAR4 *VAR19;
        if (VAR18 <= VAR8->VAR17 || VAR18 > VAR20 / sizeof(*VAR8->VAR21) || !(VAR19 = FUN9(VAR8->VAR21, VAR18 * sizeof(*VAR8->VAR21))))
            return FUN4(VAR16);
        VAR8->VAR21 = VAR19;
        *VAR6 = VAR18;
    }
    VAR10 = &VAR8->VAR21[VAR8->VAR17++];
    memset(VAR10, 0, sizeof(*VAR10));
    *VAR5 = VAR10;
    VAR10->VAR11 = VAR11;
    VAR10->VAR22 = VAR23;
    VAR10->VAR24 = VAR23;
    return 0;
}