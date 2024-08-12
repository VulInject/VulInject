static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const int VAR10 = (VAR2->VAR11 + VAR8->VAR12[0] - 1) / VAR8->VAR12[0];
    const int VAR13 = (VAR2->VAR14 + VAR8->VAR15[0] - 1) / VAR8->VAR15[0];
    int VAR16, VAR17;
    FF_DISABLE_DEPRECATION_WARNINGS if (VAR2->VAR18) VAR8->VAR19 = VAR2->VAR18 + 1;
    FF_ENABLE_DEPRECATION_WARNINGS for (VAR17 = 0; VAR17 < VAR13; VAR17++)
    {
        if (VAR4->VAR20 - VAR4->VAR21 - (FUN2(VAR4) >> 3) < VAR10 * 4 * 3 * VAR8->VAR12[0] * VAR8->VAR15[0])
        {
            FUN3(VAR2, VAR22, "");
            return -1;
        }
        for (VAR16 = 0; VAR16 < VAR10; VAR16++)
            FUN4(VAR8, VAR4, VAR6, VAR8->VAR19, VAR16, VAR17);
    }
    return 0;
}