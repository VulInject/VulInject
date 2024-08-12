static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, const VAR6 *VAR7, const VAR8 *VAR9)
{
    int VAR10, VAR11, VAR12;
    VAR6 *VAR13[VAR14];
    const VAR6 *VAR15[VAR14];
    int VAR16[VAR14];
    GetBitContext VAR17;
    if (VAR7)
    {
        FUN2(&VAR17, VAR7, VAR2->VAR18 * VAR2->VAR19);
        if (VAR2->VAR20 && VAR2->VAR21->VAR22 & VAR23)
        {
            FUN3(VAR2->VAR21, VAR24, "");
            VAR2->VAR20 = 0;
            for (VAR10 = 0; VAR10 < VAR3; VAR10++)
            {
                int VAR25 = VAR2->VAR26[VAR10];
                VAR13[VAR25] = VAR2->VAR27->VAR13[VAR25];
                VAR15[VAR25] = VAR9 ? VAR9->VAR13[VAR25] : NULL;
                VAR16[VAR25] = VAR2->VAR16[VAR25];
                VAR2->VAR28[VAR25] |= 1;
                if (VAR2->VAR20)
                {
                    int VAR29 = (VAR16[VAR25] * (VAR2->VAR30[VAR10] * (8 * VAR2->VAR19 - ((VAR2->VAR31 / VAR2->VAR32) & 7)) - 1));
                    VAR13[VAR25] += VAR29;
                    VAR15[VAR25] += VAR29;
                    VAR16[VAR25] *= -1;
                    for (VAR12 = 0; VAR12 < VAR2->VAR19; VAR12++)
                    {
                        for (VAR11 = 0; VAR11 < VAR2->VAR18; VAR11++)
                        {
                            const int VAR33 = VAR7 && !FUN4(&VAR17);
                            if (VAR2->VAR34 && !VAR2->VAR35)
                                VAR2->VAR35 = VAR2->VAR34;
                            for (VAR10 = 0; VAR10 < VAR3; VAR10++)
                            {
                                VAR6 *VAR36;
                                int VAR37, VAR38, VAR39, VAR40, VAR41, VAR25, VAR42;
                                int VAR43;
                                VAR37 = VAR2->VAR44[VAR10];
                                VAR25 = VAR2->VAR26[VAR10];
                                VAR38 = VAR2->VAR45[VAR10];
                                VAR39 = VAR2->VAR30[VAR10];
                                VAR40 = 0;
                                VAR41 = 0;
                                for (VAR42 = 0; VAR42 < VAR37; VAR42++)
                                {
                                    VAR43 = (((VAR16[VAR25] * (VAR39 * VAR12 + VAR41) * 8) + (VAR38 * VAR11 + VAR40) * 8) >> VAR2->VAR21->VAR46);
                                    if (VAR2->VAR47 && VAR2->VAR48)
                                        VAR43 += VAR16[VAR25] >> 1;
                                    VAR36 = VAR13[VAR25] + VAR43;
                                    if (!VAR2->VAR49)
                                    {
                                        if (VAR33)
                                        {
                                            FUN5(VAR36, VAR15[VAR25] + VAR43, VAR16[VAR25], VAR2->VAR21->VAR46);
                                        }
                                        else
                                        {
                                            VAR2->VAR50.FUN6(VAR2->VAR51);
                                            if (FUN7(VAR2, VAR2->VAR51, VAR10, VAR2->VAR52[VAR10], VAR2->VAR53[VAR10], VAR2->VAR54[VAR2->VAR55[VAR25]]) < 0)
                                            {
                                                FUN3(VAR2->VAR21, VAR24, "", VAR12, VAR11);
                                                VAR2->VAR50.FUN8(VAR36, VAR16[VAR25], VAR2->VAR51);
                                            }
                                            else
                                            {
                                                int VAR56 = VAR2->VAR57[VAR25] * (VAR39 * VAR12 + VAR41) + (VAR38 * VAR11 + VAR40);
                                                VAR58 *VAR51 = VAR2->VAR59[VAR25][VAR56];
                                                if (VAR4)
                                                    VAR51[0] += FUN4(&VAR2->VAR60) * VAR2->VAR54[VAR2->VAR55[VAR25]][0] << VAR5;
                                                else if (FUN9(VAR2, VAR51, VAR10, VAR2->VAR52[VAR10], VAR2->VAR54[VAR2->VAR55[VAR25]], VAR5) < 0)
                                                {
                                                    FUN3(VAR2->VAR21, VAR24, "", VAR12, VAR11);
                                                    if (++VAR40 == VAR38)
                                                    {
                                                        VAR40 = 0;
                                                        VAR41++;
                                                        if (VAR2->VAR34 && !--VAR2->VAR35)
                                                        {
                                                            FUN10(&VAR2->VAR60);
                                                            FUN11(&VAR2->VAR60, 16);
                                                            for (VAR10 = 0; VAR10 < VAR3; VAR10++)
                                                                VAR2->VAR61[VAR10] = 1024;
                                                            return 0;