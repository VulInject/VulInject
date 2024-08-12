static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR9 *VAR10 = VAR4->VAR11;
    VAR12 *VAR13 = VAR4->VAR5;
    VAR14 *VAR15 = &VAR13->VAR16;
    int VAR17;
    {
        VAR7->VAR18 = 1;
        VAR7->VAR19 = 0;
        VAR7->VAR20 = VAR2->VAR21 * 3;
        VAR7->VAR22 = 0;
        VAR7->VAR23 = 0;
        VAR7->VAR24 = 0;
        VAR7->VAR25 = VAR4->VAR26;
        VAR7->VAR27 = VAR4->VAR28;
        VAR7->VAR29.VAR30.VAR31 = 1;
        VAR7->VAR29.VAR30.VAR32 = 0;
        VAR7->VAR29.VAR30.VAR33 = 0;
        VAR7->VAR29.VAR30.VAR34 = 0;
        VAR7->VAR35 = 0;
        VAR7->VAR36 = 2;
        VAR7->VAR37 = 0;
        VAR7->VAR38 = 3;
        VAR7->VAR39 = 3;
        VAR7->VAR40 = 3;
        VAR7->VAR41 = 0;
        VAR7->VAR42 = VAR2->VAR43;
        if (VAR2->VAR44.VAR45 > 0 && VAR2->VAR44.VAR46 > 0)
        {
            VAR7->VAR47 = VAR2->VAR44.VAR45;
            VAR7->VAR48 = VAR2->VAR44.VAR46;
        }
        else
        {
            VAR7->VAR47 = VAR2->VAR49.VAR45;
            VAR7->VAR48 = VAR2->VAR49.VAR46;
        }
        VAR7->VAR22 = VAR4->VAR50 * (VAR4->VAR51 + 1);
        VAR7->VAR23 = VAR7->VAR22;
        VAR7->VAR24 = VAR4->VAR51 + 1;
    }
    {
        VAR10->VAR52.VAR53 = VAR54;
        VAR10->VAR52.VAR55 = VAR56;
        for (VAR17 = 0; VAR17 < FUN2(VAR10->VAR57); VAR17++)
        {
            VAR10->VAR57[VAR17].VAR53 = VAR54;
            VAR10->VAR57[VAR17].VAR55 = VAR56;
        }
        VAR10->VAR58 = 0xff;
        VAR10->VAR59 = 0;
        VAR10->VAR60 = VAR13->VAR61;
        VAR10->VAR62 = 0;
        VAR10->VAR63 = 0;
        VAR10->VAR64 = 0;
        VAR10->VAR65 = 0;
        VAR10->VAR66 = 0;
        VAR10->VAR67 = 0;
        VAR10->VAR68 = 0;
        VAR10->VAR69 = 0;
        VAR10->VAR70.VAR30.VAR71 = 0;
        VAR10->VAR70.VAR30.VAR72 = 0;
        VAR10->VAR70.VAR30.VAR73 = VAR4->VAR74 != VAR75;
    }
    {
        VAR15->VAR76 = 5;
        VAR15->VAR77 = 5;
        VAR15->VAR78 = 0;
        VAR15->VAR79 = 0;
        VAR15->VAR80 = 1;
        VAR15->VAR81 = 0;
        VAR15->VAR82 = 1;
        for (VAR17 = 0; VAR17 < 32; VAR17++)
        {
            VAR15->VAR83[VAR17] = (VAR17 == VAR7->VAR18);
        }
        VAR15->VAR84 = 1;
        VAR15->VAR85 = 0;
        VAR15->VAR86 = 0;
        VAR15->VAR87 = 1;
        VAR15->VAR88 = 0;
        VAR15->VAR89 = 8;
        VAR15->VAR90 = 0;
        VAR15->VAR91[0] = 1;
        VAR15->VAR92[0] = VAR4->VAR51;
        VAR15->VAR93[0] = 0;
        VAR15->VAR94 = 0;
        VAR15->VAR95[0] = 1;
        VAR15->VAR96[0] = VAR4->VAR51;
        VAR15->VAR97[0] = 0;
        VAR15->VAR98 = 1;
        VAR15->VAR99 = VAR2->VAR49.VAR45;
        VAR15->VAR100 = VAR2->VAR49.VAR46;
        VAR15->VAR101 = 1;
        VAR15->VAR102 = 0;
        if (VAR2->VAR103 != VAR4->VAR26 || VAR2->VAR104 != VAR4->VAR28)
        {
            VAR15->VAR105 = 1;
            VAR15->VAR106 = 0;
            VAR15->VAR107 = (VAR4->VAR26 - VAR2->VAR103) / 2;
            VAR15->VAR108 = 0;
            VAR15->VAR109 = (VAR4->VAR28 - VAR2->VAR104) / 2;
        }
        else
        {
            VAR15->VAR105 = 0;
        }
        VAR15->VAR110 = 0;
        VAR15->VAR41 = 1;
        if (VAR2->VAR111.VAR45 != 0)
        {
            VAR15->VAR112 = 1;
            if (VAR2->VAR111.VAR45 == VAR2->VAR111.VAR46)
            {
                VAR15->VAR113 = 1;
            }
            else
            {
                VAR15->VAR113 = 255;
                VAR15->VAR114 = VAR2->VAR111.VAR45;
                VAR15->VAR115 = VAR2->VAR111.VAR46;
            }
        }
        if (1)
        {
            VAR15->VAR116 = 1;
            VAR15->VAR117 = 5;
            VAR15->VAR118 = 0;
            VAR15->VAR119 = 1;
            VAR15->VAR120 = VAR2->VAR121;
            VAR15->VAR122 = VAR2->VAR123;
            VAR15->VAR124 = VAR2->VAR125;
        }
    }
    return 0;
}