static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = 0;
    VAR10 *VAR11 = &VAR2->VAR11;
    for (;;)
    {
        int VAR12 = 0;
        if (VAR6->VAR13 < VAR14 || VAR6->VAR15 < 1)
        {
            int VAR16 = VAR6->VAR13 + VAR6->VAR17;
            if ((FUN2(&VAR2->VAR11) + VAR16 - VAR2->VAR18) % VAR6->VAR19)
                VAR16 += VAR6->VAR19 - ((FUN2(&VAR2->VAR11) + VAR16 - VAR2->VAR18) % VAR6->VAR19);
            FUN3(VAR11, VAR16);
            VAR6->VAR20 = FUN2(&VAR2->VAR11);
            VAR16 = FUN4(VAR2);
            if (VAR16 < 0 || FUN5(VAR11))
                return VAR21;
            VAR6->VAR22 = 0;
            continue;
        }
        if (VAR6->VAR22 == 0)
        {
            int VAR23 = FUN6(VAR11);
            VAR6->VAR15--;
            VAR12++;
            VAR6->VAR24 = (VAR23 & 0x80) >> 7;
            VAR6->VAR25 = VAR6->VAR26[VAR23 & 0x7f];
            FUN7(VAR6->VAR27 >> 4, VAR6->VAR28, 0);
            FUN7(VAR6->VAR27 >> 2, VAR6->VAR29, 0);
            FUN7(VAR6->VAR27, VAR6->VAR30, 0);
            if (VAR6->VAR30 > 1)
            {
                assert(VAR6->VAR30 >= 8);
                VAR6->VAR31 = FUN8(VAR11);
                VAR6->VAR32 = FUN8(VAR11);
                if (VAR6->VAR30 > 8)
                    FUN3(VAR11, VAR6->VAR30 - 8);
                VAR12 += VAR6->VAR30;
            }
            else if (VAR6->VAR30 == 1)
            {
                VAR6->VAR22 = VAR6->VAR29;
                VAR6->VAR29 = 0;
                VAR6->VAR32 = VAR6->VAR33;
                VAR6->VAR34 = FUN6(VAR11);
                VAR12++;
            }
            else
            {
                assert(VAR6->VAR30 == 0);
            }
            if (VAR6->VAR35 & 0x01)
            {
                FUN7(VAR6->VAR36 >> 6, VAR6->VAR37, 0);
            }
            else
            {
                VAR6->VAR37 = VAR6->VAR13 - VAR12;
            }
            if (VAR6->VAR30 == 1)
            {
                VAR6->VAR38 = VAR6->VAR37;
                if (VAR6->VAR38 > VAR6->VAR13)
                {
                    VAR6->VAR15 = 0;
                    continue;
                }
            }
            VAR6->VAR13 -= VAR12;
            if (VAR6->VAR25 < 0 || VAR2->VAR39[VAR6->VAR25]->VAR40 >= VAR41 || (!VAR6->VAR24 && VAR2->VAR39[VAR6->VAR25]->VAR40 >= VAR42))
            {
                VAR6->VAR22 = 0;
                FUN3(VAR11, VAR6->VAR37);
                VAR6->VAR13 -= VAR6->VAR37;
                if (VAR6->VAR25 < 0)
                    FUN9(VAR2, VAR43, "", VAR6->VAR37, VAR23 & 0x7f);
                continue;
            }
            VAR6->VAR9 = VAR2->VAR39[VAR6->VAR25]->VAR7;
        }
        VAR9 = VAR6->VAR9;
        if ((VAR6->VAR29 != VAR9->VAR44 || (VAR6->VAR29 && VAR6->VAR28 != VAR9->VAR45)))
        {
            FUN9(VAR2, VAR46, "", VAR9->VAR4.VAR47, VAR6->VAR31, VAR6->VAR29, VAR9->VAR44, VAR6->VAR28, VAR9->VAR45, VAR6->VAR37);
            if (VAR9->VAR4.VAR47)
                FUN10(&VAR9->VAR4);
            VAR9->VAR44 = 0;
            if (VAR6->VAR29 != 0)
            {
                FUN3(VAR11, VAR6->VAR37);
                FUN9(VAR2, VAR46, "", VAR6->VAR37);
                VAR6->VAR13 -= VAR6->VAR37;
                continue;
            }
        }
        if (VAR6->VAR30 == 1)
        {
            VAR6->VAR32 = VAR6->VAR22;
            VAR6->VAR22 += VAR6->VAR34;
            VAR6->VAR31 = VAR6->VAR37 = FUN6(VAR11);
            VAR6->VAR13--;
            VAR6->VAR38--;
            if (VAR6->VAR38 < VAR6->VAR31)
            {
                VAR6->VAR22 = 0;
                FUN3(VAR11, VAR6->VAR38);
                VAR6->VAR13 -= VAR6->VAR38;
                continue;
            }
            VAR6->VAR38 -= VAR6->VAR31;
        }
        if (VAR9->VAR44 == 0)
        {
            FUN11(&VAR9->VAR4, VAR6->VAR31);
            VAR9->VAR45 = VAR6->VAR28;
            VAR9->VAR4.VAR48 = VAR6->VAR32;
            VAR9->VAR4.VAR25 = VAR6->VAR25;
            VAR9->VAR4.VAR49 = VAR9->VAR20 = VAR6->VAR20;
            if (VAR2->VAR39[VAR6->VAR25]->VAR50->VAR51 == VAR52)
                VAR6->VAR24 = 1;
            if (VAR6->VAR24)
                VAR9->VAR4.VAR53 |= VAR54;
        }
        VAR6->VAR13 -= VAR6->VAR37;
        if (VAR6->VAR13 < 0)
            continue;
        FUN12(VAR11, VAR9->VAR4.VAR55 + VAR6->VAR29, VAR6->VAR37);
        VAR9->VAR44 += VAR6->VAR37;
        if (VAR9->VAR44 == VAR9->VAR4.VAR47)
        {
            if (VAR9->VAR56 > 1)
            {
                char *VAR57 = FUN13(VAR9->VAR4.VAR47);
                if (VAR57)
                {
                    int VAR58 = 0;
                    while (VAR58 < VAR9->VAR4.VAR47)
                    {
                        int VAR59 = VAR58 / VAR9->VAR60;
                        int VAR61 = VAR59 / VAR9->VAR56;
                        int VAR62 = VAR59 % VAR9->VAR56;
                        int VAR63 = VAR61 + VAR62 * VAR9->VAR64 / VAR9->VAR60;
                        memcpy(VAR57 + VAR58, VAR9->VAR4.VAR55 + VAR63 * VAR9->VAR60, VAR9->VAR60);
                        VAR58 += VAR9->VAR60;
                    }
                    FUN14(VAR9->VAR4.VAR55);
                    VAR9->VAR4.VAR55 = VAR57;
                }
            }
            VAR9->VAR44 = 0;
            memcpy(VAR4, &VAR9->VAR4, sizeof(VAR3));
            VAR9->VAR4.VAR47 = 0;
            VAR9->VAR4.VAR55 = 0;
            break;
        }
    }
    return 0;