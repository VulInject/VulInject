void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    if (!VAR3)
    {
        VAR3 = 1;
        FUN2();
        FUN3(&VAR4);
        FUN3(&VAR5);
        FUN3(&VAR6);
        FUN4(&VAR5, VAR7, VAR8);
        FUN4(&VAR4, VAR9, VAR10);
        FUN5(&VAR6, NULL, VAR11);
        FUN5(&VAR4, NULL, VAR12);
        FUN6(VAR2);
    }
    VAR2->VAR13.VAR14 = VAR14;
    VAR2->VAR15 = VAR2->VAR16 = VAR12;
    VAR2->VAR17 = VAR2->VAR18 = VAR12 + 128 * 64;
    if (VAR2->VAR19)
    {
        VAR2->VAR15 = VAR11;
        VAR2->VAR17 = VAR11 + 128 * 64;
    }
    VAR2->VAR20 = 7 + 1 + 6 + 8;
    switch (VAR2->VAR21)
    {
    case VAR22:
        VAR2->VAR23 = VAR23;
        VAR2->VAR24 = -2048;
        VAR2->VAR25 = 2047;
        VAR2->VAR15 = VAR8;
        VAR2->VAR17 = VAR8 + 128 * 64;
        VAR2->VAR16 = VAR10;
        VAR2->VAR18 = VAR10 + 128 * 64;
        VAR2->VAR26 = VAR27;
        VAR2->VAR28 = VAR29;
        VAR2->VAR20 = 7 + 2 + 1 + 6 + 1 + 12 + 1;
        VAR2->VAR30 = VAR31;
        VAR2->VAR32 = VAR33;
        if (VAR2->VAR34 & VAR35)
        {
            VAR2->VAR36->VAR37 = FUN7(1024);
            FUN8(&VAR2->VAR38, VAR2->VAR36->VAR37, 1024);
            FUN9(VAR2);
            FUN10(VAR2, 0, 0);
            FUN11(&VAR2->VAR38);
            VAR2->VAR36->VAR39 = (FUN12(&VAR2->VAR38) + 7) >> 3;
        }
        break;
    case VAR40:
        if (VAR2->VAR41)
            VAR2->VAR23 = VAR42;
        if (VAR2->VAR43)
        {
            VAR2->VAR24 = -2047;
            VAR2->VAR25 = 2047;
        }
        else
        {
            VAR2->VAR24 = -127;
            VAR2->VAR25 = 127;
        }
        break;
    case VAR44:
        if (VAR2->VAR45 > 1)
        {
            VAR2->VAR24 = -1023;
            VAR2->VAR25 = 1023;
        }
        else
        {
            VAR2->VAR24 = -127;
            VAR2->VAR25 = 127;
        }
        VAR2->VAR30 = VAR2->VAR32 = VAR46;
        break;
    default:
        VAR2->VAR24 = -127;
        VAR2->VAR25 = 127;
        VAR2->VAR30 = VAR2->VAR32 = VAR46;
    }
}