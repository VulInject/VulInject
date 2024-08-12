void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7, VAR5 *VAR8, unsigned int VAR9, unsigned int VAR10)
{
    VAR11 *const VAR12 = &VAR2->VAR12;
    int VAR13;
    int VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
    int VAR24 = !(VAR25 && (VAR12->VAR26 & VAR27));
    int VAR28 = VAR29;
    VAR13 = VAR2->VAR13;
    if (!VAR2->VAR30.VAR31 || VAR2->VAR32.VAR33)
    {
        FUN2(VAR2, VAR3, VAR4, VAR6, VAR7, VAR8, VAR9, VAR10);
        return;
    }
    assert(!VAR34);
    VAR15 = VAR2->VAR15[VAR35];
    VAR16 = VAR2->VAR16;
    VAR14 = VAR12->VAR36.VAR14[VAR13];
    VAR17 = VAR12->VAR36.VAR37[VAR13];
    VAR18 = VAR12->VAR36.VAR37[VAR13 - 1];
    VAR19 = VAR12->VAR36.VAR37[VAR2->VAR38];
    VAR20 = FUN3(VAR2, 0, VAR17);
    VAR21 = FUN3(VAR2, 0, VAR18);
    VAR22 = FUN3(VAR2, 0, VAR19);
    VAR18 = (VAR17 + VAR18 + 1) >> 1;
    VAR19 = (VAR17 + VAR19 + 1) >> 1;
    VAR21 = (VAR20 + VAR21 + 1) >> 1;
    VAR22 = (VAR20 + VAR22 + 1) >> 1;
    VAR23 = 15 + 52 - VAR2->VAR39;
    if (VAR17 <= VAR23 && VAR18 <= VAR23 && VAR19 <= VAR23 && VAR20 <= VAR23 && VAR21 <= VAR23 && VAR22 <= VAR23)
        return;
    if (FUN4(VAR14))
    {
        static const int16_t VAR40[4] = {4, 4, 4, 4};
        static const int16_t VAR41[4] = {3, 3, 3, 3};
        const VAR42 *VAR43 = VAR44 ? VAR41 : VAR40;
        if (VAR15)
            FUN5(&VAR6[4 * 0], VAR9, VAR40, VAR18, VAR2);
        if (FUN6(VAR14))
        {
            FUN5(&VAR6[4 * 2], VAR9, VAR41, VAR17, VAR2);
            if (VAR16)
            {
                FUN7(&VAR6[4 * 0 * VAR9], VAR9, VAR43, VAR19, VAR2);
            }
            FUN7(&VAR6[4 * 2 * VAR9], VAR9, VAR41, VAR17, VAR2);
        }
        else
        {
            FUN5(&VAR6[4 * 1], VAR9, VAR41, VAR17, VAR2);
            FUN5(&VAR6[4 * 2], VAR9, VAR41, VAR17, VAR2);
            FUN5(&VAR6[4 * 3], VAR9, VAR41, VAR17, VAR2);
            if (VAR16)
            {
                FUN7(&VAR6[4 * 0 * VAR9], VAR9, VAR43, VAR19, VAR2);
            }
            FUN7(&VAR6[4 * 1 * VAR9], VAR9, VAR41, VAR17, VAR2);
            FUN7(&VAR6[4 * 2 * VAR9], VAR9, VAR41, VAR17, VAR2);
            FUN7(&VAR6[4 * 3 * VAR9], VAR9, VAR41, VAR17, VAR2);
        }
        if (VAR24)
        {
            if (VAR28)
            {
                if (VAR15)
                {
                    FUN5(&VAR7[4 * 0], VAR9, VAR40, VAR21, VAR2);
                    FUN5(&VAR8[4 * 0], VAR9, VAR40, VAR21, VAR2);
                }
                if (FUN6(VAR14))
                {
                    FUN5(&VAR7[4 * 2], VAR9, VAR41, VAR20, VAR2);
                    FUN5(&VAR8[4 * 2], VAR9, VAR41, VAR20, VAR2);
                    if (VAR16)
                    {
                        FUN7(&VAR7[4 * 0 * VAR9], VAR9, VAR43, VAR22, VAR2);
                        FUN7(&VAR8[4 * 0 * VAR9], VAR9, VAR43, VAR22, VAR2);
                    }
                    FUN7(&VAR7[4 * 2 * VAR9], VAR9, VAR41, VAR20, VAR2);
                    FUN7(&VAR8[4 * 2 * VAR9], VAR9, VAR41, VAR20, VAR2);
                }
                else
                {
                    FUN5(&VAR7[4 * 1], VAR9, VAR41, VAR20, VAR2);
                    FUN5(&VAR8[4 * 1], VAR9, VAR41, VAR20, VAR2);
                    FUN5(&VAR7[4 * 2], VAR9, VAR41, VAR20, VAR2);
                    FUN5(&VAR8[4 * 2], VAR9, VAR41, VAR20, VAR2);
                    FUN5(&VAR7[4 * 3], VAR9, VAR41, VAR20, VAR2);
                    FUN5(&VAR8[4 * 3], VAR9, VAR41, VAR20, VAR2);
                    if (VAR16)
                    {
                        FUN7(&VAR7[4 * 0 * VAR9], VAR9, VAR43, VAR22, VAR2);
                        FUN7(&VAR8[4 * 0 * VAR9], VAR9, VAR43, VAR22, VAR2);
                    }
                    FUN7(&VAR7[4 * 1 * VAR9], VAR9, VAR41, VAR20, VAR2);
                    FUN7(&VAR8[4 * 1 * VAR9], VAR9, VAR41, VAR20, VAR2);
                    FUN7(&VAR7[4 * 2 * VAR9], VAR9, VAR41, VAR20, VAR2);
                    FUN7(&VAR8[4 * 2 * VAR9], VAR9, VAR41, VAR20, VAR2);
                    FUN7(&VAR7[4 * 3 * VAR9], VAR9, VAR41, VAR20, VAR2);
                    FUN7(&VAR8[4 * 3 * VAR9], VAR9, VAR41, VAR20, VAR2);
                }
            }
            else
            {
                if (VAR15)
                {
                    FUN8(&VAR7[2 * 0], VAR10, VAR40, VAR21, VAR2);
                    FUN8(&VAR8[2 * 0], VAR10, VAR40, VAR21, VAR2);
                }
                FUN8(&VAR7[2 * 2], VAR10, VAR41, VAR20, VAR2);
                FUN8(&VAR8[2 * 2], VAR10, VAR41, VAR20, VAR2);
                if (VAR16)
                {
                    FUN9(&VAR7[2 * 0 * VAR10], VAR10, VAR43, VAR22, VAR2);
                    FUN9(&VAR8[2 * 0 * VAR10], VAR10, VAR43, VAR22, VAR2);
                }
                FUN9(&VAR7[2 * 2 * VAR10], VAR10, VAR41, VAR20, VAR2);
                FUN9(&VAR8[2 * 2 * VAR10], VAR10, VAR41, VAR20, VAR2);
            }
        }
        return;
    }
    else
    {
        FUN10(VAR42, VAR45, [2], [4][4]);
        int VAR46;
        if (FUN6(VAR14) && (VAR2->VAR47 & 7) == 7)
        {
            VAR46 = 4;
            FUN11(VAR45[0][0], 0x0002000200020002ULL);
            FUN11(VAR45[0][2], 0x0002000200020002ULL);
            FUN11(VAR45[1][0], 0x0002000200020002ULL);
            FUN11(VAR45[1][2], 0x0002000200020002ULL);
        }
        else
        {
            int VAR48 = (3 * (((5 * VAR14) >> 5) & 1)) | (VAR14 >> 4);
            int VAR49 = 3 * ((VAR48 >> 1) & ((5 * VAR15) >> 5) & 1);
            int VAR50 = 1 + (VAR14 >> 24);
            VAR46 = 4 - 3 * ((VAR14 >> 3) & !(VAR2->VAR47 & 15));
            VAR2->VAR30.FUN12(VAR45, VAR2->VAR51, VAR2->VAR52, VAR2->VAR53, VAR2->VAR54 == 2, VAR46, VAR50, VAR49, VAR48, VAR44);
        }
        if (FUN4(VAR15))
            FUN11(VAR45[0][0], 0x0004000400040004ULL);
        if (FUN4(VAR16))
            FUN11(VAR45[1][0], VAR44 ? 0x0003000300030003ULL : 0x0004000400040004ULL);
        if (FUN13(VAR45[VAR55][VAR56]))
        {
            VAR57##FUN14(&VAR6[4 * VAR56 * (VAR55 ? VAR9 : 1)], VAR9, VAR45[VAR55][VAR56], VAR56 ? VAR17 : VAR17##VAR55, VAR2);
            if (VAR24)
            {
                if (VAR28)
                {
                    VAR57##FUN14(&VAR7[4 * VAR56 * (VAR55 ? VAR9 : 1)], VAR9, VAR45[VAR55][VAR56], VAR56 ? VAR20 : VAR20##VAR55, VAR2);
                    VAR57##FUN14(&VAR8[4 * VAR56 * (VAR55 ? VAR9 : 1)], VAR9, VAR45[VAR55][VAR56], VAR56 ? VAR20 : VAR20##VAR55, VAR2);
                }
                else if (!(VAR56 & 1))
                {
                    VAR58##FUN14(&VAR7[2 * VAR56 * (VAR55 ? VAR10 : 1)], VAR10, VAR45[VAR55][VAR56], VAR56 ? VAR20 : VAR20##VAR55, VAR2);
                    VAR58##FUN14(&VAR8[2 * VAR56 * (VAR55 ? VAR10 : 1)], VAR10, VAR45[VAR55][VAR56], VAR56 ? VAR20 : VAR20##VAR55, VAR2);
                }
            }
        }
        if (VAR15)
            FUN15(VAR59, 0, 0);
        if (VAR46 == 1)
        {
            if (VAR16)
                FUN15(VAR2, 1, 0);
        }
        else if (FUN6(VAR14))
        {
            FUN15(VAR59, 0, 2);
            if (VAR16)
                FUN15(VAR2, 1, 0);
            FUN15(VAR2, 1, 2);
        }
        else
        {
            FUN15(VAR59, 0, 1);
            FUN15(VAR59, 0, 2);
            FUN15(VAR59, 0, 3);
            if (VAR16)
                FUN15(VAR2, 1, 0);
            FUN15(VAR2, 1, 1);
            FUN15(VAR2, 1, 2);
            FUN15(VAR2, 1, 3);
        }
    }
}