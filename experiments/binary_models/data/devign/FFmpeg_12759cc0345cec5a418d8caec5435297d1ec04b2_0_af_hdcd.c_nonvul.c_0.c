static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, const VAR6 *VAR7, int VAR8, int VAR9)
{
    uint32_t VAR10 = 0;
    int VAR11 = FUN2(VAR4->VAR12, VAR8);
    int VAR13;
    *VAR5 = 0;
    for (VAR13 = VAR11 - 1; VAR13 >= 0; VAR13--)
    {
        VAR10 |= (*VAR7 & 1) << VAR13;
        VAR7 += VAR9;
    }
    VAR4->VAR14 = (VAR4->VAR14 << VAR11) | VAR10;
    VAR4->VAR12 -= VAR11;
    if (VAR4->VAR12 > 0)
        return VAR11;
    VAR10 = (VAR4->VAR14 ^ VAR4->VAR14 >> 5 ^ VAR4->VAR14 >> 23);
    if (VAR4->VAR15)
    {
        switch (FUN3(VAR10, &VAR4->VAR16))
        {
        case VAR17:
            *VAR5 = 1;
            VAR4->VAR18++;
            break;
        case VAR19:
            *VAR5 = 1;
            VAR4->VAR20++;
            break;
        case VAR21:
            VAR4->VAR22++;
            FUN4(VAR2->VAR23, VAR24, "", VAR10 & 0xff, VAR2->VAR25);
            break;
        case VAR26:
            VAR4->VAR27++;
            FUN4(VAR2->VAR23, VAR24, "", VAR10 & 0xffff, (VAR10 & 0xff00) >> 8, ~VAR10 & 0xff, VAR2->VAR25);
            break;
        case VAR28:
            VAR4->VAR29++;
            FUN4(VAR2->VAR23, VAR24, "", VAR10, VAR2->VAR25);
        default:
            FUN4(VAR2->VAR23, VAR30, "");
            FUN5(0);
        }
        if (*VAR5)
            FUN6(VAR4);
        VAR4->VAR15 = 0;
    }
    if (VAR10 == 0x7e0fa005 || VAR10 == 0x7e0fa006)
    {
        VAR4->VAR12 = (VAR10 & 3) * 8;
        VAR4->VAR15 = 1;
        VAR4->VAR31++;
    }
    else
    {
        if (VAR10)
            VAR4->VAR12 = VAR32[VAR10 & 0xff];
        else
            VAR4->VAR12 = 31;
    }
    return VAR11;
}