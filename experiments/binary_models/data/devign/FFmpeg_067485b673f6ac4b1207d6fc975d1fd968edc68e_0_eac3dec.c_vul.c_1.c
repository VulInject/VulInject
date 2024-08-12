static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6;
    int VAR7, VAR8;
    VAR9 *VAR10 = &VAR2->VAR10;
    int VAR11[VAR12];
    VAR8 = FUN2(VAR10, 2);
    VAR7 = (VAR8 < 2) ? 12 : 17;
    VAR6 = 0;
    if (VAR8 == VAR13 || VAR8 == VAR14)
    {
        for (VAR4 = VAR2->VAR15[VAR3]; VAR4 < VAR2->VAR16[VAR3]; VAR4++)
        {
            if (VAR2->VAR17[VAR3][VAR4] > 7 && VAR2->VAR17[VAR3][VAR4] < VAR7)
                VAR11[VAR6++] = FUN3(VAR10) << (VAR8 - 1);
        }
    }
    else if (VAR8 == VAR18)
    {
        int VAR19 = 2;
        for (VAR4 = VAR2->VAR15[VAR3]; VAR4 < VAR2->VAR16[VAR3]; VAR4++)
        {
            if (VAR2->VAR17[VAR3][VAR4] > 7 && VAR2->VAR17[VAR3][VAR4] < 17)
            {
                if (VAR19++ == 2)
                {
                    int VAR20 = FUN2(VAR10, 5);
                    if (VAR20 > 26)
                    {
                        FUN4(VAR2->VAR21, VAR22, "");
                        VAR20 = 26;
                    }
                    VAR11[VAR6++] = VAR23[VAR20][0];
                    VAR11[VAR6++] = VAR23[VAR20][1];
                    VAR11[VAR6++] = VAR23[VAR20][2];
                    VAR19 = 0;
                }
            }
        }
    }
    VAR6 = 0;
    for (VAR4 = VAR2->VAR15[VAR3]; VAR4 < VAR2->VAR16[VAR3]; VAR4++)
    {
        int VAR24 = VAR2->VAR17[VAR3][VAR4];
        int VAR25 = VAR26[VAR24];
        if (!VAR24)
        {
            for (VAR5 = 0; VAR5 < 6; VAR5++)
            {
                VAR2->VAR27[VAR3][VAR4][VAR5] = (FUN5(&VAR2->VAR28) & 0x7FFFFF) - 0x400000;
            }
        }
        else if (VAR24 < 8)
        {
            int VAR29 = FUN2(VAR10, VAR25);
            for (VAR5 = 0; VAR5 < 6; VAR5++)
            {
                VAR2->VAR27[VAR3][VAR4][VAR5] = VAR30[VAR24][VAR29][VAR5] << 8;
            }
        }
        else
        {
            int VAR31, VAR32;
            if (VAR8 != VAR33 && VAR24 < VAR7)
            {
                VAR32 = VAR11[VAR6++];
            }
            else
            {
                VAR32 = 0;
            }
            VAR31 = VAR25 - VAR32;
            for (VAR5 = 0; VAR5 < 6; VAR5++)
            {
                int VAR34 = FUN6(VAR10, VAR31);
                if (VAR32 && VAR34 == -(1 << (VAR31 - 1)))
                {
                    int VAR35;
                    int VAR36 = VAR25 - (2 - VAR32);
                    VAR34 = FUN6(VAR10, VAR36);
                    VAR34 <<= (23 - (VAR36 - 1));
                    if (VAR34 >= 0)
                        VAR35 = 1 << (23 - VAR32);
                    else
                        VAR35 = VAR37[VAR24 - 8][VAR32 - 1] << 8;
                    VAR34 += ((VAR38[VAR24 - 8][VAR32 - 1] * (VAR39)VAR34) >> 15) + VAR35;
                }
                else
                {
                    VAR34 <<= 24 - VAR25;
                    if (!VAR32)
                    {
                        VAR34 += (VAR40[VAR24 - 8] * (VAR39)VAR34) >> 15;
                    }
                }
                VAR2->VAR27[VAR3][VAR4][VAR5] = VAR34;
            }
        }
        FUN7(VAR2->VAR27[VAR3][VAR4]);
    }
}