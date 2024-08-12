static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9 = 1024 * 1024;
    int VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    AVPacket VAR15;
    int64_t VAR16;
    if (VAR8->VAR16 == VAR17)
    {
        FUN2(NULL, VAR18, "");
        if (VAR19)
            FUN3(1);
        return;
    }
    VAR14 = VAR4->VAR20;
    if (!VAR21)
    {
        VAR21 = FUN4(VAR9);
        if (!VAR21)
        {
            FUN2(NULL, VAR22, "");
            FUN3(1);
        }
    }
    if (VAR14->VAR23 == VAR24)
        VAR11 = 2;
    else
        VAR11 = 1;
    VAR16 = VAR8->VAR16;
    if (VAR25[VAR4->VAR26]->VAR27 != VAR17)
        VAR16 -= VAR25[VAR4->VAR26]->VAR27;
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        unsigned VAR28 = VAR8->VAR29;
        VAR4->VAR30 = FUN5(VAR16, VAR31, VAR14->VAR32);
        if (!FUN6(VAR4))
            return;
        VAR8->VAR16 = VAR16;
        VAR8->VAR16 += FUN5(VAR8->VAR33, (VAR34){1, 1000}, VAR31);
        VAR8->VAR35 -= VAR8->VAR33;
        VAR8->VAR33 = 0;
        if (VAR12 == 1)
            VAR8->VAR29 = 0;
        VAR4->VAR36++;
        VAR10 = FUN7(VAR14, VAR21, VAR9, VAR8);
        if (VAR12 == 1)
            VAR8->VAR29 = VAR28;
        if (VAR10 < 0)
        {
            FUN2(NULL, VAR22, "");
            FUN3(1);
        }
        FUN8(&VAR15);
        VAR15.VAR37 = VAR21;
        VAR15.VAR38 = VAR10;
        VAR15.VAR16 = FUN5(VAR8->VAR16, VAR31, VAR4->VAR39->VAR32);
        VAR15.VAR40 = FUN5(VAR8->VAR35, (VAR34){1, 1000}, VAR4->VAR39->VAR32);
        if (VAR14->VAR23 == VAR24)
        {
            if (VAR12 == 0)
                VAR15.VAR16 += 90 * VAR8->VAR33;
            else
                VAR15.VAR16 += 90 * VAR8->VAR35;
        }
        VAR15.VAR41 = VAR15.VAR16;
        FUN9(VAR2, &VAR15, VAR4);
    }
}