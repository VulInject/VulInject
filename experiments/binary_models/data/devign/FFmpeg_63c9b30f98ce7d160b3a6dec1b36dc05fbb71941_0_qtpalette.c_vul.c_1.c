int FUN1(int VAR1, VAR2 *VAR3, VAR4 *VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    FUN2(VAR3, 82, VAR11);
    VAR6 = FUN3(VAR3);
    VAR7 = VAR6 & 0x1F;
    VAR9 = VAR6 & 0x20;
    VAR8 = FUN3(VAR3);
    if (VAR9 && VAR1 == VAR12)
        return 0;
    if ((VAR7 == 1 || VAR7 == 2 || VAR7 == 4 || VAR7 == 8))
    {
        int VAR13, VAR14, VAR15;
        uint32_t VAR16, VAR17, VAR18, VAR19;
        if (VAR9 && VAR7 > 1 && VAR8)
        {
            int VAR20, VAR21;
            VAR13 = 1 << VAR7;
            VAR20 = 255;
            VAR21 = 256 / (VAR13 - 1);
            for (VAR10 = 0; VAR10 < VAR13; VAR10++)
            {
                VAR17 = VAR18 = VAR19 = VAR20;
                VAR5[VAR10] = (0xFFU << 24) | (VAR17 << 16) | (VAR18 << 8) | (VAR19);
                VAR20 -= VAR21;
                if (VAR20 < 0)
                    VAR20 = 0;
            }
        }
        else if (VAR8)
        {
            const VAR22 *VAR23;
            VAR13 = 1 << VAR7;
            if (VAR7 == 1)
                VAR23 = VAR24;
            else if (VAR7 == 2)
                VAR23 = VAR25;
            else if (VAR7 == 4)
                VAR23 = VAR26;
            else
                VAR23 = VAR27;
            for (VAR10 = 0; VAR10 < VAR13; VAR10++)
            {
                VAR17 = VAR23[VAR10 * 3 + 0];
                VAR18 = VAR23[VAR10 * 3 + 1];
                VAR19 = VAR23[VAR10 * 3 + 2];
                VAR5[VAR10] = (0xFFU << 24) | (VAR17 << 16) | (VAR18 << 8) | (VAR19);
            }
        }
        else
        {
            VAR14 = FUN4(VAR3);
            FUN3(VAR3);
            VAR15 = FUN3(VAR3);
            if ((VAR14 <= 255) && (VAR15 <= 255))
            {
                for (VAR10 = VAR14; VAR10 <= VAR15; VAR10++)
                {
                    VAR16 = FUN5(VAR3);
                    FUN5(VAR3);
                    VAR17 = FUN5(VAR3);
                    FUN5(VAR3);
                    VAR18 = FUN5(VAR3);
                    FUN5(VAR3);
                    VAR19 = FUN5(VAR3);
                    FUN5(VAR3);
                    VAR5[VAR10] = (VAR16 << 24) | (VAR17 << 16) | (VAR18 << 8) | (VAR19);
                }
            }
        }
        return 1;
    }
    return 0;
}