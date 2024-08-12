static void FUN1(VAR1 *VAR2, const uint8_t VAR3[4], int VAR4, int VAR5, int VAR6, int VAR7, VAR8 *VAR9)
{
    const VAR10 *VAR11 = FUN2(VAR9->VAR12);
    VAR13 *VAR14, *VAR15;
    int VAR16;
    VAR4 = FUN3(VAR4, VAR2->VAR6 - 1);
    VAR5 = FUN3(VAR5, VAR2->VAR7 - 1);
    VAR6 = FUN4(FUN3(VAR6, VAR2->VAR6 - VAR4), 0);
    VAR7 = FUN4(FUN3(VAR7, VAR2->VAR7 - VAR5), 0);
    FUN5(VAR4 + VAR6 <= VAR2->VAR6);
    FUN5(VAR5 + VAR7 <= VAR2->VAR7);
    for (VAR16 = 0; VAR9->VAR17[VAR16]; VAR16++)
    {
        const int VAR18 = VAR3[VAR16];
        const int VAR19 = VAR9->VAR19[VAR16];
        int VAR20, VAR21, VAR22, VAR23, VAR24;
        if (VAR16 == 1 || VAR16 == 2)
        {
            VAR21 = VAR4 >> VAR11->VAR25;
            VAR23 = FUN6(VAR6, VAR11->VAR25);
            VAR22 = VAR5 >> VAR11->VAR26;
            VAR24 = FUN6(VAR7, VAR11->VAR26);
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