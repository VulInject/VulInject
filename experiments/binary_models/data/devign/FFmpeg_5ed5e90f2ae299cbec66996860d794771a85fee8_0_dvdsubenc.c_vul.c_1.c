static void FUN1(VAR1 *VAR2, unsigned VAR3[33], const VAR4 *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    unsigned VAR9[256] = {0};
    VAR10 *VAR11 = (VAR10 *)VAR5->VAR12.VAR13[1];
    uint32_t VAR14;
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, FUN2(VAR22);
    VAR23 *VAR24 = VAR5->VAR12.VAR13[0];
    for (VAR16 = 0; VAR16 < VAR5->VAR25; VAR16++)
    {
        for (VAR15 = 0; VAR15 < VAR5->VAR26; VAR15++)
            VAR9[*(VAR24++)]++;
        VAR24 += VAR5->VAR12.VAR27[0] - VAR5->VAR26;
    }
    for (VAR17 = 0; VAR17 < 256; VAR17++)
    {
        if (!VAR9[VAR17])
            continue;
        VAR14 = VAR11[VAR17];
        VAR19 = VAR14 < 0x33000000 ? 0 : VAR14 < 0xCC000000 ? 1
                                                            : 17;
        if (VAR19)
        {
            VAR21 = VAR28;
            for (VAR18 = 0; VAR18 < 16; VAR18++)
            {
                VAR20 = FUN3(VAR14 & 0xFFFFFF, VAR7->VAR29[VAR18]);
                if (VAR20 < VAR21)
                {
                    VAR21 = VAR20;
                    VAR22 = VAR18;
                }
            }
            VAR19 += VAR22;
        }
        VAR3[VAR19] += VAR9[VAR17];
    }
}