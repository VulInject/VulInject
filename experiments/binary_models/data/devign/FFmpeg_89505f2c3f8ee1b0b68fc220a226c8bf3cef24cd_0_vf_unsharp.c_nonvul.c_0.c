static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6)
{
    int VAR7;
    const char *VAR8 = VAR4->VAR9 == 0 ? "" : VAR4->VAR9 < 0 ? ""
                                                                   : "";
    if (!(VAR4->VAR10 & VAR4->VAR11 & 1))
    {
        FUN2(VAR2, VAR12, "", VAR5, VAR4->VAR10, VAR4->VAR11);
        return FUN3(VAR13);
    }
    FUN2(VAR2, VAR14, "", VAR8, VAR5, VAR4->VAR10, VAR4->VAR11, VAR4->VAR9 / 65535.0);
    for (VAR7 = 0; VAR7 < 2 * VAR4->VAR15; VAR7++)
        if (!(VAR4->VAR16[VAR7] = FUN4(sizeof(*(VAR4->VAR16[VAR7])) * (VAR6 + 2 * VAR4->VAR17))))
            return FUN3(VAR18);
    return 0;
}