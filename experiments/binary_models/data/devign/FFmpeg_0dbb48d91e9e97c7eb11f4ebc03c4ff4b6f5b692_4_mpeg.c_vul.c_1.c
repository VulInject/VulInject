static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int64_t VAR12, VAR13;
VAR14:
    VAR7 = FUN2(VAR2, NULL, &VAR8, &VAR12, &VAR13, 1);
    if (VAR7 < 0)
        return VAR7;
    for (VAR9 = 0; VAR9 < VAR2->VAR15; VAR9++)
    {
        VAR6 = VAR2->VAR16[VAR9];
        if (VAR6->VAR17 == VAR8)
            goto VAR18;
    }
    if (VAR8 >= 0x1e0 && VAR8 <= 0x1ef)
    {
        VAR10 = VAR19;
        VAR11 = VAR20;
    }
    else if (VAR8 >= 0x1c0 && VAR8 <= 0x1df)
    {
        VAR10 = VAR21;
        VAR11 = VAR22;
    }
    else if (VAR8 >= 0x80 && VAR8 <= 0x9f)
    {
        VAR10 = VAR21;
        VAR11 = VAR23;
    }
    else if (VAR8 >= 0xa0 && VAR8 <= 0xbf)
    {
        VAR10 = VAR21;
        VAR11 = VAR24;
    }
    else
    {
    VAR25:
        FUN3(&VAR2->VAR26, VAR7);
        goto VAR14;
    }
    VAR6 = FUN4(VAR2, VAR8);
    if (!VAR6)
        goto VAR25;
    VAR6->VAR27.VAR28 = VAR10;
    VAR6->VAR27.VAR11 = VAR11;
    if (VAR11 != VAR24)
        VAR6->VAR29 = 1;
VAR18:
    if (VAR8 >= 0xa0 && VAR8 <= 0xbf)
    {
        int VAR30, VAR31;
        static const int VAR32[4] = {48000, 96000, 44100, 32000};
        if (VAR7 <= 3)
            goto VAR25;
        FUN5(&VAR2->VAR26);
        VAR30 = FUN5(&VAR2->VAR26);
        FUN5(&VAR2->VAR26);
        VAR7 -= 3;
        VAR31 = (VAR30 >> 4) & 3;
        VAR6->VAR27.VAR33 = VAR32[VAR31];
        VAR6->VAR27.VAR34 = 1 + (VAR30 & 7);
        VAR6->VAR27.VAR35 = VAR6->VAR27.VAR34 * VAR6->VAR27.VAR33 * 2;
    }
    FUN6(VAR4, VAR7);
    FUN7(&VAR2->VAR26, VAR4->VAR36, VAR4->VAR37);
    VAR4->VAR12 = VAR12;
    VAR4->VAR13 = VAR13;
    VAR4->VAR38 = VAR6->VAR39;
    FUN8("", VAR4->VAR38, VAR4->VAR12 / 90000.0, VAR4->VAR13 / 90000.0);
    return 0;
}