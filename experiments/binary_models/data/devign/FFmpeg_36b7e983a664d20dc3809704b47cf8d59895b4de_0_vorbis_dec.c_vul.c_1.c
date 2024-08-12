static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    uint_fast8_t VAR5, VAR6, VAR7;
    VAR2->VAR8 = FUN2(VAR4, 6) + 1;
    VAR2->VAR9 = FUN3(VAR2->VAR8 * sizeof(VAR10));
    FUN4("", VAR2->VAR8);
    for (VAR5 = 0; VAR5 < VAR2->VAR8; ++VAR5)
    {
        VAR10 *VAR11 = &VAR2->VAR9[VAR5];
        uint_fast8_t VAR12[64];
        uint_fast8_t VAR13;
        uint_fast8_t VAR14;
        VAR11->VAR15 = FUN2(VAR4, 16);
        FUN4("", VAR5, VAR11->VAR15);
        VAR11->VAR16 = FUN2(VAR4, 24);
        VAR11->VAR17 = FUN2(VAR4, 24);
        VAR11->VAR18 = FUN2(VAR4, 24) + 1;
        VAR11->VAR19 = FUN2(VAR4, 6) + 1;
        VAR11->VAR20 = FUN2(VAR4, 8);
        if (VAR11->VAR20 >= VAR2->VAR21)
        {
            FUN5(VAR2->VAR22, VAR23, "", VAR11->VAR20);
            FUN4("", VAR11->VAR16, VAR11->VAR17, VAR11->VAR18, VAR11->VAR19, VAR11->VAR20);
            for (VAR6 = 0; VAR6 < VAR11->VAR19; ++VAR6)
            {
                VAR13 = 0;
                VAR14 = FUN2(VAR4, 3);
                if (FUN6(VAR4))
                {
                    VAR13 = FUN2(VAR4, 5);
                    VAR12[VAR6] = (VAR13 << 3) + VAR14;
                    FUN4("", VAR6, FUN7(VAR12[VAR6]));
                    VAR11->VAR24 = 0;
                    for (VAR6 = 0; VAR6 < VAR11->VAR19; ++VAR6)
                    {
                        for (VAR7 = 0; VAR7 < 8; ++VAR7)
                        {
                            if (VAR12[VAR6] & (1 << VAR7))
                            {
                                int VAR25 = FUN2(VAR4, 8);
                                if (VAR25 >= VAR2->VAR21)
                                {
                                    FUN5(VAR2->VAR22, VAR23, "", VAR25);
                                    VAR11->VAR26[VAR6][VAR7] = VAR25;
                                    FUN4("", VAR6, VAR7, VAR11->VAR26[VAR6][VAR7]);
                                    if (VAR7 > VAR11->VAR24)
                                    {
                                        VAR11->VAR24 = VAR7;
                                    }
                                    else
                                    {
                                        VAR11->VAR26[VAR6][VAR7] = -1;
                                        return 0