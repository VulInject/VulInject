static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7, int *VAR8, const VAR6 *VAR9, int VAR10, int VAR11)
{
    uint32_t VAR12, VAR13;
    int VAR14, VAR15;
    if (VAR4->VAR16 > VAR17)
    {
        FUN2(VAR4, VAR18, "");
        return -1;
    }
    VAR12 = FUN3(VAR9);
    VAR14 = (VAR12 >> 4) & 3;
    if (FUN4(VAR12) < 0 || (VAR12 & 0x60000) != 0x20000)
    {
    VAR19:
        *VAR7 = (VAR6 *)VAR9;
        *VAR8 = VAR10;
        FUN2(VAR4, VAR20, "", VAR12);
        return 0;
    }
    if (VAR4->VAR21 == 0)
    {
        VAR4->VAR21 = 15;
        VAR4->VAR22 = FUN5(VAR4->VAR21);
        strcpy(VAR4->VAR22, "");
        memcpy(VAR4->VAR22 + 11, VAR9, 4);
    }
    if (VAR4->VAR21 != 15)
    {
        FUN2(VAR4, VAR18, "");
        return -1;
    }
    VAR13 = FUN3(VAR4->VAR22 + 11);
    if ((VAR13 & VAR23) != (VAR12 & VAR23))
        goto VAR19;
    VAR15 = (VAR12 & 0x10000) ? 4 : 6;
    *VAR8 = VAR10 - VAR15;
    *VAR7 = FUN5(VAR10 - VAR15 + VAR24);
    memcpy(*VAR7, VAR9 + VAR15, VAR10 - VAR15 + VAR24);
    if (VAR4->VAR25 == 2)
    {
        if ((VAR12 & (3 << 19)) != 3 << 19)
        {
            (*VAR7)[1] &= 0x3F;
            (*VAR7)[1] |= VAR14 << 6;
            FUN6(int, (*VAR7)[1], (*VAR7)[2]);
        }
        else
        {
            (*VAR7)[1] &= 0x8F;
            (*VAR7)[1] |= VAR14 << 4;
        }
    }
    return 1;
}