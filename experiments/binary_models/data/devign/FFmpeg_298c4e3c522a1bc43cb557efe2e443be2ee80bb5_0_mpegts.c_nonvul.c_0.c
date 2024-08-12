static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    uint8_t VAR10[5 * 1024];
    int VAR11;
    int64_t VAR12;
    if (VAR4)
    {
        if (VAR4->VAR13)
            VAR6->VAR13 = VAR4->VAR13;
    }
    VAR12 = FUN2(VAR9);
    VAR11 = FUN3(VAR9, VAR10, sizeof(VAR10));
    if (VAR11 != sizeof(VAR10))
        goto VAR14;
    VAR6->VAR15 = FUN4(VAR10, sizeof(VAR10));
    if (VAR6->VAR15 <= 0)
        goto VAR14;
    VAR6->VAR16 = VAR2;
    VAR6->VAR17 = 0;
    if (VAR2->VAR18 == &VAR19)
    {
        if (FUN5(VAR9, VAR12, VAR20) < 0)
            FUN6(VAR2, VAR21, "");
        FUN7(VAR6, VAR22, VAR23, VAR6, 1);
        FUN7(VAR6, VAR24, VAR25, VAR6, 1);
        FUN8(VAR6, VAR2->VAR26 / VAR6->VAR15);
        VAR6->VAR17 = 1;
        FUN9(VAR6->VAR16, "");
        VAR2->VAR27 |= VAR28;
    }
    else
    {
        VAR29 *VAR30;
        int VAR31, VAR32, VAR33, VAR34, VAR35, VAR36;
        int64_t VAR37[2], VAR38;
        int VAR39[2];
        uint8_t VAR40[VAR41];
        VAR30 = FUN10(VAR2, 0);
        if (!VAR30)
            goto VAR14;
        FUN11(VAR30, 60, 1, 27000000);
        VAR30->VAR42->VAR43 = VAR44;
        VAR30->VAR42->VAR45 = VAR46;
        VAR31 = -1;
        VAR34 = 0;
        VAR33 = 0;
        for (;;)
        {
            VAR35 = FUN12(VAR2, VAR40, VAR6->VAR15);
            if (VAR35 < 0)
                return -1;
            VAR32 = FUN13(VAR40 + 1) & 0x1fff;
            if ((VAR31 == -1 || VAR31 == VAR32) && FUN14(&VAR38, &VAR36, VAR40) == 0)
            {
                VAR31 = VAR32;
                VAR39[VAR34] = VAR33;
                VAR37[VAR34] = VAR38 * 300 + VAR36;
                VAR34++;
                if (VAR34 >= 2)
                    break;
            }
            VAR33++;
        }
        VAR6->VAR47 = (VAR37[1] - VAR37[0]) / (VAR39[1] - VAR39[0]);
        VAR6->VAR48 = VAR37[0] - VAR6->VAR47 * VAR39[0];
        VAR2->VAR49 = (VAR41 * 8) * 27e6 / VAR6->VAR47;
        VAR30->VAR42->VAR49 = VAR2->VAR49;
        VAR30->VAR50 = VAR6->VAR48;
        FUN9(VAR6->VAR16, "", VAR30->VAR50 / 1000000.0, VAR37[0] / 27e6, VAR6->VAR47);
    }
    FUN5(VAR9, VAR12, VAR20);
    return 0;
VAR14:
    return -1;
}