static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    static const uint32_t VAR5[4] = {48000, 96000, 44100, 32000};
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = (VAR4[0] & 0xe0) | (VAR4[1] << 8) | (VAR4[2] << 16);
    if (VAR7->VAR10 == VAR9)
        return 0;
    if (VAR2->VAR11 & VAR12)
        FUN2(VAR2, "", VAR4[0], VAR4[1], VAR4[2]);
    VAR7->VAR13 = 0;
    VAR2->VAR14 = 16 + (VAR4[1] >> 6 & 3) * 4;
    if (VAR2->VAR14 == 28)
    {
        FUN3(VAR2, VAR15, "", VAR2->VAR14);
        return VAR16;
    }
    VAR2->VAR17 = VAR2->VAR14 == 16 ? VAR18 : VAR19;
    VAR2->VAR20 = VAR2->VAR14;
    VAR2->VAR21 = VAR5[VAR4[1] >> 4 & 3];
    VAR2->VAR22 = 1 + (VAR4[1] & 7);
    VAR2->VAR23 = VAR2->VAR22 * VAR2->VAR21 * VAR2->VAR14;
    if (VAR2->VAR14 == 16)
    {
        VAR7->VAR24 = 1;
        VAR7->VAR25 = VAR2->VAR22 * 2;
    }
    else
    {
        switch (VAR2->VAR22)
        {
        case 1:
        case 2:
        case 4:
            VAR7->VAR25 = 4 * VAR2->VAR14 / 8;
            VAR7->VAR24 = 4 / VAR2->VAR22;
            VAR7->VAR26 = 1;
            break;
        case 8:
            VAR7->VAR25 = 8 * VAR2->VAR14 / 8;
            VAR7->VAR24 = 1;
            VAR7->VAR26 = 2;
            break;
        default:
            VAR7->VAR25 = 4 * VAR2->VAR22 * VAR2->VAR14 / 8;
            VAR7->VAR24 = 4;
            VAR7->VAR26 = VAR2->VAR22;
            break;
        }
    }
    if (VAR2->VAR11 & VAR12)
        FUN2(VAR2, "", VAR2->VAR22, VAR2->VAR14, VAR2->VAR21, VAR2->VAR23);
    VAR7->VAR10 = VAR9;
    return 0;