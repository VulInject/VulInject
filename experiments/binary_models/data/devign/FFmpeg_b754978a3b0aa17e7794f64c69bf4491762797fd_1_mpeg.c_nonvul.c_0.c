static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int64_t VAR12, VAR13, VAR14;
VAR15:
    VAR7 = FUN2(VAR2, &VAR14, &VAR8, &VAR12, &VAR13, 1);
    if (VAR7 < 0)
        return VAR7;
    for (VAR9 = 0; VAR9 < VAR2->VAR16; VAR9++)
    {
        VAR6 = VAR2->VAR17[VAR9];
        if (VAR6->VAR18 == VAR8)
            goto VAR19;
    }
    if (VAR8 >= 0x1e0 && VAR8 <= 0x1ef)
    {
        VAR10 = VAR20;
        VAR11 = VAR21;
    }
    else if (VAR8 >= 0x1c0 && VAR8 <= 0x1df)
    {
        VAR10 = VAR22;
        VAR11 = VAR23;
    }
    else if (VAR8 >= 0x80 && VAR8 <= 0x9f)
    {
        VAR10 = VAR22;
        VAR11 = VAR24;
    }
    else if (VAR8 >= 0xa0 && VAR8 <= 0xbf)
    {
        VAR10 = VAR22;
        VAR11 = VAR25;
    }
    else
    {
    VAR26:
        FUN3(&VAR2->VAR27, VAR7);
        goto VAR15;
    }
    VAR6 = FUN4(VAR2, VAR8);
    if (!VAR6)
        goto VAR26;
    VAR6->VAR28.VAR29 = VAR10;
    VAR6->VAR28.VAR11 = VAR11;
    if (VAR11 != VAR25)
        VAR6->VAR30 = 1;
VAR19:
    if (VAR8 >= 0xa0 && VAR8 <= 0xbf)
    {
        int VAR31, VAR32;
        if (VAR7 <= 3)
            goto VAR26;
        FUN5(&VAR2->VAR27);
        VAR31 = FUN5(&VAR2->VAR27);
        FUN5(&VAR2->VAR27);
        VAR7 -= 3;
        VAR32 = (VAR31 >> 4) & 3;
        VAR6->VAR28.VAR33 = VAR34[VAR32];
        VAR6->VAR28.VAR35 = 1 + (VAR31 & 7);
        VAR6->VAR28.VAR36 = VAR6->VAR28.VAR35 * VAR6->VAR28.VAR33 * 2;
    }
    FUN6(VAR4, VAR7);
    FUN7(&VAR2->VAR27, VAR4->VAR37, VAR4->VAR38);
    VAR4->VAR12 = VAR12;
    VAR4->VAR13 = VAR13;
    VAR4->VAR39 = VAR6->VAR40;
    FUN8("", VAR4->VAR39, VAR4->VAR12 / 90000.0, VAR4->VAR13 / 90000.0);
    return 0;
}