int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    static const int8_t VAR5[12] = {-1, 0, VAR6, -1, -1, -1, -1, -1, 0};
    static const int8_t VAR7[12] = {0, -1, VAR8, 0, -1, -1, -1, 0, -1, VAR9};
    int VAR10;
    if (!(VAR2->VAR11 & 0x8000))
    {
        for (VAR10 = 0; VAR10 < 4; VAR10++)
        {
            int VAR12 = VAR5[VAR2->VAR13[VAR14[0] + VAR10]];
            if (VAR12 < 0)
            {
                FUN2(VAR2->VAR4.VAR15, VAR16, "", VAR12, VAR4->VAR17, VAR4->VAR18);
                return -1;
            }
            else if (VAR12)
            {
                VAR2->VAR13[VAR14[0] + VAR10] = VAR12;
            }
        }
    }
    if ((VAR2->VAR19 & 0x8888) != 0x8888)
    {
        static const int VAR20[4] = {0x8000, 0x2000, 0x80, 0x20};
        for (VAR10 = 0; VAR10 < 4; VAR10++)
        {
            if (!(VAR2->VAR19 & VAR20[VAR10]))
            {
                int VAR12 = VAR7[VAR2->VAR13[VAR14[0] + 8 * VAR10]];
                if (VAR12 < 0)
                {
                    FUN2(VAR2->VAR4.VAR15, VAR16, "", VAR12, VAR4->VAR17, VAR4->VAR18);
                    return -1;
                }
                else if (VAR12)
                {
                    VAR2->VAR13[VAR14[0] + 8 * VAR10] = VAR12;
                }
            }
        }
    }
    return 0;
}