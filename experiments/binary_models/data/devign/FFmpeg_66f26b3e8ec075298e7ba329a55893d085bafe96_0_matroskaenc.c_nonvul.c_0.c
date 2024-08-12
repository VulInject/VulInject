static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = (VAR6->VAR8 && !(VAR6->VAR8 & ~0x3ffffULL) && !FUN2(VAR6->VAR8));
    int VAR9 = FUN3(VAR4, VAR6->VAR10, VAR6->VAR11, !VAR7);
    if (VAR9 < 0)
        return VAR9;
    if (VAR7)
    {
        const char *VAR12 = (VAR2->VAR13 & VAR14) ? "" : VAR15;
        VAR16 *VAR17 = NULL;
        uint8_t VAR18[32], *VAR19, *VAR20;
        int64_t VAR21;
        snprintf(VAR18, sizeof(VAR18), "" VAR22, VAR6->VAR8);
        FUN4(&VAR17, "", VAR18, 0);
        VAR21 = FUN5(VAR17, VAR12);
        if (VAR21 >= ((1 << 24) - 4))
            return FUN6(VAR23);
        VAR19 = FUN7(VAR21 + 4);
        if (!VAR19)
        {
            FUN8(&VAR17);
            return FUN6(VAR24);
        }
        VAR19[0] = 0x84;
        FUN9(VAR19 + 1, VAR21);
        VAR20 = VAR19 + 4;
        FUN10(&VAR20, &VAR17, VAR12);
        FUN11(VAR4, VAR19, VAR21 + 4);
        FUN12(&VAR19);
        FUN8(&VAR17);
    }
    return 0;
}