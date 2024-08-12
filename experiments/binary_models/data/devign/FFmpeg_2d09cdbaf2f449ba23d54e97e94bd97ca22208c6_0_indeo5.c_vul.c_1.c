static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    VAR18 *VAR19, *VAR20;
    int VAR21 = VAR4->VAR22 * VAR4->VAR23;
    VAR19 = VAR6->VAR24;
    VAR20 = VAR6->VAR25;
    VAR14 = VAR6->VAR26 * VAR4->VAR23 + VAR6->VAR27;
    if (!VAR20 && ((VAR4->VAR28 && VAR4->VAR29) || VAR4->VAR30))
        VAR16 = (VAR2->VAR31[0].VAR32[0].VAR22 >> 3) - (VAR4->VAR22 >> 3);
    VAR11 = VAR12 = 0;
    for (VAR10 = VAR6->VAR26; VAR10 < (VAR6->VAR26 + VAR6->VAR33); VAR10 += VAR4->VAR22)
    {
        VAR15 = VAR14;
        for (VAR9 = VAR6->VAR27; VAR9 < (VAR6->VAR27 + VAR6->VAR34); VAR9 += VAR4->VAR22)
        {
            VAR19->VAR27 = VAR9;
            VAR19->VAR26 = VAR10;
            VAR19->VAR35 = VAR15;
            if (FUN2(&VAR2->VAR36))
            {
                if (VAR2->VAR37 == VAR38)
                {
                    FUN3(VAR8, VAR39, "");
                    return -1;
                    VAR19->VAR40 = 1;
                    VAR19->VAR41 = 0;
                    VAR19->VAR42 = 0;
                    if (!VAR4->VAR43 && !VAR4->VAR44 && (VAR2->VAR45 & 8))
                    {
                        VAR19->VAR42 = FUN4(&VAR2->VAR36, VAR2->VAR46.VAR47->VAR48, VAR49, 1);
                        VAR19->VAR42 = FUN5(VAR19->VAR42);
                        VAR19->VAR11 = VAR19->VAR12 = 0;
                        if (VAR4->VAR30)
                        {
                            if (VAR16)
                            {
                                VAR19->VAR11 = FUN6(VAR20->VAR11, VAR16);
                                VAR19->VAR12 = FUN6(VAR20->VAR12, VAR16);
                            }
                            else
                            {
                                VAR19->VAR11 = VAR20->VAR11;
                                VAR19->VAR12 = VAR20->VAR12;
                            }
                            else
                            {
                                if (VAR4->VAR30)
                                {
                                    VAR19->VAR40 = VAR20->VAR40;
                                }
                                else if (VAR2->VAR37 == VAR38)
                                {
                                    VAR19->VAR40 = 0;
                                }
                                else
                                {
                                    VAR19->VAR40 = FUN2(&VAR2->VAR36);
                                    VAR17 = VAR4->VAR22 != VAR4->VAR50 ? 4 : 1;
                                    VAR19->VAR41 = FUN7(&VAR2->VAR36, VAR17);
                                    VAR19->VAR42 = 0;
                                    if (VAR4->VAR28)
                                    {
                                        if (VAR4->VAR29)
                                        {
                                            if (VAR20)
                                                VAR19->VAR42 = VAR20->VAR42;
                                        }
                                        else if (VAR19->VAR41 || (!VAR4->VAR43 && !VAR4->VAR44 && (VAR2->VAR45 & 8)))
                                        {
                                            VAR19->VAR42 = FUN4(&VAR2->VAR36, VAR2->VAR46.VAR47->VAR48, VAR49, 1);
                                            VAR19->VAR42 = FUN5(VAR19->VAR42);
                                            if (!VAR19->VAR40)
                                            {
                                                VAR19->VAR11 = VAR19->VAR12 = 0;
                                            }
                                            else
                                            {
                                                if (VAR4->VAR30)
                                                {
                                                    if (VAR16)
                                                    {
                                                        VAR19->VAR11 = FUN6(VAR20->VAR11, VAR16);
                                                        VAR19->VAR12 = FUN6(VAR20->VAR12, VAR16);
                                                    }
                                                    else
                                                    {
                                                        VAR19->VAR11 = VAR20->VAR11;
                                                        VAR19->VAR12 = VAR20->VAR12;
                                                    }
                                                    else
                                                    {
                                                        VAR13 = FUN4(&VAR2->VAR36, VAR2->VAR46.VAR47->VAR48, VAR49, 1);
                                                        VAR12 += FUN5(VAR13);
                                                        VAR13 = FUN4(&VAR2->VAR36, VAR2->VAR46.VAR47->VAR48, VAR49, 1);
                                                        VAR11 += FUN5(VAR13);
                                                        VAR19->VAR11 = VAR11;
                                                        VAR19->VAR12 = VAR12;
                                                        VAR19++;
                                                        if (VAR20)
                                                            VAR20++;
                                                        VAR15 += VAR4->VAR22;
                                                        VAR14 += VAR21;
                                                        FUN8(&VAR2->VAR36);
                                                        return 0