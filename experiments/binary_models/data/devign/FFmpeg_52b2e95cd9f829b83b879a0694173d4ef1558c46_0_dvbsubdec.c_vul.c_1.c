static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7, int VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = FUN2(VAR11, VAR4->VAR15);
    const VAR5 *VAR16 = VAR6 + VAR7;
    VAR5 *VAR17;
    int VAR18, VAR19;
    int VAR20;
    uint8_t VAR21[] = {0x0, 0x7, 0x8, 0xf};
    uint8_t VAR22[] = {0x00, 0x77, 0x88, 0xff};
    uint8_t VAR23[] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff};
    VAR5 *VAR24;
    FUN3(VAR2, "", VAR7, VAR8 ? "" : "");
    for (VAR20 = 0; VAR20 < VAR7; VAR20++)
    {
        if (VAR20 % 16 == 0)
            FUN4(VAR2, VAR25, "", VAR6 + VAR20);
        FUN4(VAR2, VAR25, "", VAR6[VAR20]);
        if (VAR20 % 16 == 15)
            FUN4(VAR2, VAR25, "");
    }
    if (VAR20 % 16)
        FUN4(VAR2, VAR25, "");
    if (VAR14 == 0)
        return;
    VAR17 = VAR14->VAR17;
    VAR18 = VAR4->VAR18;
    VAR19 = VAR4->VAR19;
    if ((VAR19 & 1) != VAR8)
        VAR19++;
    while (VAR6 < VAR16)
    {
        if (VAR18 > VAR14->VAR26 || VAR19 > VAR14->VAR27)
        {
            FUN4(VAR2, VAR28, "");
            return;
        }
        switch (*VAR6++)
        {
        case 0x10:
            if (VAR14->VAR29 == 8)
                VAR24 = VAR22;
            else if (VAR14->VAR29 == 4)
                VAR24 = VAR21;
            else
                VAR24 = NULL;
            VAR18 += FUN5(VAR17 + (VAR19 * VAR14->VAR26) + VAR18, VAR14->VAR26 - VAR18, &VAR6, VAR7, VAR9, VAR24);
            break;
        case 0x11:
            if (VAR14->VAR29 < 4)
            {
                FUN4(VAR2, VAR28, "", VAR14->VAR29);
                return;
            }
            if (VAR14->VAR29 == 8)
                VAR24 = VAR23;
            else
                VAR24 = NULL;
            VAR18 += FUN6(VAR17 + (VAR19 * VAR14->VAR26) + VAR18, VAR14->VAR26 - VAR18, &VAR6, VAR7, VAR9, VAR24);
            break;
        case 0x12:
            if (VAR14->VAR29 < 8)
            {
                FUN4(VAR2, VAR28, "", VAR14->VAR29);
                return;
            }
            VAR18 += FUN7(VAR17 + (VAR19 * VAR14->VAR26) + VAR18, VAR14->VAR26 - VAR18, &VAR6, VAR7, VAR9, NULL);
            break;
        case 0x20:
            VAR21[0] = (*VAR6) >> 4;
            VAR21[1] = (*VAR6++) & 0xf;
            VAR21[2] = (*VAR6) >> 4;
            VAR21[3] = (*VAR6++) & 0xf;
            break;
        case 0x21:
            for (VAR20 = 0; VAR20 < 4; VAR20++)
                VAR22[VAR20] = *VAR6++;
            break;
        case 0x22:
            for (VAR20 = 0; VAR20 < 16; VAR20++)
                VAR23[VAR20] = *VAR6++;
            break;
        case 0xf0:
            VAR18 = VAR4->VAR18;
            VAR19 += 2;
            break;
        default:
            FUN4(VAR2, VAR25, "", *(VAR6 - 1));
        }
    }
}