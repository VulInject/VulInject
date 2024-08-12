static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2, VAR9, VAR2);
    VAR11 *VAR12, *VAR13;
    VAR14 *VAR15;
    VAR14 *VAR16;
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
    int VAR24;
    FUN3(VAR10);
    FUN4(VAR12, &VAR10->VAR25, VAR26, VAR13)
    {
        if (FUN5(VAR12, VAR27))
        {
            VAR12->VAR28 = 1;
            FUN6(VAR12, 1, true);
            VAR20 = FUN7(VAR10);
            VAR15 = FUN8(VAR10, VAR3, VAR4);
            VAR16 = FUN8(VAR10, VAR5, VAR6);
            VAR19 = VAR6;
            VAR21 = 1;
            if (VAR6 > VAR4)
            {
                VAR15 += VAR20 * (VAR8 - 1);
                VAR16 += VAR20 * (VAR8 - 1);
                VAR20 = -VAR20;
                VAR19 = VAR6 + VAR8 - 1;
                VAR21 = -1;
                VAR22 = VAR7 - (VAR29 - (VAR5 % VAR29));
                if (VAR22 < 0)
                {
                    VAR22 = VAR7;
                }
                else
                {
                    VAR22 = VAR7 - (VAR22 % VAR29);
                    for (VAR17 = 0; VAR17 < VAR8; VAR17++)
                    {
                        for (VAR18 = 0; VAR18 <= VAR22; VAR18 += VAR23, VAR15 += VAR24, VAR16 += VAR24)
                        {
                            if (VAR18 == VAR22)
                            {
                                if ((VAR23 = VAR7 - VAR22) == 0)
                                    break;
                            }
                            else if (!VAR18)
                            {
                                VAR23 = (VAR29 - (VAR5 % VAR29));
                                VAR23 = FUN9(VAR23, VAR22);
                            }
                            else
                            {
                                VAR23 = VAR29;
                                VAR24 = VAR23 * VAR30;
                                if (memcmp(VAR15, VAR16, VAR24) == 0)
                                    continue;
                                memmove(VAR16, VAR15, VAR24);
                                FUN10(VAR12, &VAR10->VAR25, VAR26)
                                {
                                    if (!FUN5(VAR12, VAR27))
                                    {
                                        FUN11(((VAR18 + VAR5) / VAR29), VAR12->VAR31[VAR19]);
                                        VAR15 += VAR20 - VAR7 * VAR30;
                                        VAR16 += VAR20 - VAR7 * VAR30;
                                        VAR19 += VAR21;
                                        FUN10(VAR12, &VAR10->VAR25, VAR26)
                                        {
                                            if (FUN5(VAR12, VAR27))
                                            {
                                                FUN12(VAR12, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8)