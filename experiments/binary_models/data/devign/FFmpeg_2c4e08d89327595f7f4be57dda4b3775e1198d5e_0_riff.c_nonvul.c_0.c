int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8 = 18;
    int VAR9;
    uint8_t VAR10[256];
    VAR11 *VAR12 = VAR10;
    VAR11 *VAR13 = VAR10;
    if (!VAR4->VAR14 || VAR4->VAR14 > 0xffff)
        return -1;
    VAR9 = (VAR4->VAR15 > 2 && VAR4->VAR16) || VAR4->VAR17 > 48000 || FUN2(VAR4->VAR18) > 16;
    if (VAR9)
    {
        FUN3(VAR2, 0xfffe);
    }
    else
    {
        FUN3(VAR2, VAR4->VAR14);
    }
    FUN3(VAR2, VAR4->VAR15);
    FUN4(VAR2, VAR4->VAR17);
    if (VAR4->VAR18 == VAR19 || VAR4->VAR18 == VAR20 || VAR4->VAR18 == VAR21)
    {
        VAR5 = 0;
    }
    else if (VAR4->VAR18 == VAR22)
    {
        VAR5 = 4;
    }
    else
    {
        if (!(VAR5 = FUN2(VAR4->VAR18)))
            VAR5 = 16;
    }
    if (VAR5 != VAR4->VAR23 && VAR4->VAR23)
    {
        FUN5(VAR4, VAR24, "", VAR4->VAR23, VAR5);
    }
    if (VAR4->VAR18 == VAR19 || VAR4->VAR18 == VAR20)
    {
        VAR6 = VAR4->VAR25;
    }
    else if (VAR4->VAR18 == VAR26)
    {
        VAR6 = 3840;
    }
    else if (VAR4->VAR18 == VAR22)
    {
        VAR6 = 1;
    }
    else if (VAR4->VAR27 != 0)
    {
        VAR6 = VAR4->VAR27;
    }
    else
        VAR6 = VAR4->VAR15 * VAR5 >> 3;
    if (VAR4->VAR18 == VAR28 || VAR4->VAR18 == VAR29 || VAR4->VAR18 == VAR30 || VAR4->VAR18 == VAR31 || VAR4->VAR18 == VAR32 || VAR4->VAR18 == VAR33)
    {
        VAR7 = VAR4->VAR17 * VAR6;
    }
    else
    {
        VAR7 = VAR4->VAR34 / 8;
    }
    FUN4(VAR2, VAR7);
    FUN3(VAR2, VAR6);
    FUN3(VAR2, VAR5);
    if (VAR4->VAR18 == VAR20)
    {
        VAR8 += 12;
        FUN6(&VAR12, 1);
        FUN7(&VAR12, 2);
        FUN6(&VAR12, 1152);
        FUN6(&VAR12, 1);
        FUN6(&VAR12, 1393);
    }
    else if (VAR4->VAR18 == VAR19)
    {
        VAR8 += 22;
        FUN6(&VAR12, 2);
        FUN7(&VAR12, VAR4->VAR34);
        FUN6(&VAR12, VAR4->VAR15 == 2 ? 1 : 8);
        FUN6(&VAR12, 0);
        FUN6(&VAR12, 1);
        FUN6(&VAR12, 16);
        FUN7(&VAR12, 0);
        FUN7(&VAR12, 0);
    }
    else if (VAR4->VAR18 == VAR21 || VAR4->VAR18 == VAR35)
    {
        VAR8 += 2;
        FUN6(&VAR12, VAR4->VAR25);
    }
    else if (VAR4->VAR36)
    {
        VAR13 = VAR4->VAR37;
        VAR12 = VAR4->VAR37 + VAR4->VAR36;
        VAR8 += VAR4->VAR36;
    }
    if (VAR9)
    {
        VAR8 += 22;
        FUN3(VAR2, VAR12 - VAR13 + 22);
        FUN3(VAR2, VAR4->VAR23);
        FUN4(VAR2, VAR4->VAR16);
        FUN4(VAR2, VAR4->VAR14);
        FUN4(VAR2, 0x00100000);
        FUN4(VAR2, 0xAA000080);
        FUN4(VAR2, 0x719B3800);
    }
    else
    {
        FUN3(VAR2, VAR12 - VAR13);
    }
    FUN8(VAR2, VAR13, VAR12 - VAR13);
    if (VAR8 & 1)
    {
        VAR8++;
        FUN9(VAR2, 0);
    }
    return VAR8;
}