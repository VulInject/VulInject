static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0]->VAR11;
    int64_t VAR12 = FUN2(VAR4);
    int64_t VAR13 = (VAR12 - 64 - (32 * VAR2->VAR10[0]->VAR14)) / VAR9->VAR15;
    FUN3(VAR2, VAR16, "" VAR17 "", VAR13);
    if (VAR2->VAR4->VAR18)
    {
        FUN4(VAR4, VAR6->VAR13, VAR19);
        FUN5(VAR4, VAR13);
        if (VAR6->VAR20 > 0)
        {
            if (VAR6->VAR20 >= VAR13)
            {
                FUN3(VAR2, VAR21, "");
                VAR6->VAR20 = -1;
                FUN6(VAR4, 4);
            }
            else
                FUN5(VAR4, VAR6->VAR20);
        }
        else
            FUN6(VAR4, 4);
        if (VAR6->VAR22 && VAR6->VAR20 >= 0)
        {
            if (VAR6->VAR22 > VAR13)
            {
                FUN3(VAR2, VAR21, "");
                VAR6->VAR22 = VAR13;
            }
            FUN5(VAR4, VAR6->VAR22);
        }
        else
        {
            FUN5(VAR4, VAR13);
        }
        FUN5(VAR4, VAR6->VAR23);
        FUN4(VAR4, VAR6->VAR24, VAR19);
        FUN5(VAR4, VAR12 - 64);
        if (VAR6->VAR20 >= 0)
        {
            FUN6(VAR4, 6);
            FUN7(VAR4, 0xFFFF);
        }
        FUN4(VAR4, VAR12, VAR19);
        FUN8(VAR4);
    }
    return 0;
}