static int FUN1(void *VAR1, VAR2 *VAR3)
{
    int VAR4 = 0, VAR5, VAR6;
    VAR7 *VAR8;
    char VAR9[32];
    int VAR10 = FUN2();
    uint32_t VAR11[] = {0, FUN3(VAR3->VAR12)};
    FUN4(VAR8)
    {
        VAR13 *VAR14 = FUN5(VAR8);
        VAR15 *VAR16 = FUN6(VAR8);
        int VAR17 = FUN7(VAR14);
        int VAR18 = FUN8(VAR19, FUN9(VAR14));
        if ((VAR17 % VAR10) != 0)
        {
            continue;
        }
        snprintf(VAR9, 32, "", VAR16->VAR20, VAR17);
        VAR6 = FUN10(VAR1, "");
        if (VAR6 < 0)
        {
            VAR6 = FUN11(VAR1, 0, "");
            if (VAR6 < 0)
            {
                return VAR6;
            }
        }
        VAR5 = FUN12(VAR1, VAR6, VAR9);
        if (VAR5 < 0)
        {
            VAR5 = FUN11(VAR1, VAR6, VAR9);
            if (VAR5 < 0)
            {
                return VAR5;
            }
        }
        VAR4 = FUN13(VAR1, VAR5, "", VAR11, sizeof(VAR11));
        if (VAR4 < 0)
        {
            return VAR4;
        }
        if (VAR21 > 1)
        {
            VAR4 = FUN14(VAR1, VAR5, VAR14);
            if (VAR4 < 0)
            {
                return VAR4;
            }
        }
        VAR4 = FUN15(VAR1, VAR5, VAR14, VAR18);
        if (VAR4 < 0)
        {
            return VAR4;
        }
        FUN16(VAR3, VAR14, VAR1, VAR5, VAR3->VAR22);
    }
    return VAR4;
}