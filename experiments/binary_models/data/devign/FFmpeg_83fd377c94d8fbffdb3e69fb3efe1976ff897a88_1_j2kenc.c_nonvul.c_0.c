static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    for (VAR3 = 0; VAR3 < VAR2->VAR10; VAR3++)
    {
        int VAR11 = 0;
        for (VAR4 = 0; VAR4 < VAR9->VAR12; VAR4++)
        {
            int VAR13, VAR14 = VAR9->VAR12 - VAR4 - 1;
            VAR13 = VAR4 ? 3 : 1;
            for (VAR5 = 0; VAR5 < VAR13; VAR5++, VAR11++)
            {
                int VAR15, VAR16;
                if (VAR9->VAR17 == VAR18)
                {
                    int VAR19 = VAR5 + (VAR4 > 0), VAR20 = 81920000 / VAR21[0][VAR19][VAR14], VAR22 = FUN2(VAR20);
                    VAR16 = (11 - VAR22 < 0 ? VAR20 >> VAR22 - 11 : VAR20 << 11 - VAR22) & 0x7ff;
                    VAR15 = VAR2->VAR23[VAR3] - VAR22 + 13;
                }
                else
                    VAR15 = ((VAR5 & 2) >> 1) + (VAR4 > 0) + VAR2->VAR23[VAR3];
                VAR7->VAR15[VAR11] = VAR15;
                VAR7->VAR16[VAR11] = VAR16;
            }
        }
    }
}