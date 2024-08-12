static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    int VAR9, VAR10;
    int VAR11 = VAR3;
    VAR12 *VAR13;
    DCTELEM __align16 VAR14[64];
    unsigned char *VAR15;
    unsigned char *VAR16;
    unsigned char *VAR17;
    int VAR18;
    int VAR19 = 0xdeadbeef, VAR20 = 0xdeadbeef;
    int VAR21, VAR22;
    int VAR23;
    VAR24 *VAR25;
    FUN2("", (VAR6 == 0) ? "" : (VAR6 == 1) ? ""
                                                                                                   : "");
    if (VAR6 == 0)
    {
        VAR13 = VAR2->VAR26;
        VAR15 = VAR2->VAR27.VAR28[0];
        VAR16 = VAR2->VAR29.VAR28[0];
        VAR17 = VAR2->VAR30.VAR28[0];
        VAR18 = VAR2->VAR27.VAR31[0];
        if (!VAR2->VAR32)
            VAR18 = -VAR18;
        VAR21 = 7 * VAR2->VAR27.VAR31[0];
        VAR22 = VAR5 * VAR2->VAR27.VAR31[0] + VAR4 - 8;
    }
    else if (VAR6 == 1)
    {
        VAR13 = VAR2->VAR33;
        VAR15 = VAR2->VAR27.VAR28[1];
        VAR16 = VAR2->VAR29.VAR28[1];
        VAR17 = VAR2->VAR30.VAR28[1];
        VAR18 = VAR2->VAR27.VAR31[1];
        if (!VAR2->VAR32)
            VAR18 = -VAR18;
        VAR21 = 7 * VAR2->VAR27.VAR31[1];
        VAR22 = VAR5 * VAR2->VAR27.VAR31[1] + VAR4 - 8;
    }
    else
    {
        VAR13 = VAR2->VAR33;
        VAR15 = VAR2->VAR27.VAR28[2];
        VAR16 = VAR2->VAR29.VAR28[2];
        VAR17 = VAR2->VAR30.VAR28[2];
        VAR18 = VAR2->VAR27.VAR31[2];
        if (!VAR2->VAR32)
            VAR18 = -VAR18;
        VAR21 = 7 * VAR2->VAR27.VAR31[2];
        VAR22 = VAR5 * VAR2->VAR27.VAR31[2] + VAR4 - 8;
    }
    for (VAR8 = 0; VAR8 < VAR5; VAR8 += 8)
    {
        for (VAR7 = 0; VAR7 < VAR4; VAR7 += 8, VAR11++)
        {
            if ((VAR11 < 0) || (VAR11 >= VAR2->VAR34))
            {
                FUN3(VAR2->VAR35, VAR36, "", VAR11);
                return;
            }
            if ((VAR2->VAR37[VAR11].VAR38 != VAR39) && !((VAR2->VAR35->VAR40 & VAR41) && VAR6))
            {
                if ((VAR2->VAR37[VAR11].VAR38 == VAR42) || (VAR2->VAR37[VAR11].VAR38 == VAR43))
                    VAR25 = VAR17;
                else
                    VAR25 = VAR16;
                VAR25 += VAR2->VAR37[VAR11].VAR44;
                VAR23 = 0;
                if ((VAR2->VAR37[VAR11].VAR38 > VAR45) && (VAR2->VAR37[VAR11].VAR38 != VAR42))
                {
                    int VAR46, VAR47;
                    VAR19 = VAR2->VAR37[VAR11].VAR19;
                    VAR20 = VAR2->VAR37[VAR11].VAR20;
                    if (VAR6)
                    {
                        VAR19 = (VAR19 >> 1) | (VAR19 & 1);
                        VAR20 = (VAR20 >> 1) | (VAR20 & 1);
                    }
                    VAR46 = (VAR19 >> 1) + VAR7;
                    VAR47 = (VAR20 >> 1) + VAR8;
                    if ((VAR19 == 0xbeef) || (VAR20 == 0xbeef))
                        FUN3(VAR2->VAR35, VAR36, "", VAR19, VAR20);
                    VAR23 = VAR19 & 0x01;
                    VAR25 += (VAR19 >> 1);
                    VAR23 |= (VAR20 & 0x01) << 1;
                    VAR25 += ((VAR20 >> 1) * VAR18);
                    if (VAR46 < 0 || VAR47 < 0 || VAR46 + 9 >= VAR4 || VAR47 + 9 >= VAR5)
                    {
                        VAR24 *VAR48 = VAR2->VAR49;
                        if (VAR18 < 0)
                            VAR48 -= 9 * VAR18;
                        else
                            VAR48 += 9 * VAR18;
                        FUN4(VAR48, VAR25, VAR18, 9, 9, VAR46, VAR47, VAR4, VAR5);
                        VAR25 = VAR48;
                    }
                }
                if (VAR2->VAR37[VAR11].VAR38 != VAR45)
                {
                    if (VAR23 != 3)
                    {
                        VAR2->VAR50.VAR51[1][VAR23](VAR15 + VAR2->VAR37[VAR11].VAR44, VAR25, VAR18, 8);
                    }
                    else
                    {
                        int VAR52 = (VAR19 ^ VAR20) >> 31;
                        VAR2->VAR50.VAR53[1](VAR15 + VAR2->VAR37[VAR11].VAR44, VAR25 - VAR52, VAR25 + VAR18 + 1 + VAR52, VAR18, 8);
                    }
                }
                FUN5("", VAR11, VAR2->VAR37[VAR11].VAR38, VAR2->VAR37[VAR11].VAR54[0], VAR13[0]);
                VAR2->VAR50.FUN6(VAR2->VAR37[VAR11].VAR54, VAR13, VAR2->VAR37[VAR11].VAR55, VAR14);
                if (VAR2->VAR37[VAR11].VAR38 == VAR45)
                {
                    VAR2->VAR50.FUN7(VAR14, VAR15 + VAR2->VAR37[VAR11].VAR44, VAR18);
                }
                else
                {
                    VAR2->VAR50.FUN8(VAR14, VAR15 + VAR2->VAR37[VAR11].VAR44, VAR18);
                }
                FUN5("", (VAR2->VAR37[VAR11].VAR38 == VAR45) ? "" : "");
                for (VAR9 = 0; VAR9 < 8; VAR9++)
                {
                    for (VAR10 = 0; VAR10 < 8; VAR10++)
                    {
                        FUN5("", *(VAR15 + VAR2->VAR37[VAR11].VAR44 + (VAR9 * VAR18 + VAR10)));
                    }
                    FUN5("");
                }
                FUN5("");
            }
            else
            {
                VAR2->VAR50.VAR56[1][0](VAR15 + VAR2->VAR37[VAR11].VAR44, VAR16 + VAR2->VAR37[VAR11].VAR44, VAR18, 8);
            }
        }
    }
    FUN9();