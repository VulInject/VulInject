static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const int VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    const VAR3 *VAR13;
    VAR8 = FUN2(VAR4);
    FUN3(VAR7, "", VAR8);
    if (VAR8 > VAR5)
    {
        FUN4(VAR7, VAR14, "");
        return VAR15;
    }
    VAR12 = FUN2(VAR4 + 2);
    FUN3(VAR7, "", VAR4 + 4, VAR12);
    if (VAR12 > 1)
    {
        FUN4(VAR7, VAR14, "", VAR12);
        return VAR16;
    }
    VAR9 = FUN2(VAR4 + 8);
    VAR10 = FUN2(VAR4 + 10);
    if (VAR9 != VAR7->VAR9 || VAR10 != VAR7->VAR10)
    {
        FUN4(VAR7, VAR14, "", VAR7->VAR9, VAR7->VAR10, VAR9, VAR10);
        return VAR16;
    }
    VAR2->VAR17 = (VAR4[12] >> 2) & 3;
    VAR2->VAR18 = VAR4[17] & 0xf;
    if (VAR2->VAR18 > 2)
    {
        FUN4(VAR7, VAR14, "", VAR2->VAR18);
        return VAR15;
    }
    if (VAR7->VAR19)
        VAR2->VAR18 = 0;
    FUN3(VAR7, "", VAR2->VAR17);
    if (VAR2->VAR17 == 0)
    {
        VAR2->VAR20 = VAR2->VAR21;
    }
    else
    {
        VAR2->VAR20 = VAR2->VAR22;
        VAR2->VAR23->VAR24 = 1;
        VAR2->VAR23->VAR25 = VAR2->VAR17 == 1;
    }
    if (VAR2->VAR18)
    {
        VAR7->VAR26 = (VAR4[12] & 0xC0) == 0xC0 ? VAR27 : VAR28;
    }
    else
    {
        VAR7->VAR26 = (VAR4[12] & 0xC0) == 0xC0 ? VAR29 : VAR30;
    }
    VAR13 = VAR4 + 20;
    VAR11 = VAR4[19];
    FUN3(VAR7, "", VAR11);
    if (VAR11 & 2)
    {
        if (VAR4 + VAR5 - VAR13 < 64)
        {
            FUN4(VAR7, VAR14, "");
            return VAR15;
        }
        FUN5(VAR2->VAR31, VAR2->VAR32.VAR33, VAR13);
        VAR13 += 64;
    }
    else
    {
        memset(VAR2->VAR31, 4, 64);
    }
    if (VAR11 & 1)
    {
        if (VAR4 + VAR5 - VAR13 < 64)
        {
            FUN4(VAR7, VAR14, "");
            return VAR15;
        }
        FUN5(VAR2->VAR34, VAR2->VAR32.VAR33, VAR13);
    }
    else
    {
        memset(VAR2->VAR34, 4, 64);
    }
    return VAR8;
}