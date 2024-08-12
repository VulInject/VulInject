static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11;
    unsigned int VAR12 = VAR7;
    int VAR13 = 0;
    for (VAR11 = 0; VAR11 < VAR5; VAR11++)
    {
        int32_t VAR14;
        int32_t VAR15;
        int32_t VAR16;
        VAR14 = FUN2(&VAR2->VAR17);
        if (VAR14 > 8)
        {
            VAR14 = FUN3(&VAR2->VAR17, VAR6);
        }
        else
        {
            int VAR18;
            int VAR19;
            VAR19 = 31 - FUN4((VAR12 >> 9) + 3);
            if (VAR19 >= VAR8)
                VAR19 = VAR8;
            if (VAR19 != 1)
            {
                VAR18 = FUN5(&VAR2->VAR17, VAR19);
                VAR14 = (VAR14 << VAR19) - VAR14;
                if (VAR18 > 1)
                {
                    VAR14 += VAR18 - 1;
                    FUN6(&VAR2->VAR17, VAR19);
                }
                else
                    FUN6(&VAR2->VAR17, VAR19 - 1);
            }
        }
        VAR15 = VAR13 + VAR14;
        VAR16 = (VAR15 + 1) / 2;
        if (VAR15 & 1)
            VAR16 *= -1;
        VAR4[VAR11] = VAR16;
        VAR13 = 0;
        VAR12 += VAR15 * VAR9 - ((VAR12 * VAR9) >> 9);
        if (VAR15 > 0xffff)
            VAR12 = 0xffff;
        if ((VAR12 < 128) && (VAR11 + 1 < VAR5))
        {
            int VAR20;
            VAR13 = 1;
            VAR14 = FUN2(&VAR2->VAR17);
            if (VAR14 > 8)
            {
                VAR20 = FUN3(&VAR2->VAR17, 16);
            }
            else
            {
                int VAR19;
                int VAR18;
                VAR19 = FUN4(VAR12) + ((VAR12 + 16) >> 6) - 24;
                if (VAR19 >= VAR8)
                    VAR19 = VAR8;
                VAR14 = (VAR14 << VAR19) - VAR14;
                VAR18 = FUN5(&VAR2->VAR17, VAR19);
                if (VAR18 < 2)
                {
                    FUN6(&VAR2->VAR17, VAR19 - 1);
                }
                else
                {
                    VAR14 += VAR18 - 1;
                    FUN6(&VAR2->VAR17, VAR19);
                }
                VAR20 = VAR14;
            }
            if (VAR20 > 0)
            {
                memset(&VAR4[VAR11 + 1], 0, VAR20 * 4);
                VAR11 += VAR20;
            }
            if (VAR20 > 0xffff)
                VAR13 = 0;
            VAR12 = 0;
        }
    }
}