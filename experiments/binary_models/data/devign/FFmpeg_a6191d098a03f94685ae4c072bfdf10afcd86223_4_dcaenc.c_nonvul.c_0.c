static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    for (VAR5 = 0; VAR5 < VAR2->VAR10; VAR5++)
    {
        int32_t VAR11[512];
        int VAR12 = 0;
        const int VAR13 = VAR2->VAR14[VAR5];
        memcpy(VAR11, &VAR2->VAR15[VAR5][0], 512 * sizeof(VAR3));
        for (VAR6 = 0; VAR6 < VAR16; VAR6++)
        {
            int32_t VAR17[64];
            int32_t VAR18;
            int VAR19;
            memset(VAR17, 0, 64 * sizeof(VAR3));
            for (VAR8 = 0, VAR7 = VAR12, VAR9 = 0; VAR7 < 512; VAR8 = (VAR8 + 1) & 63, VAR7++, VAR9++)
                VAR17[VAR8] += FUN2(VAR11[VAR7], VAR2->VAR20[VAR9]);
            for (VAR7 = 0; VAR7 < VAR12; VAR8 = (VAR8 + 1) & 63, VAR7++, VAR9++)
                VAR17[VAR8] += FUN2(VAR11[VAR7], VAR2->VAR20[VAR9]);
            for (VAR8 = 16; VAR8 < 32; VAR8++)
                VAR17[VAR8] = VAR17[VAR8] - VAR17[31 - VAR8];
            for (VAR8 = 32; VAR8 < 48; VAR8++)
                VAR17[VAR8] = VAR17[VAR8] + VAR17[95 - VAR8];
            for (VAR19 = 0; VAR19 < 32; VAR19++)
            {
                VAR18 = 0;
                for (VAR7 = 16; VAR7 < 48; VAR7++)
                {
                    int VAR21 = (2 * VAR19 + 1) * (2 * (VAR7 + 16) + 1);
                    VAR18 += FUN2(VAR17[VAR7], FUN3(VAR21 << 3)) >> 3;
                }
                VAR2->VAR22[VAR5][VAR19][VAR6] = ((VAR19 + 1) & 2) ? -VAR18 : VAR18;
            }
            for (VAR7 = 0; VAR7 < 32; VAR7++)
                VAR11[VAR7 + VAR12] = VAR4[(VAR6 * 32 + VAR7) * VAR2->VAR23 + VAR13];
            VAR12 = (VAR12 + 32) & 511;
        }
    }
}