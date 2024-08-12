static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7, int *VAR8, const VAR6 *VAR9, int VAR10, int VAR11)
{
    uint32_t VAR12;
    int VAR13 = VAR4->VAR13;
    int VAR14 = 0;
    int VAR15, VAR16, VAR17, VAR18;
    VAR12 = FUN2(VAR9);
    if (FUN3(VAR12) >= 0)
    {
        *VAR7 = (VAR6 *)VAR9;
        *VAR8 = VAR10;
        return 0;
    }
    if (VAR4->VAR19 != 15 || strcmp(VAR4->VAR20, ""))
    {
        FUN4(VAR4, VAR21, "", VAR4->VAR19);
        return -1;
    }
    VAR12 = FUN2(VAR4->VAR20 + 11) & VAR22;
    VAR15 = VAR13 < (24000 + 32000) / 2;
    VAR16 = VAR13 < (12000 + 16000) / 2;
    VAR14 = (VAR12 >> 10) & 3;
    VAR13 = VAR23[VAR14] >> (VAR15 + VAR16);
    for (VAR17 = 2; VAR17 < 30; VAR17++)
    {
        VAR18 = VAR24[VAR15][2][VAR17 >> 1];
        VAR18 = (VAR18 * 144000) / (VAR13 << VAR15) + (VAR17 & 1);
        if (VAR18 == VAR10 + 4)
            break;
        if (VAR18 == VAR10 + 6)
            break;
    }
    if (VAR17 == 30)
    {
        FUN4(VAR4, VAR21, "");
        return -1;
    }
    VAR12 |= (VAR17 & 1) << 9;
    VAR12 |= (VAR17 >> 1) << 12;
    VAR12 |= (VAR18 == VAR10 + 4) << 16;
    *VAR8 = VAR18;
    *VAR7 = FUN5(VAR18 + VAR25);
    memcpy(*VAR7 + VAR18 - VAR10, VAR9, VAR10 + VAR25);
    if (VAR4->VAR26 == 2)
    {
        VAR6 *VAR27 = *VAR7 + VAR18 - VAR10;
        if (VAR15)
        {
            FUN6(int, VAR27[1], VAR27[2]);
            VAR12 |= (VAR27[1] & 0xC0) >> 2;
        }
        else
        {
            VAR12 |= VAR27[1] & 0x30;
        }
    }
    (*VAR7)[0] = VAR12 >> 24;
    (*VAR7)[1] = VAR12 >> 16;
    (*VAR7)[2] = VAR12 >> 8;
    (*VAR7)[3] = VAR12;
    return 1;
}