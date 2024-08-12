static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7)
{
    int VAR8 = VAR2->VAR9 - VAR5->VAR10[0];
    int VAR11 = VAR8 + VAR7 * VAR5->VAR12[0] + VAR6 * (1 + VAR2->VAR13);
    if (VAR11 < 0)
    {
        FUN2(VAR2->VAR14, VAR15, "", VAR11);
        return VAR16;
    }
    else if (VAR11 > VAR2->VAR17)
    {
        FUN2(VAR2->VAR14, VAR15, "", VAR11, VAR2->VAR17);
        return VAR16;
    }
    if (!VAR4->VAR10[0])
    {
        FUN2(VAR2->VAR14, VAR15, "");
        return FUN3(VAR18);
    }
    VAR2->VAR19.VAR20[!VAR2->VAR13][0](VAR2->VAR9, VAR4->VAR10[0] + VAR11, VAR5->VAR12[0], 8);
    return 0;
}