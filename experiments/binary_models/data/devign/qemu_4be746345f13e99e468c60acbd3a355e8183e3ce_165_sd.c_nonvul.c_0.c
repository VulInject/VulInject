VAR1 FUN1(VAR2 *VAR3)
{
    uint8_t VAR4;
    int VAR5;
    if (!VAR3->VAR6 || !FUN2(VAR3->VAR6) || !VAR3->VAR7)
        return 0x00;
    if (VAR3->VAR8 != VAR9)
    {
        fprintf(VAR10, "");
        return 0x00;
    }
    if (VAR3->VAR11 & (VAR12 | VAR13))
        return 0x00;
    VAR5 = (VAR3->VAR14 & (1 << 30)) ? 512 : VAR3->VAR15;
    switch (VAR3->VAR16)
    {
    case 6:
        VAR4 = VAR3->VAR17[VAR3->VAR18++];
        if (VAR3->VAR18 >= 64)
            VAR3->VAR8 = VAR19;
        break;
    case 9:
    case 10:
        VAR4 = VAR3->VAR17[VAR3->VAR18++];
        if (VAR3->VAR18 >= 16)
            VAR3->VAR8 = VAR19;
        break;
    case 11:
        if (VAR3->VAR18 == 0)
            FUN3(VAR3->VAR20, VAR5);
        VAR4 = VAR3->VAR17[VAR3->VAR18++];
        if (VAR3->VAR18 >= VAR5)
        {
            VAR3->VAR20 += VAR5;
            VAR3->VAR18 = 0;
            if (VAR3->VAR20 + VAR5 > VAR3->VAR21)
            {
                VAR3->VAR11 |= VAR12;
                break;
            }
        }
        break;
    case 13:
        VAR4 = VAR3->VAR22[VAR3->VAR18++];
        if (VAR3->VAR18 >= sizeof(VAR3->VAR22))
            VAR3->VAR8 = VAR19;
        break;
    case 17:
        if (VAR3->VAR18 == 0)
            FUN3(VAR3->VAR20, VAR5);
        VAR4 = VAR3->VAR17[VAR3->VAR18++];
        if (VAR3->VAR18 >= VAR5)
            VAR3->VAR8 = VAR19;
        break;
    case 18:
        if (VAR3->VAR18 == 0)
            FUN3(VAR3->VAR20, VAR5);
        VAR4 = VAR3->VAR17[VAR3->VAR18++];
        if (VAR3->VAR18 >= VAR5)
        {
            VAR3->VAR20 += VAR5;
            VAR3->VAR18 = 0;
            if (VAR3->VAR20 + VAR5 > VAR3->VAR21)
            {
                VAR3->VAR11 |= VAR12;
                break;
            }
        }
        break;
    case 22:
        VAR4 = VAR3->VAR17[VAR3->VAR18++];
        if (VAR3->VAR18 >= 4)
            VAR3->VAR8 = VAR19;
        break;
    case 30:
        VAR4 = VAR3->VAR17[VAR3->VAR18++];
        if (VAR3->VAR18 >= 4)
            VAR3->VAR8 = VAR19;
        break;
    case 51:
        VAR4 = VAR3->VAR23[VAR3->VAR18++];
        if (VAR3->VAR18 >= sizeof(VAR3->VAR23))
            VAR3->VAR8 = VAR19;
        break;
    case 56:
        if (VAR3->VAR18 == 0)
            FUN4(VAR3->VAR20, VAR3->VAR15);
        VAR4 = VAR3->VAR17[VAR3->VAR18++];
        if (VAR3->VAR18 >= VAR3->VAR15)
            VAR3->VAR8 = VAR19;
        break;
    default:
        fprintf(VAR10, "");
        return 0x00;
    }
    return VAR4;
}