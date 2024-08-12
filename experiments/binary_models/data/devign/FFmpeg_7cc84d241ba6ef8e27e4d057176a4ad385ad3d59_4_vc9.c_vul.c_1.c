static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR2->VAR4 > VAR5)
    {
        VAR2->VAR6.VAR7 = FUN2(&VAR2->VAR6.VAR8, 1);
        if (VAR2->VAR9)
            VAR2->VAR10 = FUN2(&VAR2->VAR6.VAR8, 1);
        if (VAR2->VAR11 && VAR2->VAR12 < 9)
        {
            VAR2->VAR13 = FUN2(&VAR2->VAR6.VAR8, 1);
            if (VAR2->VAR13)
            {
                VAR2->VAR13 = 2 + FUN2(&VAR2->VAR6.VAR8, 1);
                if (VAR2->VAR13 == 3)
                {
                    VAR3 = FUN3(&VAR2->VAR14, VAR2);
                    if (VAR3 < 0)
                        return -1;
                    FUN4(VAR2->VAR6.VAR15, VAR16, ""
                                                     "",
                           VAR3 >> 1, VAR3 & 1);
                }
            }
        }
    }
    return 0;
}