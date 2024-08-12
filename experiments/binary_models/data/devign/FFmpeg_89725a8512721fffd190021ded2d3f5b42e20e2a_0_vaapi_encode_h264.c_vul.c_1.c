static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR9 *VAR10 = VAR4->VAR11;
    VAR12 *VAR13 = VAR4->VAR5;
    VAR14 *VAR15 = &VAR13->VAR16;
    int VAR17;
    {
        VAR7->VAR18 = 0;
        VAR7->VAR19 = VAR2->VAR20;
        VAR7->VAR21 = 1 + (VAR2->VAR22 > 0);
        VAR7->VAR23 = VAR13->VAR24;
        VAR7->VAR25 = VAR13->VAR26;
        VAR7->VAR27.VAR28.VAR29 = 1;
        VAR7->VAR27.VAR28.VAR30 = 1;
        VAR7->VAR27.VAR28.VAR31 = 1;
        VAR7->VAR27.VAR28.VAR32 = 4;
        VAR7->VAR27.VAR28.VAR33 = 0;
        if (VAR2->VAR34 != VAR4->VAR35 || VAR2->VAR36 != VAR4->VAR37)
        {
            VAR7->VAR38 = 1;
            VAR7->VAR39 = 0;
            VAR7->VAR40 = (VAR4->VAR35 - VAR2->VAR34) / 2;
            VAR7->VAR41 = 0;
            VAR7->VAR42 = (VAR4->VAR37 - VAR2->VAR36) / 2;
        }
        else
        {
            VAR7->VAR38 = 0;
        }
        VAR7->VAR43 = 1;
        if (VAR2->VAR44.VAR45 != 0)
        {
            VAR7->VAR46.VAR28.VAR47 = 1;
            if (VAR2->VAR44.VAR45 == VAR2->VAR44.VAR48)
            {
                VAR7->VAR49 = 1;
            }
            else
            {
                VAR7->VAR49 = 255;
                VAR7->VAR50 = VAR2->VAR44.VAR45;
                VAR7->VAR51 = VAR2->VAR44.VAR48;
            }
        }
        if (VAR2->VAR52 != VAR53 || VAR2->VAR54 != VAR55 || VAR2->VAR56 != VAR57)
        {
            VAR15->VAR58 = 1;
            VAR15->VAR59 = 5;
            VAR15->VAR60 = 0;
            VAR15->VAR61 = 1;
            VAR15->VAR62 = VAR2->VAR52;
            VAR15->VAR63 = VAR2->VAR54;
            VAR15->VAR64 = VAR2->VAR56;
        }
        VAR7->VAR46.VAR28.VAR65 = 1;
        VAR15->VAR66 = 1;
        VAR15->VAR67 = 0;
        VAR15->VAR68 = 0;
        VAR7->VAR46.VAR28.VAR69 = 16;
        VAR7->VAR46.VAR28.VAR70 = 16;
        VAR15->VAR71 = (VAR2->VAR22 > 0);
        VAR15->VAR72 = VAR7->VAR21;
        VAR7->VAR73 = VAR2->VAR74;
        VAR7->VAR46.VAR28.VAR75 = 1;
        if (VAR2->VAR76.VAR45 > 0 && VAR2->VAR76.VAR48 > 0)
        {
            VAR7->VAR77 = VAR2->VAR76.VAR48;
            VAR7->VAR78 = 2 * VAR2->VAR76.VAR45;
            VAR15->VAR79 = 1;
        }
        else
        {
            VAR7->VAR77 = VAR2->VAR80.VAR45;
            VAR7->VAR78 = 2 * VAR2->VAR80.VAR48;
            VAR15->VAR79 = 0;
        }
        if (VAR4->VAR81 == VAR82)
        {
            VAR13->VAR83 = 1;
            VAR15->VAR84 = 1;
            VAR15->VAR85 = 0;
            VAR15->VAR86 = FUN2(FUN3(VAR2->VAR74) - 15 - 6, 4);
            VAR15->VAR87[0] = (VAR2->VAR74 >> VAR15->VAR86 + 6) - 1;
            VAR15->VAR88 = FUN2(FUN3(VAR4->VAR89.VAR90.VAR91) - 15 - 4, 4);
            VAR15->VAR92[0] = (VAR4->VAR89.VAR90.VAR91 >> VAR15->VAR88 + 4) - 1;
            VAR15->VAR93[0] = 0;
            VAR15->VAR94 = 23;
            VAR15->VAR95 = 23;
            VAR15->VAR96 = 7;
            VAR15->VAR97 = 0;
            VAR15->VAR98 = 90000 * (VAR99)VAR4->VAR89.VAR90.VAR100 / VAR4->VAR89.VAR90.VAR91;
            VAR15->VAR101 = 0;
        }
        else
        {
            VAR13->VAR83 = 0;
            VAR15->VAR84 = 0;
        }
        VAR7->VAR102 = VAR4->VAR103 * (VAR4->VAR104 + 1);
        VAR7->VAR105 = VAR7->VAR102;
        VAR7->VAR106 = VAR4->VAR104 + 1;
    }
    {
        VAR10->VAR107.VAR108 = VAR109;
        VAR10->VAR107.VAR110 = VAR111;
        for (VAR17 = 0; VAR17 < FUN4(VAR10->VAR112); VAR17++)
        {
            VAR10->VAR112[VAR17].VAR108 = VAR109;
            VAR10->VAR112[VAR17].VAR110 = VAR111;
        }
        VAR10->VAR113 = VAR109;
        VAR10->VAR114 = 0;
        VAR10->VAR18 = 0;
        VAR10->VAR115 = 0;
        VAR10->VAR116 = 0;
        VAR10->VAR117.VAR28.VAR118 = ((VAR2->VAR119 & 0xff) != 66);
        VAR10->VAR117.VAR28.VAR120 = 0;
        VAR10->VAR117.VAR28.VAR121 = 0;
        VAR10->VAR117.VAR28.VAR122 = ((VAR2->VAR119 & 0xff) >= 100);
        VAR10->VAR123 = VAR13->VAR124;
    }
    {
        VAR15->VAR125 = VAR2->VAR119 & 0xff;
        if (VAR2->VAR119 & VAR126)
            VAR15->VAR127 = 1;
        if (VAR2->VAR119 & VAR128)
            VAR15->VAR129 = 1;
    }
    return 0;