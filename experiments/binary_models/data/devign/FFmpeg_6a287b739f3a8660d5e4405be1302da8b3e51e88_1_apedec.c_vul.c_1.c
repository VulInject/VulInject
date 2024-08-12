static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR3;
    int VAR13;
    int VAR14, VAR15;
    int VAR16;
    int VAR17;
    if (VAR7 == 0 && !VAR9->VAR12)
    {
        *VAR4 = 0;
        return 0;
        if (VAR18 * 2 * VAR2->VAR19 > *VAR4)
        {
            FUN2(VAR2, VAR20, "", *VAR4, VAR9->VAR12 * 2 * VAR2->VAR19);
            if (!VAR9->VAR12)
            {
                VAR9->VAR3 = FUN3(VAR9->VAR3, (VAR7 + 3) & ~3);
                VAR9->VAR21.FUN4((VAR22 *)VAR9->VAR3, (const VAR22 *)VAR6, VAR7 >> 2);
                VAR9->VAR23 = VAR9->VAR24 = VAR9->VAR3;
                VAR9->VAR25 = VAR9->VAR3 + VAR7;
                VAR13 = VAR9->VAR12 = FUN5(&VAR9->VAR23);
                VAR15 = FUN5(&VAR9->VAR23);
                if (VAR15 < 0 || VAR15 > 3)
                {
                    FUN2(VAR2, VAR20, "");
                    VAR9->VAR3 = NULL;
                    VAR9->VAR23 += VAR15;
                    VAR9->VAR26 = VAR13;
                    VAR6 += 4;
                    if (VAR9->VAR12 <= 0)
                    {
                        *VAR4 = 0;
                        return VAR7;
                        memset(VAR9->VAR27, 0, sizeof(VAR9->VAR27));
                        memset(VAR9->VAR28, 0, sizeof(VAR9->VAR28));
                        FUN6(VAR9);
                        if (!VAR9->VAR3)
                        {
                            *VAR4 = 0;
                            return VAR7;
                            VAR13 = VAR9->VAR12;
                            VAR16 = FUN7(VAR18, VAR13);
                            if ((VAR9->VAR19 == 1) || (VAR9->VAR29 & VAR30))
                                FUN8(VAR9, VAR16);
                            else
                                FUN9(VAR9, VAR16);
                            for (VAR14 = 0; VAR14 < VAR16; VAR14++)
                            {
                                *VAR12++ = VAR9->VAR27[VAR14];
                                if (VAR9->VAR19 == 2)
                                    *VAR12++ = VAR9->VAR28[VAR14];
                                VAR9->VAR12 -= VAR16;
                                *VAR4 = VAR16 * 2 * VAR9->VAR19;
                                VAR17 = VAR9->VAR12 ? VAR9->VAR23 - VAR9->VAR24 : VAR7;
                                VAR9->VAR24 = VAR9->VAR23;
                                return VAR17