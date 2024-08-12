static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR3 *VAR8 = VAR4;
    unsigned int VAR9 = VAR2->VAR10->VAR9;
    int VAR11 = 0;
    while (VAR11 < VAR9 && !(VAR8->VAR12 = FUN2(VAR7)))
    {
        VAR8->VAR13 = FUN3(VAR7, FUN4(VAR9));
        if (VAR8->VAR13 >= VAR9)
        {
            FUN5(VAR2->VAR10, VAR14, "");
            return -1;
        }
        if (VAR8->VAR13 != VAR5)
        {
            VAR8->VAR15 = FUN2(VAR7);
            VAR8->VAR16[0] = FUN6(VAR7, 1, 16);
            VAR8->VAR16[1] = FUN6(VAR7, 2, 14);
            VAR8->VAR16[2] = FUN6(VAR7, 1, 16);
            if (VAR8->VAR15)
            {
                VAR8->VAR16[3] = FUN6(VAR7, 1, 16);
                VAR8->VAR16[4] = FUN6(VAR7, 1, 16);
                VAR8->VAR16[5] = FUN6(VAR7, 1, 16);
                VAR8->VAR17 = FUN2(VAR7);
                VAR8->VAR18 = FUN7(VAR7, VAR2->VAR19 - 3) + 3;
            }
        }
        VAR8++;
        VAR11++;
    }
    if (VAR11 == VAR9)
    {
        FUN5(VAR2->VAR10, VAR14, "");
        return -1;
    }
    FUN8(VAR7);
    return 0;
}