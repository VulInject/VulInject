static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    VAR11 *VAR12 = &VAR2->VAR12;
    for (VAR6 = 0; VAR6 < VAR2->VAR13; VAR6++)
    {
        VAR14 *VAR15 = VAR4->VAR15 + VAR6;
        for (VAR7 = 0, VAR10 = VAR12->VAR16 - 1; VAR7 < VAR12->VAR16; VAR7++, VAR10--)
        {
            VAR17 *VAR18 = VAR15->VAR18 + VAR7;
            for (VAR5 = 0; VAR5 < VAR18->VAR19 * VAR18->VAR20; VAR5++)
            {
                for (VAR8 = 0; VAR8 < VAR18->VAR21; VAR8++)
                {
                    int VAR22 = VAR8 + (VAR7 > 0);
                    VAR23 *VAR24 = VAR18->VAR24 + VAR8;
                    VAR25 *VAR26 = VAR24->VAR26 + VAR5;
                    for (VAR9 = 0; VAR9 < VAR26->VAR27 * VAR26->VAR28; VAR9++)
                    {
                        VAR29 *VAR30 = VAR26->VAR30 + VAR9;
                        VAR30->VAR31 = FUN2(VAR30, VAR2->VAR32, (VAR33)VAR34[VAR12->VAR35 == VAR36][VAR22][VAR10] * (VAR33)VAR24->VAR37 >> 16);
                    }
                }
            }
        }
    }
}