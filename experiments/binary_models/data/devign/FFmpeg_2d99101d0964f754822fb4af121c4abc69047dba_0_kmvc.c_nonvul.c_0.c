static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *const VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    VAR12 *VAR13, *VAR14;
    int VAR15, VAR16;
    int VAR17;
    int VAR18;
    int VAR19;
    const VAR12 *VAR20 = FUN2(VAR6, VAR21, &VAR19);
    FUN3(&VAR8->VAR22, VAR6->VAR3, VAR6->VAR23);
    if ((VAR16 = FUN4(VAR2, VAR11, 0)) < 0)
        return VAR16;
    VAR17 = FUN5(&VAR8->VAR22);
    if (FUN6(&VAR8->VAR22) == 127)
    {
        FUN7(&VAR8->VAR22, 3);
        for (VAR15 = 0; VAR15 < 127; VAR15++)
        {
            VAR8->VAR20[VAR15 + (VAR17 & 0x81)] = 0xFFU << 24 | FUN8(&VAR8->VAR22);
            FUN7(&VAR8->VAR22, 1);
        }
        FUN9(&VAR8->VAR22, -127 * 4 - 3, VAR24);
    }
    if (VAR17 & VAR25)
    {
        VAR11->VAR26 = 1;
        VAR11->VAR27 = VAR28;
    }
    else
    {
        VAR11->VAR26 = 0;
        VAR11->VAR27 = VAR29;
    }
    if (VAR17 & VAR30)
    {
        VAR11->VAR31 = 1;
        for (VAR15 = 1; VAR15 <= VAR8->VAR32; VAR15++)
        {
            VAR8->VAR20[VAR15] = 0xFFU << 24 | FUN8(&VAR8->VAR22);
        }
    }
    if (VAR20 && VAR19 == VAR33)
    {
        VAR11->VAR31 = 1;
        memcpy(VAR8->VAR20, VAR20, VAR33);
    }
    else if (VAR20)
    {
        FUN10(VAR2, VAR34, "", VAR19);
    }
    if (VAR8->VAR35)
    {
        VAR8->VAR35 = 0;
        VAR11->VAR31 = 1;
    }
    memcpy(VAR11->VAR3[1], VAR8->VAR20, 1024);
    VAR18 = FUN5(&VAR8->VAR22);
    if (VAR18 != 8 && VAR18 != 127)
    {
        FUN10(VAR2, VAR34, "", VAR18);
        return VAR36;
    }
    memset(VAR8->VAR37, 0, 320 * 200);
    switch (VAR17 & VAR38)
    {
    case 0:
    case 1:
        memcpy(VAR8->VAR37, VAR8->VAR39, 320 * 200);
        break;
    case 3:
        FUN11(VAR8, VAR2->VAR40, VAR2->VAR41);
        break;
    case 4:
        FUN12(VAR8, VAR2->VAR40, VAR2->VAR41);
        break;
    default:
        FUN10(VAR2, VAR34, "", VAR17 & VAR38);
        return VAR36;
    }
    VAR13 = VAR11->VAR3[0];
    VAR14 = VAR8->VAR37;
    for (VAR15 = 0; VAR15 < VAR2->VAR41; VAR15++)
    {
        memcpy(VAR13, VAR14, VAR2->VAR40);
        VAR14 += 320;
        VAR13 += VAR11->VAR42[0];
    }
    if (VAR8->VAR37 == VAR8->VAR43)
    {
        VAR8->VAR37 = VAR8->VAR44;
        VAR8->VAR39 = VAR8->VAR43;
    }
    else
    {
        VAR8->VAR37 = VAR8->VAR43;
        VAR8->VAR39 = VAR8->VAR44;
    }
    *VAR4 = 1;
    return VAR6->VAR23;
}