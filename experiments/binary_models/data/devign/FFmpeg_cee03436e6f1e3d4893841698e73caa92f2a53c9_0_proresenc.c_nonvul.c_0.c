static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11, VAR3 *VAR12, int VAR13, int VAR14, int VAR15)
{
    const VAR3 *VAR16;
    const int VAR17 = 4 * VAR14;
    int VAR18;
    int VAR19, VAR20, VAR21;
    for (VAR19 = 0; VAR19 < VAR13; VAR19++, VAR4 += VAR17)
    {
        if (VAR6 >= VAR8)
        {
            memset(VAR11, 0, 64 * (VAR13 - VAR19) * VAR14 * sizeof(*VAR11));
            return;
        }
        if (VAR6 + VAR17 <= VAR8 && VAR7 + 16 <= VAR9)
        {
            VAR16 = VAR4;
            VAR18 = VAR5;
        }
        else
        {
            int VAR22, VAR23, VAR24;
            VAR16 = VAR12;
            VAR18 = 16 * sizeof(*VAR12);
            VAR22 = FUN2(VAR8 - VAR6, VAR17);
            VAR23 = FUN2(VAR9 - VAR7, 16);
            for (VAR20 = 0; VAR20 < VAR23; VAR20++)
            {
                memcpy(VAR12 + VAR20 * 16, (const VAR25 *)VAR4 + VAR20 * VAR5, VAR22 * sizeof(*VAR4));
                VAR24 = VAR12[VAR20 * 16 + VAR22 - 1];
                for (VAR21 = VAR22; VAR21 < VAR17; VAR21++)
                    VAR12[VAR20 * 16 + VAR21] = VAR24;
            }
            for (; VAR20 < 16; VAR20++)
                memcpy(VAR12 + VAR20 * 16, VAR12 + (VAR23 - 1) * 16, VAR17 * sizeof(*VAR12));
        }
        if (!VAR15)
        {
            VAR2->VAR26.FUN3(VAR16, VAR18, VAR11);
            VAR11 += 64;
            if (VAR14 > 2)
            {
                VAR2->VAR26.FUN3(VAR16 + 8, VAR18, VAR11);
                VAR11 += 64;
            }
            VAR2->VAR26.FUN3(VAR16 + VAR18 * 4, VAR18, VAR11);
            VAR11 += 64;
            if (VAR14 > 2)
            {
                VAR2->VAR26.FUN3(VAR16 + VAR18 * 4 + 8, VAR18, VAR11);
                VAR11 += 64;
            }
        }
        else
        {
            VAR2->VAR26.FUN3(VAR16, VAR18, VAR11);
            VAR11 += 64;
            VAR2->VAR26.FUN3(VAR16 + VAR18 * 4, VAR18, VAR11);
            VAR11 += 64;
            if (VAR14 > 2)
            {
                VAR2->VAR26.FUN3(VAR16 + 8, VAR18, VAR11);
                VAR11 += 64;
                VAR2->VAR26.FUN3(VAR16 + VAR18 * 4 + 8, VAR18, VAR11);
                VAR11 += 64;
            }
        }
        VAR6 += VAR17;
    }
}