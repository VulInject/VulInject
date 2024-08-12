int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    enum CodecID VAR7;
    VAR6 = FUN2(VAR2, NULL);
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
        VAR6->VAR12->VAR16 = VAR7;
        switch (VAR6->VAR12->VAR13)
        {
        case VAR15:
        {
            VAR17 *VAR18 = VAR2->VAR19;
            VAR6->VAR12->VAR20 = 1;
            if (VAR7 == VAR21)
                VAR6->VAR12->VAR22 = 16000;
            if (VAR18 && VAR18->VAR22)
                VAR6->VAR12->VAR22 = VAR18->VAR22;
            if (VAR18 && VAR18->VAR20)
                VAR6->VAR12->VAR20 = VAR18->VAR20;
            VAR6->VAR12->VAR23 = FUN4(VAR6->VAR12->VAR16);
            assert(VAR6->VAR12->VAR23 > 0);
            VAR6->VAR12->VAR24 = VAR6->VAR12->VAR23 * VAR6->VAR12->VAR20 / 8;
            FUN5(VAR6, 64, 1, VAR6->VAR12->VAR22);
            break;
        case VAR14:
        {
            VAR25 *VAR18 = VAR2->VAR19;
            int VAR26 = 0, VAR27 = 0, VAR28 = 0;
            enum PixelFormat VAR29;
            AVRational VAR30;
            if (VAR18->VAR31 && (VAR28 = FUN6(&VAR26, &VAR27, VAR18->VAR31)) < 0)
            {
                FUN7(VAR2, VAR32, "");
                goto VAR33;
                if ((VAR29 = FUN8(VAR18->VAR34)) == VAR35)
                {
                    FUN7(VAR2, VAR32, "", VAR18->VAR34);
                    VAR28 = FUN3(VAR36);
                    goto VAR33;
                    if ((VAR28 = FUN9(&VAR30, VAR18->VAR30)) < 0)
                    {
                        FUN7(VAR2, VAR32, "", VAR18->VAR30);
                        goto VAR33;
                        FUN5(VAR6, 64, VAR30.VAR37, VAR30.VAR38);
                        VAR6->VAR12->VAR26 = VAR26;
                        VAR6->VAR12->VAR27 = VAR27;
                        VAR6->VAR12->VAR29 = VAR29;
                    VAR33:
                        return VAR28;
                    default:
                        return -1;
                        return 0