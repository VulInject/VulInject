static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4 = FUN2(VAR3, 0, 5);
    int VAR5 = FUN2(VAR3, 5, 5);
    int VAR6 = FUN2(VAR3, 16, 5);
    int VAR7 = FUN2(VAR3, 22, 2);
    int VAR8 = FUN2(VAR3, 12, 2);
    bool VAR9 = FUN2(VAR3, 14, 1);
    bool VAR10 = FUN2(VAR3, 30, 1);
    int VAR11 = 8 << VAR7;
    int VAR12, VAR13;
    int VAR14 = VAR10 ? 128 : 64;
    int VAR15 = VAR14 / VAR11;
    TCGv_i64 VAR16, VAR17, VAR18;
    if (VAR8 == 0 || (VAR7 == 3 && !VAR10))
    {
        FUN3(VAR2);
        return;
    }
    VAR17 = FUN4(0);
    VAR18 = FUN4(0);
    VAR16 = FUN5();
    for (VAR12 = 0; VAR12 < VAR15; VAR12++)
    {
        switch (VAR8)
        {
        case 1:
        {
            int VAR19 = VAR15 / 2;
            if (VAR12 < VAR19)
            {
                FUN6(VAR2, VAR16, VAR5, 2 * VAR12 + VAR9, VAR7);
            }
            else
            {
                FUN6(VAR2, VAR16, VAR6, 2 * (VAR12 - VAR19) + VAR9, VAR7);
            }
            break;
        }
        case 2:
            if (VAR12 & 1)
            {
                FUN6(VAR2, VAR16, VAR6, (VAR12 & ~1) + VAR9, VAR7);
            }
            else
            {
                FUN6(VAR2, VAR16, VAR5, (VAR12 & ~1) + VAR9, VAR7);
            }
            break;
        case 3:
        {
            int VAR20 = VAR9 * VAR15 / 2;
            if (VAR12 & 1)
            {
                FUN6(VAR2, VAR16, VAR6, VAR20 + (VAR12 >> 1), VAR7);
            }
            else
            {
                FUN6(VAR2, VAR16, VAR5, VAR20 + (VAR12 >> 1), VAR7);
            }
            break;
        }
        default:
            FUN7();
        }
        VAR13 = VAR12 * VAR11;
        if (VAR13 < 64)
        {
            FUN8(VAR16, VAR16, VAR13);
            FUN9(VAR17, VAR17, VAR16);
        }
        else
        {
            FUN8(VAR16, VAR16, VAR13 - 64);
            FUN9(VAR18, VAR18, VAR16);
        }
    }
    FUN10(VAR16);
    FUN11(VAR2, VAR17, VAR4, 0, VAR21);
    FUN10(VAR17);
    FUN11(VAR2, VAR18, VAR4, 1, VAR21);
    FUN10(VAR18);
}