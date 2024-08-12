static void FUN1(VAR1 *VAR2, const uint8_t VAR3[4], unsigned VAR4, unsigned VAR5, unsigned VAR6, unsigned VAR7, VAR8 *VAR9)
{
    const VAR10 *VAR11 = FUN2(VAR9->VAR12);
    VAR13 *VAR14, *VAR15;
    int VAR16;
    VAR4 = FUN3(VAR4, VAR2->VAR6 - 1);
    VAR5 = FUN3(VAR5, VAR2->VAR7 - 1);
    VAR6 = FUN3(VAR6, VAR2->VAR6 - VAR4);
    VAR7 = FUN3(VAR7, VAR2->VAR7 - VAR5);
    FUN4(VAR4 + VAR6 <= VAR2->VAR6);
    FUN4(VAR5 + VAR7 <= VAR2->VAR7);
    for (VAR16 = 0; VAR9->VAR17[VAR16]; VAR16++)
    {
        const int VAR18 = VAR3[VAR16];
        const int VAR19 = VAR9->VAR19[VAR16];
        int VAR20, VAR21, VAR22, VAR23, VAR24;
        if (VAR16 == 1 || VAR16 == 2)
        {
            VAR21 = VAR4 >> VAR11->VAR25;
            VAR23 = VAR6 >> VAR11->VAR25;
            VAR22 = VAR5 >> VAR11->VAR26;
            VAR24 = VAR7 >> VAR11->VAR26;
        }
        else
        {
            VAR21 = VAR4;
            VAR23 = VAR6;
            VAR22 = VAR5;
            VAR24 = VAR7;
        }
        VAR15 = VAR14 = VAR9->VAR17[VAR16] + VAR22 * VAR19 + VAR21;
        memset(VAR14, VAR18, VAR23);
        VAR14 += VAR19;
        for (VAR20 = 1; VAR20 < VAR24; VAR20++, VAR14 += VAR19)
            memcpy(VAR14, VAR15, VAR23);
    }
}