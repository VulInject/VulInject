static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8;
    unsigned int VAR9 = VAR2->VAR10;
    int VAR11 = 0;
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        int32_t VAR12;
        int32_t VAR13;
        int32_t VAR14;
        int VAR15;
        VAR15 = FUN2((VAR9 >> 9) + 3);
        VAR15 = FUN3(VAR15, VAR2->VAR16);
        VAR12 = FUN4(&VAR2->VAR17, VAR15, VAR6);
        VAR13 = VAR11 + VAR12;
        VAR14 = (VAR13 + 1) / 2;
        if (VAR13 & 1)
            VAR14 *= -1;
        VAR4[VAR8] = VAR14;
        VAR11 = 0;
        VAR9 += VAR13 * VAR7 - ((VAR9 * VAR7) >> 9);
        if (VAR13 > 0xffff)
            VAR9 = 0xffff;
        if ((VAR9 < 128) && (VAR8 + 1 < VAR5))
        {
            int VAR15;
            unsigned int VAR18;
            VAR11 = 1;
            VAR15 = 7 - FUN2(VAR9) + ((VAR9 + 16) >> 6);
            VAR15 = FUN3(VAR15, VAR2->VAR16);
            VAR18 = FUN4(&VAR2->VAR17, VAR15, 16);
            if (VAR18 > 0)
            {
                if (VAR18 >= VAR5 - VAR8)
                {
                    FUN5(VAR2->VAR19, VAR20, "", VAR18, VAR5, VAR8);
                    VAR18 = VAR5 - VAR8 - 1;
                }
                memset(&VAR4[VAR8 + 1], 0, VAR18 * 4);
                VAR8 += VAR18;
            }
            if (VAR18 > 0xffff)
                VAR11 = 0;
            VAR9 = 0;
        }
    }
}