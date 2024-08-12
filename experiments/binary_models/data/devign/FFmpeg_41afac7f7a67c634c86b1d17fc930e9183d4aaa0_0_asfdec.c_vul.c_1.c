static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint32_t VAR8, VAR9;
    int VAR10 = 8;
    int VAR11, VAR12, VAR13, VAR14;
    VAR14 = 32768;
    if (VAR2->VAR15 > 0)
        VAR14 = (FUN2(VAR4) - VAR2->VAR16) % VAR2->VAR15 + 3;
    VAR11 = VAR12 = VAR13 = -1;
    while (VAR14-- > 0)
    {
        VAR11 = VAR12;
        VAR12 = VAR13;
        VAR13 = FUN3(VAR4);
        if (VAR11 == 0x82 && !VAR12 && !VAR13)
            break;
        if (VAR11 != 0x82)
        {
            if (VAR4->VAR17 == FUN4(VAR18))
                return FUN4(VAR18);
            if (!VAR4->VAR19)
                FUN5(VAR2, VAR20, "" VAR21 "", VAR11, FUN2(VAR4));
            if ((VAR11 & 0x8f) == 0x82)
            {
                if (VAR12 || VAR13)
                {
                    if (!VAR4->VAR19)
                        FUN5(VAR2, VAR20, "");
                    VAR11 = FUN3(VAR4);
                    VAR12 = FUN3(VAR4);
                    VAR10 += 3;
                }
                else
                {
                    FUN6(VAR4, -1, VAR22);
                    VAR6->VAR23 = VAR11;
                    VAR6->VAR24 = VAR12;
                    FUN7(VAR6->VAR23 >> 5, VAR8, VAR2->VAR15);
                    FUN7(VAR6->VAR23 >> 1, VAR9, 0);
                    FUN7(VAR6->VAR23 >> 3, VAR9, 0);
                    if (!VAR8 || VAR8 >= (1U << 29))
                    {
                        FUN5(VAR2, VAR20, "" VAR21 "", VAR8, FUN2(VAR4));
                        if (VAR9 >= VAR8)
                        {
                            FUN5(VAR2, VAR20, "" VAR21 "", VAR9, FUN2(VAR4));
                            VAR6->VAR25 = FUN8(VAR4);
                            FUN9(VAR4);
                            if (VAR6->VAR23 & 0x01)
                            {
                                VAR6->VAR26 = FUN3(VAR4);
                                VAR10++;
                                VAR6->VAR27 = VAR6->VAR26 & 0x3f;
                            }
                            else
                            {
                                VAR6->VAR27 = 1;
                                VAR6->VAR26 = 0x80;
                                VAR6->VAR28 = VAR8 - VAR9 - VAR10;
                                if (VAR8 < VAR6->VAR29.VAR30)
                                    VAR9 += VAR6->VAR29.VAR30 - VAR8;
                                VAR6->VAR31 = VAR9;
                                FUN10(VAR2, "", VAR2->VAR15, VAR6->VAR31, VAR6->VAR28);
                                return 0;