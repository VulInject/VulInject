static inline void FUN1(VAR1 *VAR2, int VAR3[2], int VAR4[2], int VAR5, int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR8;
    int VAR9, VAR10, VAR11 = 0;
    VAR12 *VAR13, *VAR14, *VAR15;
    int VAR16, VAR17;
    int VAR18;
    int VAR19, VAR20;
    const VAR21 *VAR22 = VAR2->VAR23[0];
    VAR19 = VAR2->VAR24;
    VAR20 = VAR2->VAR25;
    VAR3[0] <<= 1 - VAR8->VAR26;
    VAR4[0] <<= 1 - VAR8->VAR26;
    VAR3[1] <<= 1 - VAR8->VAR26;
    VAR4[1] <<= 1 - VAR8->VAR26;
    VAR10 = VAR8->VAR27;
    VAR9 = VAR8->VAR28[0];
    if (VAR8->VAR29)
    {
        VAR8->VAR30.VAR31[0][VAR9 + VAR2->VAR32][0] = VAR8->VAR30.VAR31[0][VAR9 + VAR2->VAR32][1] = VAR8->VAR30.VAR31[1][VAR9 + VAR2->VAR32][0] = VAR8->VAR30.VAR31[1][VAR9 + VAR2->VAR32][1] = 0;
        return;
    }
    if (!VAR2->VAR33)
    {
        VAR8->VAR34[0][0][0] = FUN2(VAR8->VAR35.VAR31[1][VAR9][0], VAR2->VAR36, 0, VAR8->VAR26);
        VAR8->VAR34[0][0][1] = FUN2(VAR8->VAR35.VAR31[1][VAR9][1], VAR2->VAR36, 0, VAR8->VAR26);
        VAR8->VAR34[1][0][0] = FUN2(VAR8->VAR35.VAR31[1][VAR9][0], VAR2->VAR36, 1, VAR8->VAR26);
        VAR8->VAR34[1][0][1] = FUN2(VAR8->VAR35.VAR31[1][VAR9][1], VAR2->VAR36, 1, VAR8->VAR26);
        VAR8->VAR34[0][0][0] = FUN3(VAR8->VAR34[0][0][0], -60 - (VAR8->VAR37 << 6), (VAR8->VAR38 << 6) - 4 - (VAR8->VAR37 << 6));
        VAR8->VAR34[0][0][1] = FUN3(VAR8->VAR34[0][0][1], -60 - (VAR8->VAR39 << 6), (VAR8->VAR40 << 6) - 4 - (VAR8->VAR39 << 6));
        VAR8->VAR34[1][0][0] = FUN3(VAR8->VAR34[1][0][0], -60 - (VAR8->VAR37 << 6), (VAR8->VAR38 << 6) - 4 - (VAR8->VAR37 << 6));
        VAR8->VAR34[1][0][1] = FUN3(VAR8->VAR34[1][0][1], -60 - (VAR8->VAR39 << 6), (VAR8->VAR40 << 6) - 4 - (VAR8->VAR39 << 6));
    }
    if (VAR5)
    {
        VAR8->VAR30.VAR31[0][VAR9 + VAR2->VAR32][0] = VAR8->VAR34[0][0][0];
        VAR8->VAR30.VAR31[0][VAR9 + VAR2->VAR32][1] = VAR8->VAR34[0][0][1];
        VAR8->VAR30.VAR31[1][VAR9 + VAR2->VAR32][0] = VAR8->VAR34[1][0][0];
        VAR8->VAR30.VAR31[1][VAR9 + VAR2->VAR32][1] = VAR8->VAR34[1][0][1];
        return;
    }
    if ((VAR6 == VAR41) || (VAR6 == VAR42))
    {
        VAR15 = VAR8->VAR30.VAR31[0][VAR9 - 2];
        VAR13 = VAR8->VAR30.VAR31[0][VAR9 - VAR10 * 2];
        VAR11 = (VAR8->VAR37 == (VAR8->VAR38 - 1)) ? -2 : 2;
        VAR14 = VAR8->VAR30.VAR31[0][VAR9 - VAR10 * 2 + VAR11];
        if (!VAR8->VAR37)
            VAR15[0] = VAR15[1] = 0;
        if (!VAR8->VAR43)
        {
            if (VAR8->VAR38 == 1)
            {
                VAR16 = VAR13[0];
                VAR17 = VAR13[1];
            }
            else
            {
                VAR16 = FUN4(VAR13[0], VAR14[0], VAR15[0]);
                VAR17 = FUN4(VAR13[1], VAR14[1], VAR15[1]);
            }
        }
        else if (VAR8->VAR37)
        {
            VAR16 = VAR15[0];
            VAR17 = VAR15[1];
        }
        else
        {
            VAR16 = VAR17 = 0;
        }
        {
            int VAR44, VAR45, VAR46, VAR47;
            if (VAR2->VAR48 < VAR49)
            {
                VAR44 = (VAR8->VAR37 << 5);
                VAR45 = (VAR8->VAR39 << 5);
                VAR46 = (VAR8->VAR38 << 5) - 4;
                VAR47 = (VAR8->VAR40 << 5) - 4;
                if (VAR44 + VAR16 < -28)
                    VAR16 = -28 - VAR44;
                if (VAR45 + VAR17 < -28)
                    VAR17 = -28 - VAR45;
                if (VAR44 + VAR16 > VAR46)
                    VAR16 = VAR46 - VAR44;
                if (VAR45 + VAR17 > VAR47)
                    VAR17 = VAR47 - VAR45;
            }
            else
            {
                VAR44 = (VAR8->VAR37 << 6);
                VAR45 = (VAR8->VAR39 << 6);
                VAR46 = (VAR8->VAR38 << 6) - 4;
                VAR47 = (VAR8->VAR40 << 6) - 4;
                if (VAR44 + VAR16 < -60)
                    VAR16 = -60 - VAR44;
                if (VAR45 + VAR17 < -60)
                    VAR17 = -60 - VAR45;
                if (VAR44 + VAR16 > VAR46)
                    VAR16 = VAR46 - VAR44;
                if (VAR45 + VAR17 > VAR47)
                    VAR17 = VAR47 - VAR45;
            }
        }
        if (0 && !VAR8->VAR43 && VAR8->VAR37)
        {
            if (VAR22[VAR9 - VAR10])
                VAR18 = FUN5(VAR16) + FUN5(VAR17);
            else
                VAR18 = FUN5(VAR16 - VAR13[0]) + FUN5(VAR17 - VAR13[1]);
            if (VAR18 > 32)
            {
                if (FUN6(&VAR8->VAR50))
                {
                    VAR16 = VAR13[0];
                    VAR17 = VAR13[1];
                }
                else
                {
                    VAR16 = VAR15[0];
                    VAR17 = VAR15[1];
                }
            }
            else
            {
                if (VAR22[VAR9 - 2])
                    VAR18 = FUN5(VAR16) + FUN5(VAR17);
                else
                    VAR18 = FUN5(VAR16 - VAR15[0]) + FUN5(VAR17 - VAR15[1]);
                if (VAR18 > 32)
                {
                    if (FUN6(&VAR8->VAR50))
                    {
                        VAR16 = VAR13[0];
                        VAR17 = VAR13[1];
                    }
                    else
                    {
                        VAR16 = VAR15[0];
                        VAR17 = VAR15[1];
                    }
                }
            }
        }
        VAR8->VAR34[0][0][0] = ((VAR16 + VAR3[0] + VAR19) & ((VAR19 << 1) - 1)) - VAR19;
        VAR8->VAR34[0][0][1] = ((VAR17 + VAR4[0] + VAR20) & ((VAR20 << 1) - 1)) - VAR20;
    }
    if ((VAR6 == VAR51) || (VAR6 == VAR42))
    {
        VAR15 = VAR8->VAR30.VAR31[1][VAR9 - 2];
        VAR13 = VAR8->VAR30.VAR31[1][VAR9 - VAR10 * 2];
        VAR11 = (VAR8->VAR37 == (VAR8->VAR38 - 1)) ? -2 : 2;
        VAR14 = VAR8->VAR30.VAR31[1][VAR9 - VAR10 * 2 + VAR11];
        if (!VAR8->VAR37)
            VAR15[0] = VAR15[1] = 0;
        if (!VAR8->VAR43)
        {
            if (VAR8->VAR38 == 1)
            {
                VAR16 = VAR13[0];
                VAR17 = VAR13[1];
            }
            else
            {
                VAR16 = FUN4(VAR13[0], VAR14[0], VAR15[0]);
                VAR17 = FUN4(VAR13[1], VAR14[1], VAR15[1]);
            }
        }
        else if (VAR8->VAR37)
        {
            VAR16 = VAR15[0];
            VAR17 = VAR15[1];
        }
        else
        {
            VAR16 = VAR17 = 0;
        }
        {
            int VAR44, VAR45, VAR46, VAR47;
            if (VAR2->VAR48 < VAR49)
            {
                VAR44 = (VAR8->VAR37 << 5);
                VAR45 = (VAR8->VAR39 << 5);
                VAR46 = (VAR8->VAR38 << 5) - 4;
                VAR47 = (VAR8->VAR40 << 5) - 4;
                if (VAR44 + VAR16 < -28)
                    VAR16 = -28 - VAR44;
                if (VAR45 + VAR17 < -28)
                    VAR17 = -28 - VAR45;
                if (VAR44 + VAR16 > VAR46)
                    VAR16 = VAR46 - VAR44;
                if (VAR45 + VAR17 > VAR47)
                    VAR17 = VAR47 - VAR45;
            }
            else
            {
                VAR44 = (VAR8->VAR37 << 6);
                VAR45 = (VAR8->VAR39 << 6);
                VAR46 = (VAR8->VAR38 << 6) - 4;
                VAR47 = (VAR8->VAR40 << 6) - 4;
                if (VAR44 + VAR16 < -60)
                    VAR16 = -60 - VAR44;
                if (VAR45 + VAR17 < -60)
                    VAR17 = -60 - VAR45;
                if (VAR44 + VAR16 > VAR46)
                    VAR16 = VAR46 - VAR44;
                if (VAR45 + VAR17 > VAR47)
                    VAR17 = VAR47 - VAR45;
            }
        }
        if (0 && !VAR8->VAR43 && VAR8->VAR37)
        {
            if (VAR22[VAR9 - VAR10])
                VAR18 = FUN5(VAR16) + FUN5(VAR17);
            else
                VAR18 = FUN5(VAR16 - VAR13[0]) + FUN5(VAR17 - VAR13[1]);
            if (VAR18 > 32)
            {
                if (FUN6(&VAR8->VAR50))
                {
                    VAR16 = VAR13[0];
                    VAR17 = VAR13[1];
                }
                else
                {
                    VAR16 = VAR15[0];
                    VAR17 = VAR15[1];
                }
            }
            else
            {
                if (VAR22[VAR9 - 2])
                    VAR18 = FUN5(VAR16) + FUN5(VAR17);
                else
                    VAR18 = FUN5(VAR16 - VAR15[0]) + FUN5(VAR17 - VAR15[1]);
                if (VAR18 > 32)
                {
                    if (FUN6(&VAR8->VAR50))
                    {
                        VAR16 = VAR13[0];
                        VAR17 = VAR13[1];
                    }
                    else
                    {
                        VAR16 = VAR15[0];
                        VAR17 = VAR15[1];
                    }
                }
            }
        }
        VAR8->VAR34[1][0][0] = ((VAR16 + VAR3[1] + VAR19) & ((VAR19 << 1) - 1)) - VAR19;
        VAR8->VAR34[1][0][1] = ((VAR17 + VAR4[1] + VAR20) & ((VAR20 << 1) - 1)) - VAR20;
    }
    VAR8->VAR30.VAR31[0][VAR9][0] = VAR8->VAR34[0][0][0];
    VAR8->VAR30.VAR31[0][VAR9][1] = VAR8->VAR34[0][0][1];
    VAR8->VAR30.VAR31[1][VAR9][0] = VAR8->VAR34[1][0][0];
    VAR8->VAR30.VAR31[1][VAR9][1] = VAR8->VAR34[1][0][1];