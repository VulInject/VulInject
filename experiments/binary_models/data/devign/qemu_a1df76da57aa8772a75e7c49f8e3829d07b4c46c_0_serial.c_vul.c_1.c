static void FUN1(VAR1 *VAR2)
{
    do
    {
        assert(!(VAR2->VAR3 & VAR4));
        if (VAR2->VAR5 == 0)
        {
            assert(!(VAR2->VAR3 & VAR6));
            if (VAR2->VAR7 & VAR8)
            {
                assert(!FUN2(&VAR2->VAR9));
                VAR2->VAR10 = FUN3(&VAR2->VAR9);
                if (!VAR2->VAR9.VAR11)
                {
                    VAR2->VAR3 |= VAR6;
                }
            }
            else
            {
                VAR2->VAR10 = VAR2->VAR12;
                VAR2->VAR3 |= VAR6;
            }
            if ((VAR2->VAR3 & VAR6) && !VAR2->VAR13)
            {
                VAR2->VAR13 = 1;
                FUN4(VAR2);
            }
        }
        if (VAR2->VAR14 & VAR15)
        {
            FUN5(VAR2, &VAR2->VAR10, 1);
        }
        else if (FUN6(VAR2->VAR16, &VAR2->VAR10, 1) != 1)
        {
            if (VAR2->VAR5 < VAR17 && FUN7(VAR2->VAR16, VAR18 | VAR19, VAR20, VAR2) > 0)
            {
                VAR2->VAR5++;
                return;
            }
        }
        VAR2->VAR5 = 0;
    } while (!(VAR2->VAR3 & VAR6));
    VAR2->VAR21 = FUN8(VAR22);
    VAR2->VAR3 |= VAR4;
}