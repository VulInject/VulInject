static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5;
    int VAR6, VAR7, VAR8;
    int VAR9;
    GetBitContext VAR10 = VAR4->VAR10;
    for (VAR8 = 0; VAR8 < 64; VAR8++)
    {
        FUN2(VAR4->VAR11, VAR12, "", FUN3(&VAR10));
        if (VAR8 % 4 == 3)
            FUN2(VAR4->VAR11, VAR12, "");
    }
    FUN2(VAR4->VAR11, VAR12, "");
    FUN2(VAR4->VAR11, VAR12, "", VAR4->VAR13, VAR4->VAR14, VAR4->VAR13 / 4, VAR4->VAR14 / 4);
    for (VAR8 = 0; VAR8 < VAR4->VAR11->VAR15; VAR8++)
    {
        FUN2(VAR4->VAR11, VAR12, "", ((VAR16 *)VAR4->VAR11->VAR17)[VAR8]);
        if (VAR8 % 4 == 3)
            FUN2(VAR4->VAR11, VAR12, "");
    }
    FUN2(VAR4->VAR11, VAR12, "");
    VAR8 = FUN4(&VAR4->VAR10, 2);
    switch (VAR8)
    {
    case 0:
        VAR4->VAR18 = VAR19;
        break;
    case 1:
        VAR4->VAR18 = VAR19;
        break;
    case 2:
        VAR4->VAR18 = VAR20;
        break;
    case 3:
        VAR4->VAR18 = VAR21;
        break;
    default:
        FUN2(VAR4->VAR11, VAR22, "");
        return -1;
    }
    if (VAR4->VAR23 == NULL && VAR4->VAR18 == VAR21)
    {
        FUN2(VAR4->VAR11, VAR22, "");
        return -1;
    }
    if (FUN3(&VAR4->VAR10))
    {
        FUN2(VAR4->VAR11, VAR22, "");
        return -1;
    }
    VAR4->VAR24 = FUN4(&VAR4->VAR10, 5);
    if (VAR4->VAR24 == 0)
    {
        FUN2(VAR4->VAR11, VAR22, "");
        return -1;
    }
    if (FUN5(VAR2->VAR25) >= 2)
        VAR4->VAR26 = FUN3(&VAR4->VAR10) && !VAR4->VAR11->VAR27;
    if (FUN5(VAR2->VAR25) <= 1)
        VAR6 = FUN4(&VAR4->VAR10, 8) << 7;
    else
        VAR6 = FUN4(&VAR4->VAR10, 13) << 2;
    VAR9 = VAR4->VAR11->VAR17[1] & 7;
    if (VAR9)
    {
        int VAR28, VAR29, VAR30;
        VAR9 = FUN6((VAR9 >> 1) + 1, 3);
        VAR28 = FUN4(&VAR4->VAR10, VAR9);
        if (VAR28)
        {
            VAR29 = 4 * ((VAR16 *)VAR4->VAR11->VAR17)[6 + 2 * VAR28];
            VAR30 = 4 * ((VAR16 *)VAR4->VAR11->VAR17)[7 + 2 * VAR28];
        }
        else
        {
            VAR29 = VAR4->VAR31;
            VAR30 = VAR4->VAR32;
        }
        if (VAR29 != VAR4->VAR13 || VAR30 != VAR4->VAR14)
        {
            AVRational VAR33 = VAR4->VAR11->VAR34;
            FUN2(VAR4->VAR11, VAR12, "", VAR29, VAR30);
            if (FUN7(VAR29, VAR30, 0, VAR4->VAR11) < 0)
                return -1;
            FUN8(VAR4);
            if (!VAR33.VAR35)
                VAR33 = (VAR36){1, 1};
            if (2 * VAR29 * VAR4->VAR14 == VAR30 * VAR4->VAR13)
                VAR4->VAR11->VAR34 = FUN9(VAR33, (VAR36){2, 1});
            if (VAR29 * VAR4->VAR14 == 2 * VAR30 * VAR4->VAR13)
                VAR4->VAR11->VAR34 = FUN9(VAR33, (VAR36){1, 2});
            FUN10(VAR4->VAR11, VAR29, VAR30);
            VAR4->VAR13 = VAR29;
            VAR4->VAR14 = VAR30;
            if (FUN11(VAR4) < 0)
                return -1;
        }
        if (VAR4->VAR11->VAR37 & VAR38)
        {
            FUN2(VAR4->VAR11, VAR12, "", VAR28, VAR9);
        }
    }
    else if (FUN7(VAR4->VAR13, VAR4->VAR14, 0, VAR4->VAR11) < 0)
        return VAR39;
    VAR7 = FUN12(VAR4);
    VAR6 |= VAR4->VAR40 & ~0x7FFF;
    if (VAR6 - VAR4->VAR40 > 0x4000)
        VAR6 -= 0x8000;
    if (VAR6 - VAR4->VAR40 < -0x4000)
        VAR6 += 0x8000;
    if (VAR6 != VAR4->VAR40)
    {
        if (VAR4->VAR18 != VAR21)
        {
            VAR4->VAR40 = VAR6;
            VAR4->VAR41 = VAR4->VAR40 - VAR4->VAR42;
            VAR4->VAR42 = VAR4->VAR40;
        }
        else
        {
            VAR4->VAR40 = VAR6;
            VAR4->VAR43 = VAR4->VAR41 - (VAR4->VAR42 - VAR4->VAR40);
            if (VAR4->VAR41 <= VAR4->VAR43 || VAR4->VAR41 <= VAR4->VAR41 - VAR4->VAR43 || VAR4->VAR41 <= 0)
            {
                FUN2(VAR4->VAR11, VAR12, "");
                return VAR44;
            }
            FUN13(VAR4);
        }
    }
    VAR4->VAR45 = FUN3(&VAR4->VAR10);
    if (FUN5(VAR2->VAR25) <= 1 && VAR4->VAR18 == VAR21)
        FUN14(&VAR4->VAR10, 5);
    VAR4->VAR46 = 1;
    VAR4->VAR47 = 1;
    VAR4->VAR48 = VAR4->VAR18 == VAR19;
    VAR4->VAR49 = 1;
    if (!VAR4->VAR11->VAR27)
        VAR4->VAR26 = 1;
    if (VAR4->VAR11->VAR37 & VAR38)
    {
        FUN2(VAR4->VAR11, VAR50, "", VAR6, VAR4->VAR51, VAR4->VAR52, VAR4->VAR18, VAR4->VAR24, VAR4->VAR45);
    }
    assert(VAR4->VAR18 != VAR21 || !VAR4->VAR53);
    return VAR4->VAR54 * VAR4->VAR55 - VAR7;
}