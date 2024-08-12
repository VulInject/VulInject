static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12;
    const VAR13 *VAR14 = VAR6->VAR3;
    int VAR15 = VAR6->VAR16;
    int VAR17;
    int VAR18;
    *VAR4 = 0;
    if (VAR8->VAR19 > 0)
    {
        VAR8->VAR19--;
        return FUN2(VAR6->VAR16, VAR2->VAR20);
        if (VAR8->VAR21 || VAR8->VAR22)
        {
            VAR8->VAR21 = 0;
            if (VAR2->VAR23 == VAR24 && VAR15 < VAR2->VAR20)
            {
                FUN3(VAR2, VAR25, "", VAR15, VAR2->VAR20);
                return VAR26;
                if (VAR2->VAR23 == VAR24)
                {
                    VAR8->VAR27 = VAR15 - VAR2->VAR20;
                    VAR15 = VAR2->VAR20;
                }
                else
                {
                    VAR8->VAR27 = VAR15 - FUN2(VAR15, VAR2->VAR20);
                    VAR15 = FUN2(VAR15, VAR2->VAR20);
                    VAR8->VAR28 = VAR15 << 3;
                    FUN4(VAR11, VAR14, VAR8->VAR28);
                    if (VAR2->VAR23 != VAR29)
                    {
                        VAR18 = FUN5(VAR11, 4);
                        FUN6(VAR11, 2);
                    }
                    else
                    {
                        VAR8->VAR30 = FUN5(VAR11, 6);
                        VAR18 = 0;
                        VAR17 = FUN5(VAR11, VAR8->VAR31);
                        if (VAR2->VAR23 != VAR24)
                        {
                            FUN6(VAR11, 3);
                            VAR8->VAR19 = FUN5(VAR11, 8);
                            FUN7(VAR2, "", VAR2->VAR32, VAR17);
                            if (VAR2->VAR23 != VAR29 && !VAR8->VAR22 && ((VAR8->VAR18 + 1) & 0xF) != VAR18)
                            {
                                FUN3(VAR2, VAR25, "" VAR33 "", VAR8->VAR18, VAR18);
                                VAR8->VAR18 = VAR18;
                                if (VAR17 > 0)
                                {
                                    int VAR34 = VAR8->VAR28 - FUN8(VAR11);
                                    if (VAR17 >= VAR34)
                                    {
                                        VAR17 = VAR34;
                                        VAR8->VAR21 = 1;
                                        FUN9(VAR8, VAR11, VAR17, 1);
                                        FUN7(VAR2, "", VAR8->VAR35 - VAR8->VAR36);
                                        if (!VAR8->VAR22)
                                            FUN10(VAR8, VAR3, VAR4);
                                    }
                                    else if (VAR8->VAR35 - VAR8->VAR36)
                                    {
                                        FUN7(VAR2, "", VAR8->VAR35 - VAR8->VAR36);
                                        if (VAR8->VAR22)
                                        {
                                            VAR8->VAR35 = 0;
                                            VAR8->VAR22 = 0;
                                        }
                                        else
                                        {
                                            int VAR37;
                                            VAR8->VAR28 = (VAR6->VAR16 - VAR8->VAR27) << 3;
                                            FUN4(VAR11, VAR6->VAR3, VAR8->VAR28);
                                            FUN6(VAR11, VAR8->VAR38);
                                            if (VAR8->VAR39 && FUN11(VAR8, VAR11) > VAR8->VAR31 && (VAR37 = FUN12(VAR11, VAR8->VAR31)) && VAR37 <= FUN11(VAR8, VAR11))
                                            {
                                                FUN9(VAR8, VAR11, VAR37, 0);
                                                if (!VAR8->VAR22)
                                                    VAR8->VAR21 = !FUN10(VAR8, VAR3, VAR4);
                                            }
                                            else if (!VAR8->VAR39 && VAR8->VAR35 > FUN8(&VAR8->VAR11))
                                            {
                                                VAR8->VAR21 = !FUN10(VAR8, VAR3, VAR4);
                                            }
                                            else
                                                VAR8->VAR21 = 1;
                                            if (VAR8->VAR21 && !VAR8->VAR22 && FUN11(VAR8, VAR11) > 0)
                                            {
                                                FUN9(VAR8, VAR11, FUN11(VAR8, VAR11), 0);
                                                VAR8->VAR38 = FUN8(VAR11) & 7;
                                                if (VAR8->VAR22)
                                                    return VAR26;
                                                return FUN8(VAR11) >> 3