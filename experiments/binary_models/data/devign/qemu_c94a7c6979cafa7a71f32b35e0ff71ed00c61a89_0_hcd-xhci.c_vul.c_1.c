static int FUN1(struct VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2);
    VAR6->VAR7.VAR8[VAR9] = 0x30;
    VAR6->VAR7.VAR8[VAR10] = 0x01;
    VAR6->VAR7.VAR8[VAR11] = 0x10;
    VAR6->VAR7.VAR8[0x60] = 0x30;
    FUN3(VAR6, &VAR2->VAR12);
    if (VAR6->VAR13 > VAR14)
    {
        VAR6->VAR13 = VAR14;
        if (VAR6->VAR13 < 1)
        {
            VAR6->VAR13 = 1;
            if (VAR6->VAR15 > VAR16)
            {
                VAR6->VAR15 = VAR16;
                if (VAR6->VAR15 < 1)
                {
                    VAR6->VAR15 = 1;
                    VAR6->VAR17 = FUN4(VAR18, VAR19, VAR6);
                    VAR6->VAR20 = VAR6->VAR7.VAR20[0];
                    FUN5(&VAR6->VAR21, "", VAR22);
                    FUN6(&VAR6->VAR23, &VAR24, VAR6, "", VAR25);
                    FUN6(&VAR6->VAR26, &VAR27, VAR6, "", 0x400);
                    FUN6(&VAR6->VAR28, &VAR29, VAR6, "", VAR30);
                    FUN6(&VAR6->VAR31, &VAR32, VAR6, "", VAR33);
                    FUN7(&VAR6->VAR21, 0, &VAR6->VAR23);
                    FUN7(&VAR6->VAR21, VAR34, &VAR6->VAR26);
                    FUN7(&VAR6->VAR21, VAR35, &VAR6->VAR28);
                    FUN7(&VAR6->VAR21, VAR36, &VAR6->VAR31);
                    for (VAR3 = 0; VAR3 < VAR6->VAR37; VAR3++)
                    {
                        VAR38 *VAR39 = &VAR6->VAR40[VAR3];
                        uint32_t VAR41 = VAR34 + 0x400 + 0x10 * VAR3;
                        VAR39->VAR6 = VAR6;
                        FUN6(&VAR39->VAR21, &VAR42, VAR39, VAR39->VAR43, 0x10);
                        FUN7(&VAR6->VAR21, VAR41, &VAR39->VAR21);
                        FUN8(&VAR6->VAR7, 0, VAR44 | VAR45, &VAR6->VAR21);
                        VAR4 = FUN9(&VAR6->VAR7, 0xa0);
                        assert(VAR4 >= 0);
                        if (VAR6->VAR46 & (1 << VAR47))
                        {
                            FUN10(&VAR6->VAR7, 0x70, VAR6->VAR13, true, false);
                            if (VAR6->VAR46 & (1 << VAR48))
                            {
                                FUN11(&VAR6->VAR7, VAR6->VAR13, &VAR6->VAR21, 0, VAR49, &VAR6->VAR21, 0, VAR50, 0x90);
                                return 0;