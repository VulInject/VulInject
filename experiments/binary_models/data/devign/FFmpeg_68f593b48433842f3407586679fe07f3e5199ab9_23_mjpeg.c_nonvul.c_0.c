static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11, *VAR12;
    int VAR13;
    VAR14 *VAR15 = VAR3;
    GetBitContext VAR16;
    uint32_t VAR17, VAR18, VAR19, VAR20, VAR21;
    uint32_t VAR22;
    *VAR4 = 0;
    if (VAR7 == 0)
        return 0;
    VAR12 = VAR6;
    VAR11 = VAR6 + VAR7;
VAR23:
    VAR9->VAR24 = 0;
    FUN2(&VAR16, VAR12, (VAR11 - VAR12) * 8);
    FUN3(&VAR16, 32);
    if (FUN4(&VAR16, 32) != FUN5(FUN6("")))
    {
        FUN7("");
        return 0;
    }
    VAR22 = FUN4(&VAR16, 32);
    FUN7("", VAR22);
    FUN3(&VAR16, 32);
    VAR21 = FUN4(&VAR16, 32);
    FUN7("", VAR21);
    if (VAR21)
        VAR9->VAR25 = 1;
    VAR17 = FUN4(&VAR16, 32);
    FUN7("", VAR17);
    if (VAR17)
    {
        FUN2(&VAR9->VAR26, VAR6 + VAR17, (VAR11 - (VAR6 + VAR17)) * 8);
        VAR9->VAR27 = VAR28;
        FUN8(VAR9);
    }
    VAR18 = FUN4(&VAR16, 32);
    FUN7("", VAR18);
    if (VAR18)
    {
        FUN2(&VAR9->VAR26, VAR6 + VAR18, (VAR11 - (VAR6 + VAR18)) * 8);
        VAR9->VAR27 = VAR29;
        FUN9(VAR9);
    }
    VAR19 = FUN4(&VAR16, 32);
    FUN7("", VAR19);
    if (VAR19)
    {
        FUN2(&VAR9->VAR26, VAR6 + VAR19, (VAR11 - (VAR6 + VAR19)) * 8);
        VAR9->VAR27 = VAR30;
        if (FUN10(VAR9) < 0)
            return -1;
    }
    VAR20 = FUN4(&VAR16, 32);
    FUN7("", VAR20);
    if (VAR20)
    {
        FUN2(&VAR9->VAR26, VAR6 + VAR20, VAR22 * 8);
        VAR9->VAR27 = VAR31;
        FUN11(VAR9);
    }
    FUN3(&VAR16, 32);
    if (VAR9->VAR25)
    {
        VAR9->VAR32 ^= 1;
        if (VAR9->VAR32 && VAR21)
        {
            VAR12 = VAR6 + VAR21;
            VAR21 = 0;
            goto VAR23;
        }
    }
    for (VAR13 = 0; VAR13 < 3; VAR13++)
    {
        VAR15->VAR3[VAR13] = VAR9->VAR33[VAR13];
        VAR15->VAR34[VAR13] = (VAR9->VAR25) ? VAR9->VAR34[VAR13] >> 1 : VAR9->VAR34[VAR13];
    }
    *VAR4 = sizeof(VAR14);
    VAR2->VAR35 = VAR9->VAR35;
    if (VAR9->VAR25)
        VAR2->VAR35 *= 2;
    VAR2->VAR36 = VAR9->VAR36;
    switch ((VAR9->VAR37[0] << 4) | VAR9->VAR38[0])
    {
    case 0x11:
        VAR2->VAR39 = VAR40;
        break;
    case 0x21:
        VAR2->VAR39 = VAR41;
        break;
    default:
    case 0x22:
        VAR2->VAR39 = VAR42;
        break;
    }
    return VAR12 - VAR6;
}