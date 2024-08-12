static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11;
    int VAR12;
    int VAR13;
    uint64_t VAR14 = 0;
    uint64_t VAR15 = 0;
    QEMUIOVector VAR16;
    VAR17 *VAR18 = NULL;
    FUN2(&VAR16, VAR6->VAR19);
    FUN3(&VAR8->VAR20);
    while (VAR4 != 0)
    {
        VAR13 = VAR4;
        if (VAR8->VAR21)
        {
            VAR13 = FUN4(VAR13, VAR22 * VAR8->VAR23);
        }
        VAR12 = FUN5(VAR2, VAR3 << 9, &VAR13, &VAR14);
        if (VAR12 < 0)
        {
            goto VAR24;
        }
        VAR10 = VAR3 & (VAR8->VAR23 - 1);
        FUN6(&VAR16);
        FUN7(&VAR16, VAR6, VAR15, VAR13 * 512);
        if (!VAR14)
        {
            if (VAR2->VAR25)
            {
                VAR11 = FUN8(VAR2->VAR25, &VAR16, VAR3, VAR13);
                if (VAR11 > 0)
                {
                    FUN9(VAR2->VAR26, VAR27);
                    FUN10(&VAR8->VAR20);
                    VAR12 = FUN11(VAR2->VAR25, VAR3, VAR11, &VAR16);
                    FUN3(&VAR8->VAR20);
                    if (VAR12 < 0)
                    {
                        goto VAR24;
                    }
                }
            }
            else
            {
                FUN12(&VAR16, 0, 512 * VAR13);
            }
        }
        else if (VAR14 & VAR28)
        {
            VAR12 = FUN13(VAR2, VAR14);
            if (VAR12 < 0)
            {
                goto VAR24;
            }
            FUN14(&VAR16, VAR8->VAR29 + VAR10 * 512, 512 * VAR13);
        }
        else
        {
            if ((VAR14 & 511) != 0)
            {
                VAR12 = -VAR30;
                goto VAR24;
            }
            if (VAR8->VAR21)
            {
                if (!VAR18)
                {
                    VAR18 = FUN15(VAR22 * VAR8->VAR31);
                }
                assert(VAR13 <= VAR22 * VAR8->VAR23);
                FUN6(&VAR16);
                FUN16(&VAR16, VAR18, 512 * VAR13);
            }
            FUN9(VAR2->VAR26, VAR32);
            FUN10(&VAR8->VAR20);
            VAR12 = FUN11(VAR2->VAR26, (VAR14 >> 9) + VAR10, VAR13, &VAR16);
            FUN3(&VAR8->VAR20);
            if (VAR12 < 0)
            {
                goto VAR24;
            }
            if (VAR8->VAR21)
            {
                FUN17(VAR8, VAR3, VAR18, VAR18, VAR13, 0, &VAR8->VAR33);
                FUN6(&VAR16);
                FUN7(&VAR16, VAR6, VAR15, VAR13 * 512);
                FUN14(&VAR16, VAR18, 512 * VAR13);
            }
        }
        VAR4 -= VAR13;
        VAR3 += VAR13;
        VAR15 += VAR13 * 512;
    }
    VAR12 = 0;
VAR24:
    FUN10(&VAR8->VAR20);
    FUN18(&VAR16);
    return VAR12;