static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR9;
    VAR10 *VAR11 = VAR6->VAR11;
    int VAR12 = VAR6->VAR12;
    int VAR13 = VAR6->VAR13;
    int VAR14 = VAR6->VAR14;
    int VAR15, VAR16, VAR17, VAR18, VAR19 = 1;
    Window VAR20, VAR21;
    int64_t VAR22, VAR23;
    struct timespec VAR24;
    VAR6->VAR25 += FUN2(1000000);
    for (;;)
    {
        VAR22 = FUN3();
        VAR23 = VAR6->VAR25 * FUN4(VAR6->VAR26) - VAR22;
        if (VAR23 <= 0)
        {
            if (VAR23 < FUN2(-1000000) * FUN4(VAR6->VAR26))
                VAR6->VAR25 += FUN2(1000000);
            break;
        }
        VAR24.VAR27 = VAR23 / 1000000;
        VAR24.VAR28 = (VAR23 % 1000000) * 1000;
        FUN5(&VAR24, NULL);
    }
    FUN6(VAR4);
    VAR4->VAR29 = VAR11->VAR29;
    VAR4->VAR30 = VAR6->VAR31;
    VAR4->VAR32 = VAR22;
    VAR15 = FUN7(VAR9);
    VAR21 = FUN8(VAR9, VAR15);
    if (VAR14 || VAR6->VAR33)
        VAR19 = FUN9(VAR9, VAR21, &VAR20, &VAR20, &VAR16, &VAR17, &VAR18, &VAR18, &VAR18);
    if (VAR14 && VAR19)
    {
        int VAR34, VAR35;
        VAR34 = FUN10(VAR9, VAR15);
        VAR35 = FUN11(VAR9, VAR15);
        if (VAR14 == -1)
        {
            VAR12 += VAR16 - VAR6->VAR36 / 2 - VAR12;
            VAR13 += VAR17 - VAR6->VAR37 / 2 - VAR13;
        }
        else
        {
            if (VAR16 > VAR12 + VAR6->VAR36 - VAR14)
                VAR12 += VAR16 - (VAR12 + VAR6->VAR36 - VAR14);
            else if (VAR16 < VAR12 + VAR14)
                VAR12 -= (VAR12 + VAR14) - VAR16;
            if (VAR17 > VAR13 + VAR6->VAR37 - VAR14)
                VAR13 += VAR17 - (VAR13 + VAR6->VAR37 - VAR14);
            else if (VAR17 < VAR13 + VAR14)
                VAR13 -= (VAR13 + VAR14) - VAR17;
        }
        VAR6->VAR12 = VAR12 = FUN12(FUN13(VAR12, 0), VAR34 - VAR6->VAR36);
        VAR6->VAR13 = VAR13 = FUN12(FUN13(VAR13, 0), VAR35 - VAR6->VAR37);
        if (VAR6->VAR38 && VAR6->VAR39)
            FUN14(VAR9, VAR6->VAR39, VAR6->VAR12 - VAR40, VAR6->VAR13 - VAR40);
    }
    if (VAR6->VAR38 && VAR19)
    {
        if (VAR6->VAR39)
        {
            XEvent VAR41 = {.VAR42 = VAR43};
            while (FUN15(VAR9, VAR44 | VAR45, &VAR41))
                ;
            if (VAR41.VAR42)
                FUN16(VAR6);
        }
        else
        {
            FUN17(VAR6);
        }
    }
    if (VAR6->VAR46)
    {
        if (!FUN18(VAR9, VAR21, VAR11, VAR12, VAR13, VAR47))
            FUN19(VAR2, VAR48, "");
    }
    else
    {
        if (!FUN20(VAR9, VAR21, VAR11, VAR12, VAR13))
            FUN19(VAR2, VAR48, "");
    }
    if (VAR6->VAR33 && VAR19)
        FUN21(VAR11, VAR6);
    return VAR6->VAR31;
}