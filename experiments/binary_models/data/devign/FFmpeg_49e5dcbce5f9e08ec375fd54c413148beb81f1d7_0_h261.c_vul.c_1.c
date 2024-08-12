static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5;
    FUN2(VAR4, VAR4->VAR6);
    VAR5 = FUN3(&VAR4->VAR7, 15);
    if (FUN4(&VAR4->VAR7) + 15 > VAR4->VAR7.VAR8)
    {
        VAR5 >>= FUN4(&VAR4->VAR7) + 15 - VAR4->VAR7.VAR8;
    }
    if (VAR5 == 0)
    {
        FUN5(VAR2, 0, 33);
        return 0;
    }
    while (VAR2->VAR9 <= VAR10)
    {
        int VAR11;
        VAR11 = FUN6(VAR2, VAR4->VAR12);
        if (VAR11 < 0)
        {
            const int VAR13 = VAR4->VAR14 + VAR4->VAR15 * VAR4->VAR16;
            if (VAR11 == VAR17)
            {
                FUN7(VAR4, VAR4->VAR12);
                if (VAR2->VAR18)
                {
                    FUN8(VAR2);
                }
                VAR2->VAR18 = 0;
                FUN5(VAR2, VAR2->VAR9 - VAR2->VAR19, VAR2->VAR9 - 1);
                FUN5(VAR2, VAR2->VAR9, 33);
                return 0;
            }
            else if (VAR11 == VAR20)
            {
                FUN9(VAR4->VAR21, VAR22, "", VAR13);
                return -1;
            }
            FUN9(VAR4->VAR21, VAR22, "", VAR13);
            return -1;
        }
        FUN7(VAR4, VAR4->VAR12);
        if (VAR2->VAR18)
        {
            FUN8(VAR2);
        }
        VAR2->VAR18 = 0;
        FUN5(VAR2, VAR2->VAR9 - VAR2->VAR19, VAR2->VAR9 - 1);
    }
    return -1;
}