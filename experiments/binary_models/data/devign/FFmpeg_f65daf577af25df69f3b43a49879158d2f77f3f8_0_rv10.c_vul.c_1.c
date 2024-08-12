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
    if (VAR4->VAR23 && VAR4->VAR18 == VAR21)
    {
        FUN2(VAR4->VAR11, VAR22, "");
        return -1;
    }
    if (VAR4->VAR24 == NULL && VAR4->VAR18 == VAR21)
    {
        FUN2(VAR4->VAR11, VAR22, "");
        return -1;
    }
    if (FUN3(&VAR4->VAR10))
    {
        FUN2(VAR4->VAR11, VAR22, "");
        return -1;
    }
    VAR4->VAR25 = FUN4(&VAR4->VAR10, 5);
    if (VAR4->VAR25 == 0)
    {
        FUN2(VAR4->VAR11, VAR22, "");
        return -1;
    }
    if (FUN5(VAR2->VAR26) >= 2)
        VAR4->VAR27 = FUN3(&VAR4->VAR10) && !VAR4->VAR11->VAR28;
    if (FUN5(VAR2->VAR26) <= 1)
        VAR6 = FUN4(&VAR4->VAR10, 8) << 7;
    else
        VAR6 = FUN4(&VAR4->VAR10, 13) << 2;
    VAR9 = VAR4->VAR11->VAR17[1] & 7;
    if (VAR9)
    {
        int VAR29, VAR30, VAR31;
        VAR9 = FUN6((VAR9 >> 1) + 1, 3);
        VAR29 = FUN4(&VAR4->VAR10, VAR9);
        if (VAR29)
        {
            VAR30 = 4 * ((VAR16 *)VAR4->VAR11->VAR17)[6 + 2 * VAR29];
            VAR31 = 4 * ((VAR16 *)VAR4->VAR11->VAR17)[7 + 2 * VAR29];
        }
        else
        {
            VAR30 = VAR4->VAR32;
            VAR31 = VAR4->VAR33;
        }
        if (VAR30 != VAR4->VAR13 || VAR31 != VAR4->VAR14)
        {
            AVRational VAR34 = VAR4->VAR11->VAR35;
            FUN2(VAR4->VAR11, VAR12, "", VAR30, VAR31);
            if (FUN7(VAR30, VAR31, 0, VAR4->VAR11) < 0)
                return -1;
            FUN8(VAR4);
            if (!VAR34.VAR36)
                VAR34 = (VAR37){1, 1};
            if (2 * VAR30 * VAR4->VAR14 == VAR31 * VAR4->VAR13)
                VAR4->VAR11->VAR35 = FUN9(VAR34, (VAR37){2, 1});
            if (VAR30 * VAR4->VAR14 == 2 * VAR31 * VAR4->VAR13)
                VAR4->VAR11->VAR35 = FUN9(VAR34, (VAR37){1, 2});
            FUN10(VAR4->VAR11, VAR30, VAR31);
            VAR4->VAR13 = VAR30;
            VAR4->VAR14 = VAR31;
            if (FUN11(VAR4) < 0)
                return -1;
        }
        if (VAR4->VAR11->VAR38 & VAR39)
        {
            FUN2(VAR4->VAR11, VAR12, "", VAR29, VAR9);
        }
    }
    if (FUN7(VAR4->VAR13, VAR4->VAR14, 0, VAR4->VAR11) < 0)
        return VAR40;
    VAR7 = FUN12(VAR4);
    VAR6 |= VAR4->VAR41 & ~0x7FFF;
    if (VAR6 - VAR4->VAR41 > 0x4000)
        VAR6 -= 0x8000;
    if (VAR6 - VAR4->VAR41 < -0x4000)
        VAR6 += 0x8000;
    if (VAR6 != VAR4->VAR41)
    {
        if (VAR4->VAR18 != VAR21)
        {
            VAR4->VAR41 = VAR6;
            VAR4->VAR42 = VAR4->VAR41 - VAR4->VAR43;
            VAR4->VAR43 = VAR4->VAR41;
        }
        else
        {
            VAR4->VAR41 = VAR6;
            VAR4->VAR44 = VAR4->VAR42 - (VAR4->VAR43 - VAR4->VAR41);
            if (VAR4->VAR42 <= VAR4->VAR44 || VAR4->VAR42 <= VAR4->VAR42 - VAR4->VAR44 || VAR4->VAR42 <= 0)
            {
                FUN2(VAR4->VAR11, VAR12, "");
                return VAR45;
            }
            FUN13(VAR4);
        }
    }
    VAR4->VAR46 = FUN3(&VAR4->VAR10);
    if (FUN5(VAR2->VAR26) <= 1 && VAR4->VAR18 == VAR21)
        FUN14(&VAR4->VAR10, 5);
    VAR4->VAR47 = 1;
    VAR4->VAR48 = 1;
    VAR4->VAR49 = VAR4->VAR18 == VAR19;
    VAR4->VAR50 = 1;
    if (!VAR4->VAR11->VAR28)
        VAR4->VAR27 = 1;
    if (VAR4->VAR11->VAR38 & VAR39)
    {
        FUN2(VAR4->VAR11, VAR51, "", VAR6, VAR4->VAR52, VAR4->VAR53, VAR4->VAR18, VAR4->VAR25, VAR4->VAR46);
    }
    FUN15(VAR4->VAR18 != VAR21 || !VAR4->VAR23);
    return VAR4->VAR54 * VAR4->VAR55 - VAR7;
}