FUN1(VAR1 *VAR2, struct VAR3 *VAR4, const VAR5 *VAR6, const VAR7 *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    dma_addr_t VAR12;
    uint8_t VAR13[VAR14];
    size_t VAR15;
    size_t VAR16 = 0;
    size_t VAR17 = 0;
    struct VAR18 *VAR19 = FUN2(VAR4);
    size_t VAR20 = FUN3(VAR4);
    size_t VAR21 = VAR20 + FUN4(VAR2->VAR22);
    const VAR23 *VAR24;
    size_t VAR25 = 0;
    bool VAR26 = FUN5(VAR2, VAR4, &VAR25);
    bool VAR27 = true;
    VAR24 = VAR6->VAR28;
    do
    {
        hwaddr VAR29[VAR30];
        e1000e_ba_state VAR31 = {{0}};
        bool VAR32 = false;
        VAR15 = VAR21 - VAR16;
        if (VAR15 > VAR2->VAR33)
        {
            VAR15 = VAR2->VAR33;
        }
        VAR12 = FUN6(VAR2, VAR24);
        FUN7(VAR10, VAR12, &VAR13, VAR2->VAR34);
        FUN8(VAR24->VAR35, VAR12, VAR2->VAR34);
        FUN9(VAR2, VAR13, &VAR29);
        if (VAR29[0])
        {
            if (VAR16 < VAR20)
            {
                static const uint32_t VAR36;
                size_t VAR37;
                size_t VAR38 = VAR20 - VAR16;
                if (VAR38 > VAR2->VAR33)
                {
                    VAR38 = VAR2->VAR33;
                }
                if (VAR26)
                {
                    if (VAR27)
                    {
                        size_t VAR39 = 0;
                        do
                        {
                            VAR37 = FUN10(VAR25 - VAR39, VAR19->VAR40 - VAR17);
                            FUN11(VAR2, &VAR29, &VAR31, VAR19->VAR41, VAR37);
                            VAR38 -= VAR37;
                            VAR39 += VAR37;
                            VAR17 += VAR37;
                            if (VAR17 == VAR19->VAR40)
                            {
                                VAR19++;
                                VAR17 = 0;
                            }
                        } while (VAR39 < VAR25);
                        VAR27 = false;
                    }
                    else
                    {
                        FUN11(VAR2, &VAR29, &VAR31, NULL, 0);
                    }
                }
                while (VAR38)
                {
                    VAR37 = FUN10(VAR38, VAR19->VAR40 - VAR17);
                    FUN12(VAR2, &VAR29, &VAR31, VAR19->VAR41 + VAR17, VAR37);
                    VAR38 -= VAR37;
                    VAR17 += VAR37;
                    if (VAR17 == VAR19->VAR40)
                    {
                        VAR19++;
                        VAR17 = 0;
                    }
                }
                if (VAR16 + VAR15 >= VAR21)
                {
                    FUN12(VAR2, &VAR29, &VAR31, (const char *)&VAR36, FUN4(VAR2->VAR22));
                }
            }
            VAR16 += VAR15;
            if (VAR16 >= VAR21)
            {
                VAR32 = true;
            }
        }
        else
        {
            FUN13();
        }
        FUN14(VAR2, VAR13, VAR32 ? VAR2->VAR42 : NULL, VAR8, VAR26 ? VAR25 : 0, &VAR31.VAR43);
        FUN15(VAR10, VAR12, &VAR13, VAR2->VAR34);
        FUN16(VAR2, VAR24, VAR2->VAR34 / VAR44);
    } while (VAR16 < VAR21);
    FUN17(VAR2, VAR20, VAR21);
}