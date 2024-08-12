static void FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4)
{
    int VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = VAR2->VAR10 & VAR11;
    int VAR12 = (VAR7->VAR13 || VAR9) && VAR4 > 0;
    if (!VAR3 && !(VAR3 = FUN2(VAR2->VAR14)))
    {
        FUN3(VAR2, VAR15, "");
        VAR12 = 0;
    }
    for (VAR5 = 0; VAR5 < VAR16; VAR5++)
    {
        uint8_t VAR17 = FUN4(VAR2->VAR14);
        if (VAR12)
            FUN5(VAR2->VAR18[0], FUN6(VAR17, VAR3, 256), FUN6(VAR5, VAR4, VAR16), 0, 0, VAR19);
    }
    if (VAR12)
        VAR7->VAR20 = 1;
}