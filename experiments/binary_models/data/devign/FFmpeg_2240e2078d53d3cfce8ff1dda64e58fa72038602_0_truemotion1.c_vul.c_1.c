static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int VAR5 = 0;
    int VAR6;
    struct frame_header VAR7;
    uint8_t VAR8[128] = {0};
    const VAR9 *VAR10;
    VAR7.VAR11 = ((VAR2->VAR12[0] >> 5) | (VAR2->VAR12[0] << 3)) & 0x7f;
    if (VAR2->VAR12[0] < 0x10)
    {
        FUN2(VAR2->VAR13, VAR14, "", VAR2->VAR12[0]);
        for (VAR3 = 1; VAR3 < VAR7.VAR11; VAR3++)
            VAR8[VAR3 - 1] = VAR2->VAR12[VAR3] ^ VAR2->VAR12[VAR3 + 1];
        VAR7.VAR15 = VAR8[0];
        VAR7.VAR16 = VAR8[1];
        VAR7.VAR17 = VAR8[2];
        VAR7.VAR18 = FUN3(&VAR8[3]);
        VAR7.VAR19 = FUN3(&VAR8[5]);
        VAR7.VAR20 = FUN3(&VAR8[7]);
        VAR7.VAR21 = VAR8[9];
        VAR7.VAR22 = VAR8[10];
        VAR7.VAR23 = VAR8[11];
        VAR7.VAR24 = VAR8[12];
        if (VAR7.VAR21 >= 2)
        {
            if (VAR7.VAR22 > 3)
            {
                FUN2(VAR2->VAR13, VAR14, "", VAR7.VAR22);
            }
            else if ((VAR7.VAR22 == 2) || (VAR7.VAR22 == 3))
            {
                VAR2->VAR23 = VAR7.VAR23;
                if (!(VAR2->VAR23 & VAR25))
                    VAR2->VAR23 |= VAR26;
            }
            else
                VAR2->VAR23 = VAR26;
        }
        else
            VAR2->VAR23 = VAR26;
        if (VAR2->VAR23 & VAR27)
        {
            FUN4(VAR2->VAR13, "");
            return VAR28;
        }
        else
        {
            VAR2->VAR29 = VAR7.VAR19;
            VAR2->VAR30 = VAR7.VAR18;
            if (VAR7.VAR22 < 2)
            {
                if ((VAR2->VAR29 < 213) && (VAR2->VAR30 >= 176))
                {
                    VAR2->VAR23 |= VAR31;
                    FUN4(VAR2->VAR13, "");
                    if (VAR7.VAR15 >= 17)
                    {
                        FUN2(VAR2->VAR13, VAR14, "", VAR7.VAR15);
                        if ((VAR7.VAR16 != VAR2->VAR32) || (VAR7.VAR17 != VAR2->VAR33))
                            FUN5(VAR2, VAR7.VAR16);
                        if ((VAR7.VAR15 & 1) && VAR7.VAR22)
                            VAR10 = VAR34;
                        else
                        {
                            if (VAR7.VAR17 > 0 && VAR7.VAR17 < 4)
                                VAR10 = VAR35[VAR7.VAR17 - 1];
                            else
                            {
                                FUN2(VAR2->VAR13, VAR14, "", VAR7.VAR17);
                                if (VAR36[VAR7.VAR15].VAR37 == VAR38)
                                {
                                    VAR6 = VAR39;
                                    VAR5 = 1;
                                }
                                else
                                    VAR6 = VAR40;
                                VAR2->VAR29 >>= VAR5;
                                if (VAR2->VAR29 != VAR2->VAR13->VAR41 || VAR2->VAR30 != VAR2->VAR13->VAR42 || VAR6 != VAR2->VAR13->VAR43)
                                {
                                    FUN6(VAR2->VAR44);
                                    VAR2->VAR13->VAR45 = (VAR46){1 << VAR5, 1};
                                    VAR2->VAR13->VAR43 = VAR6;
                                    if ((VAR4 = FUN7(VAR2->VAR13, VAR2->VAR29, VAR2->VAR30)) < 0)
                                        return VAR4;
                                    FUN8(&VAR2->VAR47, &VAR2->VAR48, VAR2->VAR13->VAR41 * sizeof(unsigned int));
                                    VAR2->VAR49 = ((VAR2->VAR13->VAR41 >> (2 - VAR5)) + 7) >> 3;
                                    if ((VAR7.VAR16 != VAR2->VAR32) || (VAR7.VAR17 != VAR2->VAR33))
                                    {
                                        if (VAR36[VAR7.VAR15].VAR37 == VAR38)
                                            FUN9(VAR2, VAR10);
                                        else if (VAR2->VAR13->VAR43 == VAR40)
                                            FUN10(VAR2, VAR10);
                                        else
                                            FUN11(VAR2, VAR10);
                                        VAR2->VAR50 = VAR2->VAR12 + VAR7.VAR11;
                                        if (VAR2->VAR23 & VAR26)
                                        {
                                            VAR2->VAR51 = VAR2->VAR50;
                                        }
                                        else
                                        {
                                            VAR2->VAR51 = VAR2->VAR50 + (VAR2->VAR49 * (VAR2->VAR13->VAR42 >> 2));
                                            VAR2->VAR52 = VAR2->VAR53 - (VAR2->VAR51 - VAR2->VAR12);
                                            VAR2->VAR32 = VAR7.VAR16;
                                            VAR2->VAR33 = VAR7.VAR17;
                                            VAR2->VAR15 = VAR7.VAR15;
                                            VAR2->VAR54 = VAR36[VAR7.VAR15].VAR54;
                                            VAR2->VAR55 = VAR36[VAR7.VAR15].VAR55;
                                            VAR2->VAR56 = VAR36[VAR7.VAR15].VAR56;
                                            if (VAR2->VAR13->VAR57 & VAR58)
                                                FUN2(VAR2->VAR13, VAR59, "", VAR2->VAR32, VAR2->VAR33, VAR2->VAR15, VAR2->VAR54, VAR2->VAR55, VAR2->VAR56, VAR2->VAR23 & VAR26 ? "" : "", VAR2->VAR23 & VAR25 ? "" : "", VAR2->VAR23 & VAR27 ? "" : "", VAR2->VAR23 & VAR31 ? "" : "");
                                            return VAR7.VAR11