static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const VAR3 *VAR9 = VAR4 + VAR5;
    int VAR10, VAR11;
    int av_unused VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19;
    int VAR20;
    if (VAR5 < 10)
        return VAR21;
    VAR10 = *VAR4++;
    VAR14 = FUN2(VAR7, VAR10);
    if (!VAR14)
    {
        VAR14 = FUN3(sizeof(VAR13));
        if (!VAR14)
            return FUN4(VAR22);
        VAR14->VAR23 = VAR10;
        VAR14->VAR12 = -1;
        VAR14->VAR24 = VAR7->VAR25;
        VAR7->VAR25 = VAR14;
        VAR12 = ((*VAR4) >> 4) & 15;
        VAR19 = ((*VAR4++) >> 3) & 1;
        VAR14->VAR26 = FUN5(VAR4);
        VAR4 += 2;
        VAR14->VAR27 = FUN5(VAR4);
        VAR4 += 2;
        VAR20 = FUN6(VAR14->VAR26, VAR14->VAR27, VAR2->VAR28, VAR29, 0, VAR2);
        if (VAR20 < 0)
        {
            VAR14->VAR26 = VAR14->VAR27 = 0;
            return VAR20;
            if (VAR14->VAR26 * VAR14->VAR27 != VAR14->VAR5)
            {
                FUN7(VAR14->VAR30);
                VAR14->VAR5 = VAR14->VAR26 * VAR14->VAR27;
                VAR14->VAR30 = FUN8(VAR14->VAR5);
                if (!VAR14->VAR30)
                {
                    VAR14->VAR5 = VAR14->VAR26 = VAR14->VAR27 = 0;
                    return FUN4(VAR22);
                    VAR19 = 1;
                    VAR14->VAR31 = 0;
                    VAR14->VAR32 = 1 << (((*VAR4++) >> 2) & 7);
                    if (VAR14->VAR32 < 2 || VAR14->VAR32 > 8)
                    {
                        FUN9(VAR2, VAR33, "", VAR14->VAR32);
                        VAR14->VAR32 = 4;
                        VAR14->VAR34 = *VAR4++;
                        if (VAR14->VAR32 == 8)
                        {
                            VAR14->VAR35 = *VAR4++;
                            VAR4 += 1;
                        }
                        else
                        {
                            VAR4 += 1;
                            if (VAR14->VAR32 == 4)
                                VAR14->VAR35 = (((*VAR4++) >> 4) & 15);
                            else
                                VAR14->VAR35 = (((*VAR4++) >> 2) & 3);
                            FUN10(VAR2, "", VAR10, VAR14->VAR26, VAR14->VAR27);
                            if (VAR19)
                            {
                                memset(VAR14->VAR30, VAR14->VAR35, VAR14->VAR5);
                                FUN10(VAR2, "", VAR14->VAR35);
                                FUN11(VAR7, VAR14);
                                while (VAR4 + 5 < VAR9)
                                {
                                    VAR11 = FUN5(VAR4);
                                    VAR4 += 2;
                                    VAR16 = FUN12(VAR7, VAR11);
                                    if (!VAR16)
                                    {
                                        VAR16 = FUN3(sizeof(VAR15));
                                        if (!VAR16)
                                            return FUN4(VAR22);
                                        VAR16->VAR23 = VAR11;
                                        VAR16->VAR24 = VAR7->VAR36;
                                        VAR7->VAR36 = VAR16;
                                        VAR16->VAR37 = (*VAR4) >> 6;
                                        VAR18 = FUN3(sizeof(VAR17));
                                        if (!VAR18)
                                            return FUN4(VAR22);
                                        VAR18->VAR11 = VAR11;
                                        VAR18->VAR10 = VAR10;
                                        VAR18->VAR38 = FUN5(VAR4) & 0xfff;
                                        VAR4 += 2;
                                        VAR18->VAR39 = FUN5(VAR4) & 0xfff;
                                        VAR4 += 2;
                                        if ((VAR16->VAR37 == 1 || VAR16->VAR37 == 2) && VAR4 + 1 < VAR9)
                                        {
                                            VAR18->VAR40 = *VAR4++;
                                            VAR18->VAR35 = *VAR4++;
                                            VAR18->VAR41 = VAR14->VAR42;
                                            VAR14->VAR42 = VAR18;
                                            VAR18->VAR43 = VAR16->VAR42;
                                            VAR16->VAR42 = VAR18;
                                            return 0;