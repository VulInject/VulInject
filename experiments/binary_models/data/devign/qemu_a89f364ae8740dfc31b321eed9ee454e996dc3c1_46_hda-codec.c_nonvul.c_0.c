static int FUN1(VAR1 *VAR2, const struct VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    const VAR9 *VAR10;
    const VAR11 *VAR12;
    uint32_t VAR13, VAR14;
    VAR6->VAR4 = VAR4;
    VAR6->VAR15 = FUN3(FUN4(VAR6));
    FUN5(VAR6, 1, "", VAR16, VAR6->VAR2.VAR17);
    FUN6("", &VAR6->VAR18);
    for (VAR13 = 0; VAR13 < VAR6->VAR4->VAR19; VAR13++)
    {
        VAR10 = VAR6->VAR4->VAR20 + VAR13;
        VAR12 = FUN7(VAR10, VAR21);
        if (VAR12 == NULL)
        {
            continue;
        }
        VAR14 = (VAR12->VAR22 & VAR23) >> VAR24;
        switch (VAR14)
        {
        case VAR25:
        case VAR26:
            assert(VAR10->VAR27 < FUN8(VAR6->VAR8));
            VAR8 = VAR6->VAR8 + VAR10->VAR27;
            VAR8->VAR28 = VAR6;
            VAR8->VAR10 = VAR10;
            if (VAR14 == VAR25)
            {
                VAR8->VAR29 = VAR30;
                VAR8->VAR31 = VAR30;
                VAR8->VAR32 = sizeof(VAR8->VAR33);
                VAR8->VAR34 = true;
            }
            else
            {
                VAR8->VAR34 = false;
            }
            VAR8->VAR35 = VAR36 | VAR37 | (1 << VAR38);
            FUN9(VAR8->VAR35, &VAR8->VAR39);
            FUN10(VAR8);
            break;
        }
    }
    return 0;
}