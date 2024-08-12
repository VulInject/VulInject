static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR4 *VAR7 = VAR2->VAR6;
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12 = 0, VAR13 = 0;
    VAR2->VAR6->VAR14->VAR15 = VAR2->VAR15;
    if (VAR2->VAR16)
        return;
    if (VAR7->VAR17[0] == VAR18 || VAR7->VAR17[1] == VAR18)
    {
        return;
    }
    VAR7->VAR14->VAR19 = 0;
    VAR7->VAR14->VAR20 = 0;
    if (VAR2->VAR21.VAR22)
    {
        switch (VAR2->VAR23)
        {
        case VAR24:
            break;
        case VAR25:
        case VAR26:
            VAR7->VAR14->VAR19 = 1;
            break;
        case VAR27:
        case VAR28:
            if (FUN2(VAR2))
                VAR7->VAR14->VAR19 = 1;
            else
                VAR7->VAR14->VAR19 = VAR2->VAR29;
            break;
        case VAR30:
        case VAR31:
            VAR7->VAR14->VAR20 = 1;
            break;
        case VAR32:
            VAR7->VAR14->VAR20 = 2;
            break;
        case VAR33:
            VAR7->VAR14->VAR20 = 4;
            break;
        }
        if ((VAR2->VAR34 & 3) && VAR2->VAR23 <= VAR28)
            VAR7->VAR14->VAR19 = (VAR2->VAR34 & (1 << 1)) != 0;
    }
    else
    {
        VAR7->VAR14->VAR19 = FUN2(VAR2);
    }
    VAR2->VAR29 = VAR7->VAR14->VAR19;
    if (VAR7->VAR17[0] != VAR7->VAR17[1])
    {
        VAR7->VAR14->VAR35 = VAR7->VAR17[0] < VAR7->VAR17[1];
    }
    else
    {
        if (VAR7->VAR14->VAR19 || VAR2->VAR21.VAR22)
        {
            if (VAR2->VAR23 == VAR27 || VAR2->VAR23 == VAR30)
                VAR7->VAR14->VAR35 = 1;
            else
                VAR7->VAR14->VAR35 = 0;
        }
        else
        {
            VAR7->VAR14->VAR35 = 0;
        }
    }
    if (VAR2->VAR36 && VAR2->VAR37 >= 0 && VAR2->VAR37 <= 6 && VAR2->VAR38 > 0 && VAR2->VAR38 < 3)
    {
        VAR39 *VAR40 = FUN3(VAR7->VAR14);
        if (!VAR40)
            return;
        switch (VAR2->VAR37)
        {
        case 0:
            VAR40->VAR41 = VAR42;
            break;
        case 1:
            VAR40->VAR41 = VAR43;
            break;
        case 2:
            VAR40->VAR41 = VAR44;
            break;
        case 3:
            if (VAR2->VAR45)
                VAR40->VAR41 = VAR46;
            else
                VAR40->VAR41 = VAR47;
            break;
        case 4:
            VAR40->VAR41 = VAR48;
            break;
        case 5:
            VAR40->VAR41 = VAR49;
            break;
        case 6:
            VAR40->VAR41 = VAR50;
            break;
        }
        if (VAR2->VAR38 == 2)
            VAR40->VAR51 = VAR52;
    }
    if (VAR2->VAR53 && (VAR2->VAR54 || VAR2->VAR55 || VAR2->VAR56))
    {
        double VAR57 = VAR2->VAR54 * 360 / (double)(1 << 16);
        VAR58 *VAR59 = FUN4(VAR7->VAR14, VAR60, sizeof(VAR61) * 9);
        if (!VAR59)
            return;
        FUN5((VAR61 *)VAR59->VAR62, VAR57);
        FUN6((VAR61 *)VAR59->VAR62, VAR2->VAR55, VAR2->VAR56);
    }
    if (VAR2->VAR21.VAR63 && VAR2->VAR64->VAR65 < VAR2->VAR21.VAR66)
    {
        VAR2->VAR64->VAR65 = VAR2->VAR21.VAR66;
        VAR2->VAR67 = 0;
    }
    if (VAR2->VAR64->VAR68 >= VAR69 && !VAR2->VAR21.VAR63)
    {
        VAR2->VAR64->VAR65 = VAR70 - 1;
        VAR2->VAR67 = 0;
    }
    VAR9 = 0;
    while (VAR2->VAR71[VAR9])
        VAR9++;
    assert(VAR9 <= VAR70);
    VAR2->VAR71[VAR9++] = VAR7;
    if (VAR7->VAR72 == 0)
        VAR7->VAR72 = VAR73;
    for (VAR8 = 0; VAR8 < VAR70; VAR8++)
    {
        VAR13 += VAR5->VAR74 < VAR2->VAR75[VAR8];
        VAR12 += VAR5->VAR74 == VAR76;
    }
    if (!VAR2->VAR77 && !VAR7->VAR14->VAR78 && VAR13 + VAR12 == VAR70 && VAR13 > 0)
    {
        VAR2->VAR77 = 2;
        if (VAR9 > 1)
            VAR2->VAR71[VAR9 - 2]->VAR77 = 2;
    }
    if (VAR2->VAR77 || VAR7->VAR14->VAR78)
    {
        for (VAR8 = 0; VAR8 < VAR70; VAR8++)
            VAR2->VAR75[VAR8] = VAR76;
        VAR13 = 0;
        VAR12 = VAR70;
    }
    VAR5 = VAR2->VAR71[0];
    VAR11 = 0;
    for (VAR8 = 1; VAR8 < VAR70 && VAR2->VAR71[VAR8] && !VAR2->VAR71[VAR8 - 1]->VAR77 && !VAR2->VAR71[VAR8]->VAR14->VAR78; VAR8++)
        if (VAR2->VAR71[VAR8]->VAR74 < VAR5->VAR74)
        {
            VAR5 = VAR2->VAR71[VAR8];
            VAR11 = VAR8;
        }
    if (VAR2->VAR64->VAR65 == 0 && (VAR2->VAR71[0]->VAR14->VAR78 || VAR2->VAR77))
        VAR2->VAR79 = VAR76;
    VAR10 = !VAR5->VAR14->VAR78 && !VAR2->VAR77 && (VAR5->VAR74 < VAR2->VAR79);
    if (VAR2->VAR21.VAR63 && VAR2->VAR64->VAR65 >= VAR2->VAR21.VAR66)
    {
    }
    else if (VAR10 && VAR9 - 1 == VAR2->VAR64->VAR65 && VAR2->VAR64->VAR65 < VAR70)
    {
        if (VAR12 + VAR13 < VAR70)
        {
            VAR2->VAR64->VAR65 = FUN7(VAR2->VAR64->VAR65, VAR13);
        }
        VAR2->VAR67 = 0;
    }
    else if (VAR2->VAR67 && ((VAR2->VAR79 != VAR76 && VAR5->VAR74 > VAR2->VAR79 + 2) || VAR7->VAR14->VAR15 == VAR80))
    {
        VAR2->VAR67 = 0;
        VAR2->VAR64->VAR65++;
    }
    if (VAR9 > VAR2->VAR64->VAR65)
    {
        VAR5->VAR72 &= ~VAR73;
        for (VAR8 = VAR11; VAR2->VAR71[VAR8]; VAR8++)
            VAR2->VAR71[VAR8] = VAR2->VAR71[VAR8 + 1];
    }
    memmove(VAR2->VAR75, &VAR2->VAR75[1], sizeof(*VAR2->VAR75) * (VAR70 - 1));
    VAR2->VAR75[VAR70 - 1] = VAR7->VAR74;
    if (!VAR10 && VAR9 > VAR2->VAR64->VAR65)
    {
        VAR2->VAR16 = VAR5;
        if (VAR5->VAR77)
        {
            if (VAR11 > 0)
            {
                VAR2->VAR79 = VAR5->VAR74;
                VAR2->VAR71[VAR11 - 1]->VAR77 = VAR5->VAR77;
            }
            else
            {
                VAR2->VAR79 = VAR76;
            }
        }
        else
        {
            if (VAR11 == 0 && VAR9 > 1 && VAR2->VAR71[0]->VAR14->VAR78)
            {
                VAR2->VAR79 = VAR76;
            }
            else
            {
                VAR2->VAR79 = VAR5->VAR74;
            }
        }
        VAR2->VAR77 = 0;
    }
    else
    {
        FUN8(VAR2->VAR64, VAR81, "");
    }
    if (VAR2->VAR16)
    {
        if (VAR2->VAR16->VAR82)
        {
            VAR2->VAR83 |= VAR84;
        }
        VAR2->VAR16->VAR82 |= !!(VAR2->VAR83 & VAR84);
    }
    if (VAR3 && !VAR2->VAR64->VAR85)
        FUN9(VAR2->VAR64);
}