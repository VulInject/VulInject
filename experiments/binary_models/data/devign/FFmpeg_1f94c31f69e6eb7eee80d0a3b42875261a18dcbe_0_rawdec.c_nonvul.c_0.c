int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    enum CodecID VAR7;
    VAR6 = FUN2(VAR2, 0);
    if (!VAR6)
        return FUN3(VAR8);
    VAR7 = VAR2->VAR9->VAR10;
    if (VAR7 == VAR11)
    {
        VAR6->VAR12->VAR13 = VAR14;
    }
    else
    {
        VAR6->VAR12->VAR13 = VAR15;
    }
    VAR6->VAR12->VAR16 = VAR7;
    switch (VAR6->VAR12->VAR13)
    {
    case VAR15:
    {
        VAR17 *VAR18 = VAR2->VAR19;
        if (VAR4->VAR20)
            VAR6->VAR12->VAR20 = VAR4->VAR20;
        if (VAR4->VAR21)
            VAR6->VAR12->VAR21 = VAR4->VAR21;
        else
            VAR6->VAR12->VAR21 = 1;
        if (VAR18->VAR20)
            VAR6->VAR12->VAR20 = VAR18->VAR20;
        if (VAR18->VAR21)
            VAR6->VAR12->VAR21 = VAR18->VAR21;
        VAR6->VAR12->VAR22 = FUN4(VAR6->VAR12->VAR16);
        assert(VAR6->VAR12->VAR22 > 0);
        VAR6->VAR12->VAR23 = VAR6->VAR12->VAR22 * VAR6->VAR12->VAR21 / 8;
        FUN5(VAR6, 64, 1, VAR6->VAR12->VAR20);
        break;
    }
    case VAR14:
    {
        VAR24 *VAR18 = VAR2->VAR19;
        int VAR25 = 0, VAR26 = 0, VAR27 = 0;
        enum PixelFormat VAR28;
        if (VAR4->VAR29.VAR30)
            FUN5(VAR6, 64, VAR4->VAR29.VAR30, VAR4->VAR29.VAR31);
        else
            FUN5(VAR6, 64, 1, 25);
        if (VAR18->VAR32 && (VAR27 = FUN6(&VAR25, &VAR26, VAR18->VAR32)) < 0)
        {
            FUN7(VAR2, VAR33, "");
            goto VAR34;
        }
        if ((VAR28 = FUN8(VAR18->VAR35)) == VAR36)
        {
            FUN7(VAR2, VAR33, "", VAR18->VAR35);
            VAR27 = FUN3(VAR37);
            goto VAR34;
        }
        if (VAR4->VAR25 > 0)
            VAR25 = VAR4->VAR25;
        if (VAR4->VAR26 > 0)
            VAR26 = VAR4->VAR26;
        if (VAR4->VAR28)
            VAR28 = VAR4->VAR28;
        VAR6->VAR12->VAR25 = VAR25;
        VAR6->VAR12->VAR26 = VAR26;
        VAR6->VAR12->VAR28 = VAR28;
    VAR34:
        FUN9(&VAR18->VAR32);
        FUN9(&VAR18->VAR35);
        return VAR27;
    }
    default:
        return -1;
    }
    return 0;
}