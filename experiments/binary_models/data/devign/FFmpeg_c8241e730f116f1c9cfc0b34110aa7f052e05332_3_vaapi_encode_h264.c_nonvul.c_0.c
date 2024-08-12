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
        VAR7->VAR21 = 2;
        VAR7->VAR22 = VAR13->VAR23;
        VAR7->VAR24 = VAR13->VAR25;
        VAR7->VAR26.VAR27.VAR28 = 1;
        VAR7->VAR26.VAR27.VAR29 = 1;
        VAR7->VAR26.VAR27.VAR30 = 1;
        VAR7->VAR26.VAR27.VAR31 = 4;
        VAR7->VAR26.VAR27.VAR32 = 0;
        if (VAR2->VAR33 != VAR4->VAR34 || VAR2->VAR35 != VAR4->VAR36)
        {
            VAR7->VAR37 = 1;
            VAR7->VAR38 = 0;
            VAR7->VAR39 = (VAR4->VAR34 - VAR2->VAR33) / 2;
            VAR7->VAR40 = 0;
            VAR7->VAR41 = (VAR4->VAR36 - VAR2->VAR35) / 2;
        }
        else
        {
            VAR7->VAR37 = 0;
        }
        VAR7->VAR42 = 1;
        if (VAR2->VAR43.VAR44 != 0)
        {
            VAR7->VAR45.VAR27.VAR46 = 1;
            if (VAR2->VAR43.VAR44 == VAR2->VAR43.VAR47)
            {
                VAR7->VAR48 = 1;
            }
            else
            {
                VAR7->VAR48 = 255;
                VAR7->VAR49 = VAR2->VAR43.VAR44;
                VAR7->VAR50 = VAR2->VAR43.VAR47;
            }
        }
        if (VAR2->VAR51 != VAR52 || VAR2->VAR53 != VAR54 || VAR2->VAR55 != VAR56)
        {
            VAR15->VAR57 = 1;
            VAR15->VAR58 = 5;
            VAR15->VAR59 = 0;
            VAR15->VAR60 = 1;
            VAR15->VAR61 = VAR2->VAR51;
            VAR15->VAR62 = VAR2->VAR53;
            VAR15->VAR63 = VAR2->VAR55;
        }
        VAR7->VAR64 = VAR2->VAR65;
        VAR7->VAR45.VAR27.VAR66 = 1;
        if (VAR2->VAR67.VAR44 > 0 && VAR2->VAR67.VAR47 > 0)
        {
            VAR7->VAR68 = VAR2->VAR67.VAR44;
            VAR7->VAR69 = 2 * VAR2->VAR67.VAR47;
            VAR15->VAR70 = 1;
        }
        else
        {
            VAR7->VAR68 = VAR2->VAR71.VAR44;
            VAR7->VAR69 = 2 * VAR2->VAR71.VAR47;
            VAR15->VAR70 = 0;
        }
        if (VAR4->VAR72 == VAR73)
        {
            VAR13->VAR74 = 1;
            VAR15->VAR75 = 1;
            VAR15->VAR76 = 0;
            VAR15->VAR77 = FUN2(FUN3(VAR2->VAR65) - 15 - 6, 4);
            VAR15->VAR78[0] = (VAR2->VAR65 >> VAR15->VAR77 + 6) - 1;
            VAR15->VAR79 = FUN2(FUN3(VAR4->VAR80.VAR81.VAR82) - 15 - 4, 4);
            VAR15->VAR83[0] = (VAR4->VAR80.VAR81.VAR82 >> VAR15->VAR79 + 4) - 1;
            VAR15->VAR84[0] = 0;
            VAR15->VAR85 = 23;
            VAR15->VAR86 = 23;
            VAR15->VAR87 = 7;
            VAR15->VAR88 = 0;
            VAR15->VAR89 = 90000 * (VAR90)VAR4->VAR80.VAR81.VAR91 / VAR4->VAR80.VAR81.VAR82;
            VAR15->VAR92 = 0;
        }
        else
        {
            VAR13->VAR74 = 0;
            VAR15->VAR75 = 0;
        }
        VAR7->VAR93 = VAR4->VAR94 * (VAR4->VAR95 + 1);
        VAR7->VAR96 = VAR7->VAR93;
        VAR7->VAR97 = VAR4->VAR95 + 1;
    }
    {
        VAR10->VAR98.VAR99 = VAR100;
        VAR10->VAR98.VAR101 = VAR102;
        for (VAR17 = 0; VAR17 < FUN4(VAR10->VAR103); VAR17++)
        {
            VAR10->VAR103[VAR17].VAR99 = VAR100;
            VAR10->VAR103[VAR17].VAR101 = VAR102;
        }
        VAR10->VAR104 = VAR100;
        VAR10->VAR105 = 0;
        VAR10->VAR18 = 0;
        VAR10->VAR106 = 0;
        VAR10->VAR107 = 0;
        VAR10->VAR108.VAR27.VAR109 = ((VAR2->VAR110 & 0xff) != 66);
        VAR10->VAR108.VAR27.VAR111 = 0;
        VAR10->VAR108.VAR27.VAR112 = 0;
        VAR10->VAR108.VAR27.VAR113 = ((VAR2->VAR110 & 0xff) >= 100);
        VAR10->VAR114 = VAR13->VAR115;
    }
    {
        VAR15->VAR116 = VAR2->VAR110 & 0xff;
        if (VAR2->VAR110 & VAR117)
            VAR15->VAR118 = 1;
        if (VAR2->VAR110 & VAR119)
            VAR15->VAR120 = 1;
    }
    return 0;
}