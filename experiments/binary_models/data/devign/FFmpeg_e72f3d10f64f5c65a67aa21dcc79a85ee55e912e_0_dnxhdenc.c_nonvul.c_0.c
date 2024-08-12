static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = VAR4, VAR10;
    VAR7 = VAR7->VAR11[VAR5];
    if (VAR7->VAR12->VAR13 == 8)
    {
        VAR14 *VAR15 = VAR7->VAR11[0]->VAR16[0] + ((VAR9 << 4) * VAR7->VAR17.VAR18);
        for (VAR10 = 0; VAR10 < VAR7->VAR17.VAR19; ++VAR10, VAR15 += 16)
        {
            unsigned VAR20 = VAR9 * VAR7->VAR17.VAR19 + VAR10;
            int VAR21 = VAR7->VAR17.VAR22.FUN2(VAR15, VAR7->VAR17.VAR18);
            int VAR23 = (VAR7->VAR17.VAR22.FUN3(VAR15, VAR7->VAR17.VAR18) - (((unsigned)(VAR21 * VAR21)) >> 8) + 128) >> 8;
            VAR7->VAR24[VAR20].VAR25 = VAR23;
            VAR7->VAR24[VAR20].VAR20 = VAR20;
        }
    }
    else
    {
        int const VAR18 = VAR7->VAR17.VAR18 >> 1;
        for (VAR10 = 0; VAR10 < VAR7->VAR17.VAR19; ++VAR10)
        {
            VAR26 *VAR15 = (VAR26 *)VAR7->VAR11[0]->VAR16[0] + ((VAR9 << 4) * VAR18) + (VAR10 << 4);
            unsigned VAR20 = VAR9 * VAR7->VAR17.VAR19 + VAR10;
            int VAR21 = 0;
            int VAR27 = 0;
            int VAR28, VAR29;
            int VAR30, VAR31;
            for (VAR30 = 0; VAR30 < 16; ++VAR30)
            {
                for (VAR31 = 0; VAR31 < 16; ++VAR31)
                {
                    int const VAR32 = (unsigned)VAR15[VAR31] >> 6;
                    VAR21 += VAR32;
                    VAR27 += VAR32 * VAR32;
                }
                VAR15 += VAR18;
            }
            VAR28 = VAR21 >> 8;
            VAR29 = VAR27 >> 8;
            VAR7->VAR24[VAR20].VAR25 = VAR29 - VAR28 * VAR28;
            VAR7->VAR24[VAR20].VAR20 = VAR20;
        }
    }
    return 0;
}