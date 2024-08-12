static inline int FUN1(const VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5[16], VAR6 *VAR7, int VAR8)
{
    uint8_t VAR9[128];
    int VAR10 = 0, VAR11, VAR12;
    memset(VAR9, 0, sizeof(VAR9));
    {
        FUN2(VAR13, VAR4);
        for (;;)
        {
            int VAR14, VAR15;
            FUN3(VAR13, VAR4);
            FUN4(VAR14, VAR13, VAR4, VAR16.VAR17, VAR18, 2);
            if (VAR14 == 128)
                break;
            VAR10 += VAR14;
            if (VAR10 >= 128)
                return VAR19;
            FUN3(VAR13, VAR4);
            FUN4(VAR15, VAR13, VAR4, VAR20.VAR17, VAR18, 2);
            VAR9[VAR10++] = VAR15;
        }
        FUN5(VAR13, VAR4);
    }
    for (VAR12 = 0; VAR12 < 8; VAR12++)
    {
        for (VAR11 = 0; VAR11 < 16; VAR11++)
        {
            VAR5[VAR11] -= VAR9[VAR12 * 16 + VAR11];
        }
        memcpy(VAR7, VAR5, 16);
        VAR7 += VAR8;
    }
    return 0;
}