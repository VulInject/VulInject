static void FUN1(VAR1 *VAR2, int VAR3)
{
    const VAR4 *VAR5 = VAR2->VAR6.VAR5;
    VAR7 *VAR8 = VAR2->VAR9;
    VAR7 *VAR10 = VAR2->VAR9;
    int VAR11, VAR12, VAR13, VAR14;
    int VAR15 = 0, VAR16 = 0;
    VAR2->VAR9->VAR17->VAR18 = VAR2->VAR18;
    if (VAR2->VAR19)
        return;
    if (VAR10->VAR20[0] == VAR21 || VAR10->VAR20[1] == VAR21)
    {
        return;
    }
    VAR10->VAR17->VAR22 = 0;
    VAR10->VAR17->VAR23 = 0;
    if (VAR5->VAR24)
    {
        VAR25 *VAR26 = &VAR2->VAR27.VAR28;
        switch (VAR26->VAR29)
        {
        case VAR30:
            break;
        case VAR31:
        case VAR32:
            VAR10->VAR17->VAR22 = 1;
            break;
        case VAR33:
        case VAR34:
            if (FUN2(VAR2))
                VAR10->VAR17->VAR22 = 1;
            else
                VAR10->VAR17->VAR22 = VAR2->VAR35;
            break;
        case VAR36:
        case VAR37:
            VAR10->VAR17->VAR23 = 1;
            break;
        case VAR38:
            VAR10->VAR17->VAR23 = 2;
            break;
        case VAR39:
            VAR10->VAR17->VAR23 = 4;
            break;
        }
        if ((VAR26->VAR40 & 3) && VAR26->VAR29 <= VAR34)
            VAR10->VAR17->VAR22 = (VAR26->VAR40 & (1 << 1)) != 0;
    }
    else
    {
        VAR10->VAR17->VAR22 = FUN2(VAR2);
    }
    VAR2->VAR35 = VAR10->VAR17->VAR22;
    if (VAR10->VAR20[0] != VAR10->VAR20[1])
    {
        VAR10->VAR17->VAR41 = VAR10->VAR20[0] < VAR10->VAR20[1];
    }
    else
    {
        if (VAR10->VAR17->VAR22 || VAR5->VAR24)
        {
            if (VAR2->VAR27.VAR28.VAR29 == VAR33 || VAR2->VAR27.VAR28.VAR29 == VAR36)
                VAR10->VAR17->VAR41 = 1;
            else
                VAR10->VAR17->VAR41 = 0;
        }
        else
        {
            VAR10->VAR17->VAR41 = 0;
        }
    }
    if (VAR2->VAR27.VAR42.VAR43 && VAR2->VAR27.VAR42.VAR44 >= 0 && VAR2->VAR27.VAR42.VAR44 <= 6 && VAR2->VAR27.VAR42.VAR45 > 0 && VAR2->VAR27.VAR42.VAR45 < 3)
    {
        VAR46 *VAR47 = &VAR2->VAR27.VAR42;
        VAR48 *VAR49 = FUN3(VAR10->VAR17);
        if (!VAR49)
            return;
        switch (VAR47->VAR44)
        {
        case 0:
            VAR49->VAR50 = VAR51;
            break;
        case 1:
            VAR49->VAR50 = VAR52;
            break;
        case 2:
            VAR49->VAR50 = VAR53;
            break;
        case 3:
            if (VAR47->VAR54)
                VAR49->VAR50 = VAR55;
            else
                VAR49->VAR50 = VAR56;
            break;
        case 4:
            VAR49->VAR50 = VAR57;
            break;
        case 5:
            VAR49->VAR50 = VAR58;
            break;
        case 6:
            VAR49->VAR50 = VAR59;
            break;
        }
        if (VAR47->VAR45 == 2)
            VAR49->VAR60 = VAR61;
    }
    if (VAR2->VAR27.VAR62.VAR43 && (VAR2->VAR27.VAR62.VAR63 || VAR2->VAR27.VAR62.VAR64 || VAR2->VAR27.VAR62.VAR65))
    {
        VAR66 *VAR67 = &VAR2->VAR27.VAR62;
        double VAR68 = VAR67->VAR63 * 360 / (double)(1 << 16);
        VAR69 *VAR70 = FUN4(VAR10->VAR17, VAR71, sizeof(VAR72) * 9);
        if (!VAR70)
            return;
        FUN5((VAR72 *)VAR70->VAR73, VAR68);
        FUN6((VAR72 *)VAR70->VAR73, VAR67->VAR64, VAR67->VAR65);
    }
    if (VAR2->VAR27.VAR74.VAR43)
    {
        VAR69 *VAR75 = FUN4(VAR10->VAR17, VAR76, sizeof(VAR77));
        if (!VAR75)
            return;
        *VAR75->VAR73 = VAR2->VAR27.VAR74.VAR78;
        VAR2->VAR27.VAR74.VAR43 = 0;
    }
    if (VAR2->VAR27.VAR79.VAR79)
    {
        VAR80 *VAR81 = &VAR2->VAR27.VAR79;
        VAR69 *VAR75 = FUN4(VAR10->VAR17, VAR82, VAR81->VAR83);
        if (!VAR75)
            return;
        memcpy(VAR75->VAR73, VAR81->VAR79, VAR81->VAR83);
        FUN7(&VAR81->VAR79);
        VAR81->VAR83 = 0;
    }
    if (VAR5->VAR84 || VAR2->VAR85->VAR86 >= VAR87)
    {
        VAR2->VAR85->VAR88 = FUN8(VAR2->VAR85->VAR88, VAR5->VAR89);
    }
    VAR12 = 0;
    while (VAR2->VAR90[VAR12])
        VAR12++;
    assert(VAR12 <= VAR91);
    VAR2->VAR90[VAR12++] = VAR10;
    if (VAR10->VAR92 == 0)
        VAR10->VAR92 = VAR93;
    for (VAR11 = 0; VAR11 < VAR91; VAR11++)
    {
        VAR16 += VAR8->VAR94 < VAR2->VAR95[VAR11];
        VAR15 += VAR8->VAR94 == VAR96;
    }
    if (!VAR2->VAR97 && !VAR10->VAR17->VAR98 && VAR16 + VAR15 == VAR91 && VAR16 > 0)
    {
        VAR2->VAR97 = 2;
        if (VAR12 > 1)
            VAR2->VAR90[VAR12 - 2]->VAR97 = 2;
    }
    if (VAR2->VAR97 || VAR10->VAR17->VAR98)
    {
        for (VAR11 = 0; VAR11 < VAR91; VAR11++)
            VAR2->VAR95[VAR11] = VAR96;
        VAR16 = 0;
        VAR15 = VAR91;
    }
    VAR8 = VAR2->VAR90[0];
    VAR14 = 0;
    for (VAR11 = 1; VAR11 < VAR91 && VAR2->VAR90[VAR11] && !VAR2->VAR90[VAR11 - 1]->VAR97 && !VAR2->VAR90[VAR11]->VAR17->VAR98; VAR11++)
        if (VAR2->VAR90[VAR11]->VAR94 < VAR8->VAR94)
        {
            VAR8 = VAR2->VAR90[VAR11];
            VAR14 = VAR11;
        }
    if (VAR2->VAR85->VAR88 == 0 && (VAR2->VAR90[0]->VAR17->VAR98 || VAR2->VAR97))
        VAR2->VAR99 = VAR96;
    VAR13 = !VAR8->VAR17->VAR98 && !VAR2->VAR97 && (VAR8->VAR94 < VAR2->VAR99);
    if (VAR5->VAR84 && VAR2->VAR85->VAR88 >= VAR5->VAR89)
    {
    }
    else if (VAR13 && VAR12 - 1 == VAR2->VAR85->VAR88 && VAR2->VAR85->VAR88 < VAR91)
    {
        if (VAR15 + VAR16 < VAR91)
        {
            VAR2->VAR85->VAR88 = FUN8(VAR2->VAR85->VAR88, VAR16);
        }
    }
    else if (!VAR2->VAR85->VAR88 && ((VAR2->VAR99 != VAR96 && VAR8->VAR94 > VAR2->VAR99 + 2) || VAR10->VAR17->VAR18 == VAR100))
    {
        VAR2->VAR85->VAR88++;
    }
    if (VAR12 > VAR2->VAR85->VAR88)
    {
        VAR8->VAR92 &= ~VAR93;
        for (VAR11 = VAR14; VAR2->VAR90[VAR11]; VAR11++)
            VAR2->VAR90[VAR11] = VAR2->VAR90[VAR11 + 1];
    }
    memmove(VAR2->VAR95, &VAR2->VAR95[1], sizeof(*VAR2->VAR95) * (VAR91 - 1));
    VAR2->VAR95[VAR91 - 1] = VAR10->VAR94;
    if (!VAR13 && VAR12 > VAR2->VAR85->VAR88)
    {
        VAR2->VAR19 = VAR8;
        if (VAR8->VAR97)
        {
            if (VAR14 > 0)
            {
                VAR2->VAR99 = VAR8->VAR94;
                VAR2->VAR90[VAR14 - 1]->VAR97 = VAR8->VAR97;
            }
            else
            {
                VAR2->VAR99 = VAR96;
            }
        }
        else
        {
            if (VAR14 == 0 && VAR12 > 1 && VAR2->VAR90[0]->VAR17->VAR98)
            {
                VAR2->VAR99 = VAR96;
            }
            else
            {
                VAR2->VAR99 = VAR8->VAR94;
            }
        }
        VAR2->VAR97 = 0;
    }
    else
    {
        FUN9(VAR2->VAR85, VAR101, "");
    }
    if (VAR2->VAR19)
    {
        if (VAR2->VAR19->VAR102)
        {
            VAR2->VAR103 |= VAR104;
        }
        VAR2->VAR19->VAR102 |= !!(VAR2->VAR103 & VAR104);
    }
    if (VAR3 && !VAR2->VAR85->VAR105)
    {
        FUN10(VAR2->VAR85);
        if (VAR2->VAR85->VAR106 & VAR107)
            VAR2->VAR3 = 1;
    }
}