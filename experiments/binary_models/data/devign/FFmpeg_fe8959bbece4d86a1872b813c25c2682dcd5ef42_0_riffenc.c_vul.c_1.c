int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    int64_t VAR13 = FUN2(VAR4);
    int VAR14;
    uint8_t VAR15[256];
    VAR16 *VAR17 = VAR15;
    VAR16 *VAR18 = VAR15;
    if (!VAR6->VAR19 || VAR6->VAR19 > 0xffff)
        return -1;
    VAR11 = FUN3(VAR6, VAR6->VAR20);
    VAR14 = (VAR6->VAR21 > 2 && VAR6->VAR22) || VAR6->VAR23 > 48000 || VAR6->VAR24 == VAR25 || FUN4(VAR6->VAR24) > 16;
    if (VAR14)
        FUN5(VAR4, 0xfffe);
    else
        FUN5(VAR4, VAR6->VAR19);
    FUN5(VAR4, VAR6->VAR21);
    FUN6(VAR4, VAR6->VAR23);
    if (VAR6->VAR24 == VAR26 || VAR6->VAR24 == VAR27 || VAR6->VAR24 == VAR28 || VAR6->VAR24 == VAR29 || VAR6->VAR24 == VAR30)
    {
        VAR8 = 0;
    }
    else
    {
        if (!(VAR8 = FUN4(VAR6->VAR24)))
        {
            if (VAR6->VAR31)
                VAR8 = VAR6->VAR31;
            else
                VAR8 = 16;
        }
    }
    if (VAR8 != VAR6->VAR31 && VAR6->VAR31)
    {
        FUN7(VAR2, VAR32, ""
                                  "",
               VAR6->VAR31, VAR8);
    }
    if (VAR6->VAR24 == VAR28)
    {
        VAR9 = (144 * VAR6->VAR33 - 1) / VAR6->VAR23 + 1;
    }
    else if (VAR6->VAR24 == VAR29)
    {
        VAR9 = 576 * (VAR6->VAR23 <= (24000 + 32000) / 2 ? 1 : 2);
    }
    else if (VAR6->VAR24 == VAR34)
    {
        VAR9 = 3840;
    }
    else if (VAR6->VAR24 == VAR35)
    {
        VAR9 = 768 * VAR6->VAR21;
    }
    else if (VAR6->VAR24 == VAR27)
    {
        VAR9 = 24;
    }
    else if (VAR6->VAR20 != 0)
    {
        VAR9 = VAR6->VAR20;
    }
    else
        VAR9 = VAR8 * VAR6->VAR21 / FUN8(8, VAR8);
    if (VAR6->VAR24 == VAR36 || VAR6->VAR24 == VAR37 || VAR6->VAR24 == VAR38 || VAR6->VAR24 == VAR39 || VAR6->VAR24 == VAR40 || VAR6->VAR24 == VAR41)
    {
        VAR10 = VAR6->VAR23 * VAR9;
    }
    else if (VAR6->VAR24 == VAR27)
    {
        VAR10 = 800;
    }
    else
    {
        VAR10 = VAR6->VAR33 / 8;
    }
    FUN6(VAR4, VAR10);
    FUN5(VAR4, VAR9);
    FUN5(VAR4, VAR8);
    if (VAR6->VAR24 == VAR29)
    {
        FUN9(&VAR17, 1);
        FUN10(&VAR17, 2);
        FUN9(&VAR17, 1152);
        FUN9(&VAR17, 1);
        FUN9(&VAR17, 1393);
    }
    else if (VAR6->VAR24 == VAR28)
    {
        FUN9(&VAR17, 2);
        FUN10(&VAR17, VAR6->VAR33);
        FUN9(&VAR17, VAR6->VAR21 == 2 ? 1 : 8);
        FUN9(&VAR17, 0);
        FUN9(&VAR17, 1);
        FUN9(&VAR17, 16);
        FUN10(&VAR17, 0);
        FUN10(&VAR17, 0);
    }
    else if (VAR6->VAR24 == VAR27)
    {
        FUN10(&VAR17, 0x9ace0002);
        FUN10(&VAR17, 0xaea2f732);
        FUN9(&VAR17, 0xacde);
    }
    else if (VAR6->VAR24 == VAR30 || VAR6->VAR24 == VAR42)
    {
        FUN9(&VAR17, VAR11);
    }
    else if (VAR6->VAR43)
    {
        VAR18 = VAR6->VAR44;
        VAR17 = VAR6->VAR44 + VAR6->VAR43;
    }
    if (VAR14)
    {
        int VAR45 = !(VAR7 & VAR46) && (VAR2->VAR47 < VAR48 || VAR6->VAR22 < 0x40000);
        FUN5(VAR4, VAR17 - VAR18 + 22);
        FUN5(VAR4, VAR8);
        FUN6(VAR4, VAR45 ? VAR6->VAR22 : 0);
        if (VAR6->VAR24 == VAR25)
        {
            FUN11(VAR4, FUN12(VAR6->VAR24, VAR49));
        }
        else
        {
            FUN6(VAR4, VAR6->VAR19);
            FUN6(VAR4, 0x00100000);
            FUN6(VAR4, 0xAA000080);
            FUN6(VAR4, 0x719B3800);
        }
    }
    else if ((VAR7 & VAR50) || VAR6->VAR19 != 0x0001 || VAR17 - VAR18)
    {
        FUN5(VAR4, VAR17 - VAR18);
    }
    FUN13(VAR4, VAR18, VAR17 - VAR18);
    VAR12 = FUN2(VAR4) - VAR13;
    if (VAR12 & 1)
    {
        VAR12++;
        FUN14(VAR4, 0);
    }
    return VAR12;