static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, void *VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11)
{
    int VAR12, VAR13 = 0;
    int VAR14, VAR15, VAR16, VAR17;
    int VAR18, VAR19, VAR20;
    while (VAR13 < VAR8)
    {
        int VAR21, VAR22;
        VAR14 = VAR13 ? FUN2(VAR6, VAR13 - VAR9) : FUN2(VAR5, VAR13);
        VAR15 = FUN2(VAR5, VAR13);
        VAR16 = VAR13 ? FUN2(VAR5, VAR13 - VAR9) : VAR7;
        VAR17 = (VAR13 >= VAR8 - VAR9) ? FUN2(VAR5, VAR13) : FUN2(VAR5, VAR13 + VAR9);
        VAR18 = VAR17 - VAR15;
        VAR19 = VAR15 - VAR16;
        VAR20 = VAR16 - VAR14;
        if ((FUN3(VAR18) <= VAR2->VAR23) && (FUN3(VAR19) <= VAR2->VAR23) && (FUN3(VAR20) <= VAR2->VAR23))
        {
            int VAR24;
            int VAR25;
            while (FUN4(&VAR4->VAR26))
            {
                int VAR24;
                VAR24 = 1 << VAR27[VAR2->VAR28[VAR10]];
                if (VAR13 + VAR24 * VAR9 > VAR8)
                    VAR24 = (VAR8 - VAR13) / VAR9;
                for (VAR12 = 0; VAR12 < VAR24; VAR12++)
                {
                    FUN5(VAR6, VAR13, VAR14);
                    VAR13 += VAR9;
                }
                if (VAR24 != 1 << VAR27[VAR2->VAR28[VAR10]])
                    return;
                if (VAR2->VAR28[VAR10] < 31)
                    VAR2->VAR28[VAR10]++;
                if (VAR13 + VAR9 > VAR8)
                    return;
            }
            VAR24 = VAR27[VAR2->VAR28[VAR10]];
            if (VAR24)
                VAR24 = FUN6(&VAR4->VAR26, VAR24);
            if (VAR13 + VAR24 * VAR9 > VAR8)
            {
                VAR24 = (VAR8 - VAR13) / VAR9;
            }
            for (VAR12 = 0; VAR12 < VAR24; VAR12++)
            {
                FUN5(VAR6, VAR13, VAR14);
                VAR13 += VAR9;
            }
            if (VAR13 >= VAR8)
            {
                FUN7(NULL, VAR29, "");
                return;
            }
            VAR15 = FUN2(VAR5, VAR13);
            VAR25 = (FUN3(VAR14 - VAR15) <= VAR2->VAR23) ? 1 : 0;
            VAR21 = FUN8(&VAR4->VAR26, VAR2, VAR25, VAR27[VAR2->VAR28[VAR10]]);
            if (VAR2->VAR28[VAR10])
                VAR2->VAR28[VAR10]--;
            if (VAR2->VAR23 && VAR25)
            {
                VAR22 = VAR14 + VAR21;
            }
            else
            {
                if (VAR15 < VAR14)
                    VAR22 = VAR15 - VAR21;
                else
                    VAR22 = VAR15 + VAR21;
            }
        }
        else
        {
            int VAR30, VAR31;
            VAR30 = FUN9(VAR2, VAR18) * 81 + FUN9(VAR2, VAR19) * 9 + FUN9(VAR2, VAR20);
            VAR22 = FUN10(VAR14, VAR14 + VAR15 - VAR16, VAR15);
            if (VAR30 < 0)
            {
                VAR30 = -VAR30;
                VAR31 = 1;
            }
            else
            {
                VAR31 = 0;
            }
            if (VAR31)
            {
                VAR22 = FUN11(VAR22 - VAR2->VAR32[VAR30], 0, VAR2->VAR33);
                VAR21 = -FUN12(&VAR4->VAR26, VAR2, VAR30);
            }
            else
            {
                VAR22 = FUN11(VAR22 + VAR2->VAR32[VAR30], 0, VAR2->VAR33);
                VAR21 = FUN12(&VAR4->VAR26, VAR2, VAR30);
            }
            VAR22 += VAR21;
        }
        if (VAR2->VAR23)
        {
            if (VAR22 < -VAR2->VAR23)
                VAR22 += VAR2->VAR34 * VAR2->VAR35;
            else if (VAR22 > VAR2->VAR33 + VAR2->VAR23)
                VAR22 -= VAR2->VAR34 * VAR2->VAR35;
            VAR22 = FUN11(VAR22, 0, VAR2->VAR33);
        }
        VAR22 &= VAR2->VAR33;
        FUN5(VAR6, VAR13, VAR22);
        VAR13 += VAR9;
    }