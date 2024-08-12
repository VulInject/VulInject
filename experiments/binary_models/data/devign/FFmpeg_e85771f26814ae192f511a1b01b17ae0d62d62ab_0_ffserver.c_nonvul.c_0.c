static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    if (VAR2->VAR7 >= FUN2(VAR2->VAR8))
        return;
    switch (VAR4->VAR9)
    {
    case VAR10:
        if (VAR4->VAR11 == 0)
            VAR4->VAR11 = 64000;
        if (VAR4->VAR12 == 0)
            VAR4->VAR12 = 22050;
        if (VAR4->VAR13 == 0)
            VAR4->VAR13 = 1;
        break;
    case VAR14:
        if (VAR4->VAR11 == 0)
            VAR4->VAR11 = 64000;
        if (VAR4->VAR15.VAR16 == 0)
        {
            VAR4->VAR15.VAR17 = 5;
            VAR4->VAR15.VAR16 = 1;
        }
        if (VAR4->VAR18 == 0 || VAR4->VAR19 == 0)
        {
            VAR4->VAR18 = 160;
            VAR4->VAR19 = 128;
        }
        if (VAR4->VAR20 == 0)
            VAR4->VAR20 = FUN3(VAR4->VAR11 / 4, (VAR21)VAR4->VAR11 * VAR4->VAR15.VAR16 / VAR4->VAR15.VAR17);
        if (VAR4->VAR22 == 0)
            VAR4->VAR22 = 3;
        if (VAR4->VAR23 == 0)
            VAR4->VAR23 = 31;
        if (VAR4->VAR24 == 0)
            VAR4->VAR24 = 3;
        VAR4->VAR25 = 0.5;
        VAR4->VAR26 = 0.5;
        if (!VAR4->VAR27)
            VAR4->VAR27 = 8;
        VAR4->VAR28 = VAR29;
        if (!VAR4->VAR30)
            VAR4->VAR30 = VAR31;
        VAR4->VAR32 = 1.0;
        if (!VAR4->VAR33)
            VAR4->VAR33 = FUN4("");
        if (!VAR4->VAR34)
            VAR4->VAR34 = -0.8;
        if (!VAR4->VAR35)
            VAR4->VAR35 = 1.25;
        if (!VAR4->VAR36)
            VAR4->VAR36 = 1.25;
        if (!VAR4->VAR37)
            VAR4->VAR37 = VAR4->VAR11 * 2;
        if (VAR4->VAR37 && !VAR4->VAR38)
        {
            VAR4->VAR38 = VAR4->VAR37;
        }
        break;
    default:
        FUN5();
    }
    VAR6 = FUN6(sizeof(VAR5));
    if (!VAR6)
        return;
    VAR6->VAR39 = FUN7(NULL);
    VAR2->VAR8[VAR2->VAR7++] = VAR6;
    memcpy(VAR6->VAR39, VAR4, sizeof(VAR3));
}