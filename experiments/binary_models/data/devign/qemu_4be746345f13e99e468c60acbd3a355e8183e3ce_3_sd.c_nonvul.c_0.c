void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    int VAR4;
    if (!VAR2->VAR5 || !FUN2(VAR2->VAR5) || !VAR2->VAR6)
        return;
    if (VAR2->VAR7 != VAR8)
    {
        fprintf(VAR9, "");
        return;
    }
    if (VAR2->VAR10 & (VAR11 | VAR12))
        return;
    switch (VAR2->VAR13)
    {
    case 24:
        VAR2->VAR14[VAR2->VAR15++] = VAR3;
        if (VAR2->VAR15 >= VAR2->VAR16)
        {
            VAR2->VAR7 = VAR17;
            FUN3(VAR2->VAR18, VAR2->VAR15);
            VAR2->VAR19++;
            VAR2->VAR20[14] |= 0x40;
            VAR2->VAR7 = VAR21;
        }
        break;
    case 25:
        if (VAR2->VAR15 == 0)
        {
            if (VAR2->VAR18 + VAR2->VAR16 > VAR2->VAR22)
            {
                VAR2->VAR10 |= VAR11;
                break;
            }
            if (FUN4(VAR2, VAR2->VAR18))
            {
                VAR2->VAR10 |= VAR12;
                break;
            }
        }
        VAR2->VAR14[VAR2->VAR15++] = VAR3;
        if (VAR2->VAR15 >= VAR2->VAR16)
        {
            VAR2->VAR7 = VAR17;
            FUN3(VAR2->VAR18, VAR2->VAR15);
            VAR2->VAR19++;
            VAR2->VAR18 += VAR2->VAR16;
            VAR2->VAR15 = 0;
            VAR2->VAR20[14] |= 0x40;
            VAR2->VAR7 = VAR8;
        }
        break;
    case 26:
        VAR2->VAR14[VAR2->VAR15++] = VAR3;
        if (VAR2->VAR15 >= sizeof(VAR2->VAR23))
        {
            VAR2->VAR7 = VAR17;
            for (VAR4 = 0; VAR4 < sizeof(VAR2->VAR23); VAR4++)
                if ((VAR2->VAR23[VAR4] | 0x00) != VAR2->VAR14[VAR4])
                    VAR2->VAR10 |= VAR24;
            if (!(VAR2->VAR10 & VAR24))
                for (VAR4 = 0; VAR4 < sizeof(VAR2->VAR23); VAR4++)
                {
                    VAR2->VAR23[VAR4] |= 0x00;
                    VAR2->VAR23[VAR4] &= VAR2->VAR14[VAR4];
                }
            VAR2->VAR7 = VAR21;
        }
        break;
    case 27:
        VAR2->VAR14[VAR2->VAR15++] = VAR3;
        if (VAR2->VAR15 >= sizeof(VAR2->VAR20))
        {
            VAR2->VAR7 = VAR17;
            for (VAR4 = 0; VAR4 < sizeof(VAR2->VAR20); VAR4++)
                if ((VAR2->VAR20[VAR4] | VAR25[VAR4]) != (VAR2->VAR14[VAR4] | VAR25[VAR4]))
                    VAR2->VAR10 |= VAR24;
            if (VAR2->VAR20[14] & ~VAR2->VAR14[14] & 0x60)
                VAR2->VAR10 |= VAR24;
            if (!(VAR2->VAR10 & VAR24))
                for (VAR4 = 0; VAR4 < sizeof(VAR2->VAR20); VAR4++)
                {
                    VAR2->VAR20[VAR4] |= VAR25[VAR4];
                    VAR2->VAR20[VAR4] &= VAR2->VAR14[VAR4];
                }
            VAR2->VAR7 = VAR21;
        }
        break;
    case 42:
        VAR2->VAR14[VAR2->VAR15++] = VAR3;
        if (VAR2->VAR15 >= VAR2->VAR16)
        {
            VAR2->VAR7 = VAR17;
            FUN5(VAR2);
            VAR2->VAR7 = VAR21;
        }
        break;
    case 56:
        VAR2->VAR14[VAR2->VAR15++] = VAR3;
        if (VAR2->VAR15 >= VAR2->VAR16)
        {
            FUN6(VAR2->VAR18, VAR2->VAR15);
            VAR2->VAR7 = VAR21;
        }
        break;
    default:
        fprintf(VAR9, "");
        break;
    }
}