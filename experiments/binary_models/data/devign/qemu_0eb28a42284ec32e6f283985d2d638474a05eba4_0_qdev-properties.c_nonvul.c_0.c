static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = VAR5;
    uint16_t VAR13, *VAR14 = FUN3(VAR10, VAR12);
    VAR7 *VAR15 = NULL;
    const int64_t VAR16 = 512;
    const int64_t VAR17 = 32768;
    if (VAR10->VAR18)
    {
        FUN4(VAR10, VAR6, VAR8);
        return;
    }
    FUN5(VAR4, &VAR13, VAR6, &VAR15);
    if (VAR15)
    {
        FUN6(VAR8, VAR15);
        return;
    }
    if (VAR13 && (VAR13 < VAR16 || VAR13 > VAR17))
    {
        FUN7(VAR8, VAR19, VAR10->VAR20 ?: "", VAR6, (VAR21)VAR13, VAR16, VAR17);
        return;
    }
    if ((VAR13 & (VAR13 - 1)) != 0)
    {
        FUN8(VAR8, "" VAR22 "", VAR10->VAR20 ?: "", VAR6, (VAR21)VAR13);
        return;
    }
    *VAR14 = VAR13;
}