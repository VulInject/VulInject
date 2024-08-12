FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR9;
    VAR10 *VAR11 = VAR6->VAR11;
    int VAR12 = VAR6->VAR12;
    int VAR13 = VAR6->VAR13;
    int64_t VAR14, VAR15;
    struct timespec VAR16;
    VAR6->VAR17 += FUN2(1000000);
    for (;;)
    {
        VAR14 = FUN3();
        VAR15 = VAR6->VAR17 * FUN4(VAR6->VAR18) - VAR14;
        if (VAR15 <= 0)
        {
            if (VAR15 < FUN2(-1000000) * FUN4(VAR6->VAR18))
            {
                VAR6->VAR17 += FUN2(1000000);
            }
            break;
        }
        VAR16.VAR19 = VAR15 / 1000000;
        VAR16.VAR20 = (VAR15 % 1000000) * 1000;
        FUN5(&VAR16, NULL);
    }
    FUN6(VAR4);
    VAR4->VAR21 = VAR11->VAR21;
    VAR4->VAR22 = VAR6->VAR23;
    VAR4->VAR24 = VAR14;
    if (VAR6->VAR25)
    {
        if (!FUN7(VAR9, FUN8(VAR9, FUN9(VAR9)), VAR11, VAR12, VAR13, VAR26))
        {
            FUN10(VAR2, VAR27, "");
        }
    }
    else
    {
        if (!FUN11(VAR9, FUN8(VAR9, FUN9(VAR9)), VAR11, VAR12, VAR13))
        {
            FUN10(VAR2, VAR27, "");
        }
    }
    if (VAR6->VAR28)
    {
        FUN12(VAR11, VAR6);
    }
    return VAR6->VAR23;
}