static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    int VAR7 = 1 << (VAR2->VAR8->VAR9 + 2);
    FUN2(VAR2->VAR10.VAR11, VAR2->VAR12, VAR7 * 4 * sizeof(*VAR2->VAR12), VAR13);
    FUN2(VAR2->VAR10.VAR11, VAR2->VAR14, VAR7 * 4 * sizeof(*VAR2->VAR14), VAR13);
    FUN2(VAR2->VAR10.VAR11, VAR2->VAR15, 63 * 2, VAR13);
    FUN2(VAR2->VAR10.VAR11, VAR2->VAR16, 63, VAR13);
    VAR2->VAR12 += VAR7 * 2;
    VAR2->VAR14 += VAR7 * 2;
    for (VAR5 = -VAR7; VAR5 < VAR7; VAR5++)
    {
        for (VAR6 = 0; VAR6 < 2; VAR6++)
        {
            int VAR17 = (VAR5 << 1) | VAR6;
            int VAR18, VAR19 = 0, VAR20 = VAR5;
            FUN3(VAR18, VAR20);
            if (VAR20 > 64)
            {
                VAR19 = (VAR20 - 1) >> 6;
                VAR20 -= VAR19 << 6;
            }
            for (VAR4 = 0; VAR4 < 257; VAR4++)
            {
                if (VAR2->VAR8->VAR21[VAR4] >> 1 == VAR20 && (!VAR19 || (VAR2->VAR8->VAR22[VAR4] & 1) && VAR19) && (!VAR6 || (VAR2->VAR8->VAR22[VAR4] & 2) && VAR6))
                {
                    assert(!VAR2->VAR12[VAR17]);
                    if (VAR20)
                    {
                        VAR2->VAR12[VAR17] = (VAR2->VAR8->VAR23[VAR4] << 1) | (VAR18 & 1);
                        VAR2->VAR14[VAR17] = VAR2->VAR8->VAR24[VAR4] + 1;
                    }
                    else
                    {
                        VAR2->VAR12[VAR17] = VAR2->VAR8->VAR23[VAR4];
                        VAR2->VAR14[VAR17] = VAR2->VAR8->VAR24[VAR4];
                    }
                    break;
                }
            }
            assert(!VAR20 || VAR4 < 257);
            if (VAR19)
            {
                VAR2->VAR12[VAR17] = (VAR2->VAR12[VAR17] << VAR2->VAR8->VAR25) | VAR19;
                VAR2->VAR14[VAR17] += VAR2->VAR8->VAR25;
            }
        }
    }
    for (VAR3 = 0; VAR3 < 62; VAR3++)
    {
        int VAR6 = VAR2->VAR8->VAR6[VAR3];
        assert(VAR6 < 63);
        VAR2->VAR15[VAR6] = VAR2->VAR8->VAR15[VAR3];
        VAR2->VAR16[VAR6] = VAR2->VAR8->VAR16[VAR3];
    }
    return 0;
VAR13:
    return -1;
}