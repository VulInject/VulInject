static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5)
{
    const VAR3 *VAR6 = VAR4 + (VAR2->VAR7->VAR8 * VAR2->VAR7->VAR9 / 16);
    int VAR10, VAR11, VAR12;
    VAR12 = 0;
    for (VAR11 = 0; VAR11 < VAR2->VAR7->VAR9 / 4; VAR11++)
        for (VAR10 = 0; VAR10 < VAR2->VAR7->VAR8 / 4 && VAR4 + VAR12 < VAR5; VAR10++)
        {
            if (VAR4[VAR12] == 0xFF)
            {
                unsigned char *VAR13 = VAR2->VAR14.VAR15[0] + (VAR11 * 4) * VAR2->VAR14.VAR16[0] + VAR10 * 4;
                if (VAR6 + 16 < VAR5 && *VAR6 == 0xFF)
                {
                    VAR6++;
                    memcpy(VAR13, VAR6, 4);
                    memcpy(VAR13 + VAR2->VAR14.VAR16[0], VAR6 + 4, 4);
                    memcpy(VAR13 + 2 * VAR2->VAR14.VAR16[0], VAR6 + 8, 4);
                    memcpy(VAR13 + 3 * VAR2->VAR14.VAR16[0], VAR6 + 12, 4);
                    VAR6 += 16;
                }
                else if (VAR6 < VAR5)
                {
                    int VAR17 = (*VAR6 & 0xF) - 7;
                    int VAR18 = ((*VAR6 >> 4)) - 7;
                    if (VAR2->VAR19.VAR15[0])
                        FUN2(VAR2->VAR14.VAR15[0], VAR2->VAR14.VAR16[0], VAR2->VAR19.VAR15[0], VAR2->VAR19.VAR16[0], VAR10 * 4, VAR11 * 4, VAR17, VAR18, VAR2->VAR7->VAR8, VAR2->VAR7->VAR9);
                    VAR6++;
                }
            }
            else
            {
                int VAR17 = (VAR4[VAR12] & 0xF) - 7;
                int VAR18 = ((VAR4[VAR12] >> 4)) - 7;
                FUN2(VAR2->VAR14.VAR15[0], VAR2->VAR14.VAR16[0], VAR2->VAR20.VAR15[0], VAR2->VAR20.VAR16[0], VAR10 * 4, VAR11 * 4, VAR17, VAR18, VAR2->VAR7->VAR8, VAR2->VAR7->VAR9);
            }
            VAR12++;
        }
}