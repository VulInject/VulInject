void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR2->VAR7 = VAR2->VAR8->VAR7;
    VAR2->VAR9 = VAR2->VAR8->VAR9;
    VAR2->VAR9 |= (1 << VAR10);
    VAR2->VAR11 = VAR2->VAR8->VAR11;
    VAR2->VAR12 = VAR2->VAR8->VAR12;
    VAR2->VAR13 = VAR2->VAR8->VAR13;
    VAR2->VAR14 = VAR2->VAR8->VAR14;
    VAR2->VAR15 = VAR2->VAR8->VAR15;
    VAR2->VAR16 = VAR2->VAR8->VAR16;
    VAR2->VAR17 = VAR2->VAR8->VAR17;
    VAR2->VAR18 = VAR2->VAR8->VAR18;
    VAR2->VAR19 = VAR2->VAR8->VAR19;
    VAR2->VAR20 = VAR2->VAR8->VAR20 << VAR2->VAR8->VAR21;
    VAR2->VAR21 = VAR2->VAR8->VAR21;
    VAR2->VAR22 = VAR2->VAR8->VAR22;
    VAR2->VAR23 = VAR2->VAR8->VAR23;
    VAR2->VAR24 = VAR2->VAR8->VAR24;
    VAR2->VAR25 = VAR2->VAR8->VAR25;
    VAR2->VAR26 = VAR2->VAR8->VAR26;
    VAR2->VAR27 = 0;
    VAR2->VAR28 = VAR2->VAR8->VAR28;
    VAR2->VAR29 = (VAR30)((1ULL << VAR2->VAR8->VAR28) - 1);
    if (VAR2->VAR8->VAR31 & VAR32)
    {
        VAR2->VAR29 |= 3ULL << 62;
    }
    VAR2->VAR33 = VAR2->VAR8->VAR33;
    VAR2->VAR34 = VAR2->VAR8->VAR34;
    VAR2->VAR35 = VAR2->VAR8->VAR35;
    VAR2->VAR36 = VAR2->VAR8->VAR36;
    VAR2->VAR37 = VAR2->VAR8->VAR37;
    VAR2->VAR38 = VAR2->VAR8->VAR38;
    VAR2->VAR39 = VAR2->VAR8->VAR39;
    VAR2->VAR40 = VAR2->VAR8->VAR40;
    VAR2->VAR41 = VAR2->VAR8->VAR41;
    VAR2->VAR42 = VAR2->VAR8->VAR42;
    VAR2->VAR43 = VAR2->VAR8->VAR43;
    VAR2->VAR44 = VAR2->VAR8->VAR44;
    VAR2->VAR45 = VAR2->VAR8->VAR45;
    VAR2->VAR46 = VAR2->VAR8->VAR46;
    VAR2->VAR47.VAR48 = VAR2->VAR8->VAR49;
    VAR2->VAR47.VAR50 = VAR2->VAR8->VAR51;
    VAR2->VAR47.VAR52 = VAR2->VAR8->VAR53;
    VAR2->VAR54 = VAR2->VAR8->VAR55;
    VAR2->VAR31 = VAR2->VAR8->VAR31;
    VAR2->VAR56 = (VAR57 << VAR58);
    VAR2->VAR56 |= (1 << VAR59);
    VAR2->VAR56 |= (1 << VAR60);
    VAR2->VAR61 |= 0x0000000F;
    if (VAR2->VAR11 & (1 << VAR62))
    {
        VAR2->VAR56 |= (1 << VAR63);
    }
    if (VAR2->VAR13 & (1 << VAR64))
    {
        VAR2->VAR56 |= (1 << VAR65);
    }
    if ((VAR2->VAR11 & (1 << VAR62)) && (VAR2->VAR24 & (1 << VAR66)))
    {
        VAR2->VAR56 |= (1 << VAR66);
    }
    if (VAR2->VAR67 & VAR68)
    {
        VAR2->VAR69 = (VAR2->VAR70.VAR71 - (VAR2->VAR67 & VAR72 ? 2 : 4));
    }
    else
    {
        VAR2->VAR69 = VAR2->VAR70.VAR71;
    }
    VAR2->VAR70.VAR71 = VAR2->VAR73;
    VAR2->VAR74 = VAR2->VAR75->VAR76 - 1;
    VAR2->VAR75->VAR77 = VAR2->VAR75->VAR76;
    VAR2->VAR78 = 0;
    VAR2->VAR79 = (VAR6->VAR80 & 0xFF) << VAR81;
    VAR2->VAR82 = (VAR6->VAR80 & 0x3FF);
    if (FUN4())
    {
        VAR2->VAR82 |= 0x40000000;
    }
    else
    {
        VAR2->VAR82 |= (VAR83)0x80000000;
    }
    if (VAR2->VAR13 & (1 << VAR84))
    {
        VAR2->VAR85 = 0x1fbf8000 >> 4;
    }
    VAR2->VAR86 = (VAR2->VAR14 & (1 << VAR87)) ? 0x3ff : 0xff;
    VAR2->VAR56 = (1 << VAR88) | (1 << VAR89);
    VAR2->VAR90 = 0xe0000000;
    {
        int VAR91;
        for (VAR91 = 0; VAR91 < 7; VAR91++)
        {
            VAR2->VAR92[VAR91] = 0;
            VAR2->VAR93[VAR91] = 0x80000000;
        }
        VAR2->VAR92[7] = 0;
        VAR2->VAR93[7] = 0;
    }
    VAR2->VAR94 = (1 << VAR95) | (0x1 << VAR96);
    FUN5(VAR2, 1);
    if (VAR2->VAR13 & (1 << VAR97))
    {
        int VAR91;
        for (VAR91 = 0; VAR91 < FUN6(VAR2->VAR98); VAR91++)
        {
            VAR2->VAR98[VAR91].VAR99 = VAR6->VAR80 << VAR100;
            VAR2->VAR98[VAR91].VAR101 = 1;
        }
        VAR2->VAR70.VAR101 = 1;
        VAR6->VAR102 = 1;
        if (VAR6->VAR80 == 0)
        {
            VAR2->VAR103->VAR104 |= (1 << VAR105);
            VAR2->VAR106 |= (1 << VAR107) | (1 << VAR108);
            VAR6->VAR102 = 0;
            VAR2->VAR70.VAR101 = 0;
            VAR2->VAR98[0].VAR101 = 0;
            VAR2->VAR70.VAR109 = (1 << VAR110);
            VAR2->VAR98[0].VAR109 = (1 << VAR110);
        }
    }
    if ((VAR2->VAR31 & VAR111) && (VAR2->VAR47.VAR48 & (1 << VAR112)))
    {
        VAR2->VAR56 |= (1 << VAR66);
    }
    if (VAR2->VAR13 & (1 << VAR113))
    {
        FUN7(VAR2);
    }
    FUN8(VAR2);
    FUN9(VAR2);
    FUN10(VAR2);
    VAR6->VAR114 = VAR115;
    if (FUN11())
    {
        VAR2->VAR70.VAR116[4] = -1;
    }