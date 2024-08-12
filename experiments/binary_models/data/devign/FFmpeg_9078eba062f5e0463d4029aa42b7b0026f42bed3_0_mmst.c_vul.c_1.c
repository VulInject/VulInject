static VAR1 FUN1(VAR2 *VAR3)
{
    int VAR4;
    MMSSCPacketType VAR5 = -1;
    for (;;)
    {
        if ((VAR4 = FUN2(VAR3->VAR6, VAR3->VAR7, 8)) == 8)
        {
            if (FUN3(VAR3->VAR7 + 4) == 0xb00bface)
            {
                VAR3->VAR8 = VAR3->VAR7[3];
                VAR4 = FUN2(VAR3->VAR6, VAR3->VAR7 + 8, 4);
                if (VAR4 == 4)
                {
                    int VAR9 = FUN3(VAR3->VAR7 + 8) + 4;
                    int VAR10;
                    FUN4(NULL, "", VAR9);
                    if (VAR9 < 0 || VAR9 > sizeof(VAR3->VAR7) - 12)
                    {
                        FUN4(NULL, "", VAR9, sizeof(VAR3->VAR7) - 12);
                        VAR4 = FUN2(VAR3->VAR6, VAR3->VAR7 + 12, VAR9);
                        if (VAR4 == VAR9)
                        {
                            VAR5 = FUN5(VAR3->VAR7 + 36);
                        }
                        else
                        {
                            FUN4(NULL, "", VAR4);
                        }
                        else { FUN4(NULL, "", VAR4); }
                        else
                        {
                            int VAR9;
                            int VAR11;
                            int VAR12;
                            assert(VAR3->VAR13 == 0);
                            VAR12 = FUN5(VAR3->VAR7 + 6);
                            VAR9 = (VAR12 - 8) & 0xffff;
                            VAR3->VAR14 = FUN3(VAR3->VAR7);
                            VAR11 = VAR3->VAR7[4];
                            VAR3->VAR8 = VAR3->VAR7[5];
                            if (VAR9 < 0 || VAR9 > sizeof(VAR3->VAR7) - 8)
                            {
                                FUN4(NULL, "", VAR9, sizeof(VAR3->VAR7));
                                VAR3->VAR13 = VAR9;
                                VAR3->VAR15 = VAR3->VAR7;
                                VAR4 = FUN2(VAR3->VAR6, VAR3->VAR7, VAR9);
                                if (VAR4 != VAR9)
                                {
                                    FUN4(NULL, "", VAR4, VAR9);
                                }
                                else
                                {
                                    if (VAR11 == VAR3->VAR16)
                                    {
                                        VAR5 = VAR17;
                                        if (!VAR3->VAR18)
                                        {
                                            void *VAR19 = FUN6(VAR3->VAR20, VAR3->VAR21 + VAR3->VAR13);
                                            if (!VAR19)
                                            {
                                                FUN7(&VAR3->VAR20);
                                                return FUN8(VAR22);
                                                VAR3->VAR20 = VAR19;
                                                memcpy(VAR3->VAR20 + VAR3->VAR21, VAR3->VAR15, VAR3->VAR13);
                                                VAR3->VAR21 += VAR3->VAR13;
                                            }
                                            else if (VAR11 == VAR3->VAR23)
                                            {
                                                VAR5 = VAR24;
                                            }
                                            else
                                            {
                                                FUN4(NULL, "", VAR11);
                                                continue;
                                                if (VAR5 == VAR25)
                                                {
                                                    FUN9(VAR3);
                                                    continue;
                                                }
                                                else if (VAR5 == VAR26)
                                                {
                                                    FUN10(VAR3);
                                                }
                                                else if (VAR5 == VAR24)
                                                {
                                                    FUN11(VAR3);
                                                    return VAR5;
                                                }
                                                else
                                                {
                                                    if (VAR4 < 0)
                                                    {
                                                        FUN4(NULL, "", VAR4);
                                                        VAR5 = VAR27;
                                                    }
                                                    else
                                                    {
                                                        FUN4(NULL, "");
                                                        VAR5 = VAR28;
                                                        return VAR5;