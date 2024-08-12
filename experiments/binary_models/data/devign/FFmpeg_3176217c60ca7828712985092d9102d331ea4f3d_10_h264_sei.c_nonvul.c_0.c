static int FUN1(VAR1 *VAR2)
{
    const VAR3 *VAR4 = VAR2->VAR5.VAR4;
    if (!VAR4)
        return VAR6;
    if (VAR4->VAR7 || VAR4->VAR8)
    {
        VAR2->VAR9 = FUN2(&VAR2->VAR10, VAR4->VAR11);
        VAR2->VAR12 = FUN2(&VAR2->VAR10, VAR4->VAR13);
    }
    if (VAR4->VAR14)
    {
        unsigned int VAR15, VAR16;
        VAR2->VAR17 = FUN2(&VAR2->VAR10, 4);
        VAR2->VAR18 = 0;
        if (VAR2->VAR17 > VAR19)
            return VAR6;
        VAR16 = VAR20[VAR2->VAR17];
        for (VAR15 = 0; VAR15 < VAR16; VAR15++)
        {
            if (FUN2(&VAR2->VAR10, 1))
            {
                unsigned int VAR21;
                VAR2->VAR18 |= 1 << FUN2(&VAR2->VAR10, 2);
                FUN3(&VAR2->VAR10, 1);
                FUN3(&VAR2->VAR10, 5);
                VAR21 = FUN2(&VAR2->VAR10, 1);
                FUN3(&VAR2->VAR10, 1);
                FUN3(&VAR2->VAR10, 1);
                FUN3(&VAR2->VAR10, 8);
                if (VAR21)
                {
                    FUN3(&VAR2->VAR10, 6);
                    FUN3(&VAR2->VAR10, 6);
                    FUN3(&VAR2->VAR10, 5);
                }
                else
                {
                    if (FUN2(&VAR2->VAR10, 1))
                    {
                        FUN3(&VAR2->VAR10, 6);
                        if (FUN2(&VAR2->VAR10, 1))
                        {
                            FUN3(&VAR2->VAR10, 6);
                            if (FUN2(&VAR2->VAR10, 1))
                                FUN3(&VAR2->VAR10, 5);
                        }
                    }
                }
                if (VAR4->VAR22 > 0)
                    FUN3(&VAR2->VAR10, VAR4->VAR22);
            }
        }
        if (VAR2->VAR23->VAR24 & VAR25)
            FUN4(VAR2->VAR23, VAR26, "", VAR2->VAR18, VAR2->VAR17);
    }
    return 0;
}