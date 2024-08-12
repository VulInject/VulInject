void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    AVPacket VAR7;
    int VAR8 = 0;
    mfxVideoParam VAR9 = {{0}};
    if (VAR4->VAR10)
    {
        FUN2(VAR4);
    }
    else if (VAR4->VAR11)
    {
        VAR8 = FUN3(VAR4->VAR12, &VAR9);
        if (VAR8 < 0)
        {
            FUN4(VAR2, VAR13, "", VAR8);
        }
        VAR8 = FUN5(VAR4->VAR12, &VAR9);
        if (VAR8 < 0)
        {
            FUN4(VAR2, VAR13, "", VAR8);
        }
        VAR6 = VAR4->VAR14;
        while (VAR6)
        {
            VAR4->VAR14 = VAR6->VAR15;
            FUN6(&VAR6->VAR16);
            FUN7(&VAR6);
            VAR6 = VAR4->VAR14;
        }
    }
    FUN8(VAR4->VAR17);
    while (FUN9(VAR4->VAR18))
    {
        FUN10(VAR4->VAR18, &VAR7, sizeof(VAR7), NULL);
        FUN11(&VAR7);
    }
    FUN8(VAR4->VAR19);
}