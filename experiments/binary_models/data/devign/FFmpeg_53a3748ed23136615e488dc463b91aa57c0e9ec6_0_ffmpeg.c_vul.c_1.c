static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int64_t VAR9)
{
    int VAR10 = 1024 * 1024;
    int VAR11, VAR12, VAR13;
    VAR14 *VAR15;
    AVPacket VAR16;
    if (VAR9 == VAR17)
    {
        FUN2(NULL, VAR18, "");
        if (VAR19)
            FUN3(1);
        return;
    }
    VAR15 = VAR4->VAR20->VAR21;
    if (!VAR22)
    {
        VAR22 = FUN4(VAR10);
    }
    if (VAR15->VAR23 == VAR24)
        VAR12 = 2;
    else
        VAR12 = 1;
    for (VAR13 = 0; VAR13 < VAR12; VAR13++)
    {
        VAR4->VAR25 = FUN5(VAR9, VAR6->VAR20->VAR26, VAR15->VAR26);
        if (!FUN6(VAR4))
            return;
        VAR8->VAR9 = FUN5(VAR9, VAR6->VAR20->VAR26, VAR27);
        VAR8->VAR9 += FUN5(VAR8->VAR28, (VAR29){1, 1000}, VAR27);
        VAR8->VAR30 -= VAR8->VAR28;
        VAR8->VAR28 = 0;
        VAR11 = FUN7(VAR15, VAR22, VAR10, VAR8);
        if (VAR11 < 0)
        {
            FUN2(NULL, VAR31, "");
            FUN3(1);
        }
        FUN8(&VAR16);
        VAR16.VAR32 = VAR22;
        VAR16.VAR33 = VAR11;
        VAR16.VAR9 = FUN5(VAR8->VAR9, VAR27, VAR4->VAR20->VAR26);
        VAR16.VAR34 = FUN5(VAR8->VAR30, (VAR29){1, 1000}, VAR4->VAR20->VAR26);
        if (VAR15->VAR23 == VAR24)
        {
            if (VAR13 == 0)
                VAR16.VAR9 += 90 * VAR8->VAR28;
            else
                VAR16.VAR9 += 90 * VAR8->VAR30;
        }
        FUN9(VAR2, &VAR16, VAR4);
        VAR35 += VAR16.VAR33;
    }
}