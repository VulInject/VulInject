static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    int VAR8, VAR9, VAR10;
    VAR11 *VAR12;
    if (VAR2->VAR13 > 0xffff || VAR2->VAR14 > 0xffff)
    {
        FUN2(VAR2, VAR15, "");
        return -1;
    }
    VAR9 = FUN3(VAR2->VAR16, VAR2->VAR13, VAR2->VAR14);
    if (VAR4 < VAR9 + 45)
    {
        FUN2(VAR2, VAR15, "");
        return -1;
    }
    VAR7->VAR17 = VAR18;
    VAR7->VAR19 = 1;
    memset(VAR3, 0, 12);
    FUN4(VAR3 + 12, VAR2->VAR13);
    FUN4(VAR3 + 14, VAR2->VAR14);
    VAR3[17] = 0x20;
    switch (VAR2->VAR16)
    {
    case VAR20:
        VAR3[2] = 3;
        VAR3[16] = 8;
        break;
    case VAR21:
        VAR3[2] = 2;
        VAR3[16] = 16;
        break;
    case VAR22:
        VAR3[2] = 2;
        VAR3[16] = 24;
        break;
    default:
        return -1;
    }
    VAR8 = VAR3[16] >> 3;
    VAR12 = VAR3 + 18;
    VAR10 = FUN5(VAR12, VAR9, VAR7, VAR8, VAR2->VAR13, VAR2->VAR14);
    if (VAR10 >= 0)
        VAR3[2] |= 8;
    else
        VAR10 = FUN6(VAR12, VAR7, VAR8, VAR2->VAR13, VAR2->VAR14);
    VAR12 += VAR10;
    memcpy(VAR12, "", 26);
    return VAR12 + 26 - VAR3;
}