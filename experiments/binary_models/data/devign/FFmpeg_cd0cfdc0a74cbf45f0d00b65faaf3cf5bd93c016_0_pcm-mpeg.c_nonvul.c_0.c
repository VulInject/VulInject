static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    static const uint8_t VAR5[4] = {0, 16, 20, 24};
    static const uint32_t VAR6[16] = {0, VAR7, 0, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, 0, 0, 0, 0};
    static const uint8_t VAR17[16] = {0, 1, 0, 2, 3, 3, 4, 4, 5, 6, 7, 8, 0, 0, 0, 0};
    uint8_t VAR18 = VAR4[2] >> 4;
    if (VAR2->VAR19 & VAR20)
        FUN2(VAR2, "", VAR4[0], VAR4[1], VAR4[2], VAR4[3]);
    VAR2->VAR21 = VAR5[VAR4[3] >> 6];
    if (VAR2->VAR21 == 16 || VAR2->VAR21 == 24)
    {
        FUN3(VAR2, VAR22, "", VAR2->VAR21);
        return -1;
    }
    VAR2->VAR23 = VAR2->VAR21 == 16 ? VAR24 : VAR25;
    if (VAR2->VAR23 == VAR25)
        VAR2->VAR26 = VAR2->VAR21;
    switch (VAR4[2] & 0x0f)
    {
    case 1:
        VAR2->VAR27 = 48000;
        break;
    case 4:
        VAR2->VAR27 = 96000;
        break;
    case 5:
        VAR2->VAR27 = 192000;
        break;
    default:
        VAR2->VAR27 = 0;
        FUN3(VAR2, VAR22, "", VAR4[2] & 0x0f);
        return -1;
    }
    VAR2->VAR18 = VAR6[VAR18];
    VAR2->VAR17 = VAR17[VAR18];
    if (!VAR2->VAR17)
    {
        FUN3(VAR2, VAR22, "", VAR18);
        return -1;
    }
    VAR2->VAR28 = VAR2->VAR17 * VAR2->VAR27 * VAR2->VAR21;
    if (VAR2->VAR19 & VAR20)
        FUN2(VAR2, "", VAR2->VAR17, VAR2->VAR21, VAR2->VAR27, VAR2->VAR28);
    return 0;
}