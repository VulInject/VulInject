static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    int VAR12 = VAR6->VAR13;
    int VAR14, VAR15, VAR16;
    int VAR17 = 128;
    VAR10 *VAR18;
    VAR10 *VAR19;
    if (!VAR12)
        return 0;
    if (VAR12 < 4)
    {
        FUN2(VAR2, VAR20, "");
        return FUN3(VAR21);
    }
    VAR15 = FUN4(&VAR11[0]);
    VAR14 = FUN4(&VAR11[2]);
    VAR11 += 4;
    if (VAR14 > VAR12)
    {
        FUN2(VAR2, VAR20, "");
        return -1;
    }
    VAR8->VAR22.VAR23 = VAR15;
    if ((VAR16 = VAR2->FUN5(VAR2, &VAR8->VAR22)) < 0)
    {
        FUN2(VAR2, VAR20, "");
        return VAR16;
    }
    VAR18 = VAR8->VAR22.VAR3[0];
    VAR19 = VAR18 + VAR15;
    if (VAR14 == VAR15)
    {
        memcpy(VAR18, VAR11, VAR15);
        *VAR4 = 1;
        *(VAR24 *)VAR3 = VAR8->VAR22;
        return VAR12;
    }
    while (VAR18 < VAR19 && VAR11 - VAR6->VAR3 < VAR12)
    {
        int VAR25, VAR26, VAR13;
        uint8_t VAR27;
        VAR25 = *VAR11 >> 6;
        VAR27 = *VAR11 & 0x3F;
        VAR11++;
        switch (VAR25)
        {
        case 0:
            VAR26 = 4;
            break;
        case 1:
            VAR26 = 2;
            break;
        case 2:
            VAR26 = (VAR27 & 0x20) ? 1 : VAR27 + 1;
            break;
        default:
            VAR26 = VAR27 + 1;
            break;
        }
        if (VAR19 - VAR18 < VAR26)
            break;
        VAR13 = ((VAR25 == 2 && (VAR27 & 0x20)) || VAR25 == 3) ? 0 : VAR27 + 1;
        if ((VAR11 - VAR6->VAR3) + VAR13 > VAR12)
            break;
        switch (VAR25)
        {
        case 0:
            for (VAR27++; VAR27 > 0; VAR27--)
            {
                VAR25 = *VAR11++;
                VAR17 += (VAR25 & 0x3) - 2;
                VAR17 = FUN6(VAR17);
                *VAR18++ = VAR17;
                VAR17 += ((VAR25 >> 2) & 0x3) - 2;
                VAR17 = FUN6(VAR17);
                *VAR18++ = VAR17;
                VAR17 += ((VAR25 >> 4) & 0x3) - 2;
                VAR17 = FUN6(VAR17);
                *VAR18++ = VAR17;
                VAR17 += (VAR25 >> 6) - 2;
                VAR17 = FUN6(VAR17);
                *VAR18++ = VAR17;
            }
            break;
        case 1:
            for (VAR27++; VAR27 > 0; VAR27--)
            {
                VAR25 = *VAR11++;
                VAR17 += VAR28[VAR25 & 0xF];
                VAR17 = FUN6(VAR17);
                *VAR18++ = VAR17;
                VAR17 += VAR28[VAR25 >> 4];
                VAR17 = FUN6(VAR17);
                *VAR18++ = VAR17;
            }
            break;
        case 2:
            if (VAR27 & 0x20)
            {
                int8_t VAR29;
                VAR29 = VAR27;
                VAR29 <<= 3;
                VAR17 += VAR29 >> 3;
                VAR17 = FUN6(VAR17);
                *VAR18++ = VAR17;
            }
            else
            {
                memcpy(VAR18, VAR11, VAR26);
                VAR18 += VAR26;
                VAR11 += VAR26;
                VAR17 = VAR11[-1];
            }
            break;
        default:
            memset(VAR18, VAR17, VAR26);
            VAR18 += VAR26;
        }
    }
    VAR8->VAR22.VAR23 = VAR18 - VAR8->VAR22.VAR3[0];
    *VAR4 = 1;
    *(VAR24 *)VAR3 = VAR8->VAR22;
    return VAR12;
}