int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    FUN2(VAR4->VAR7);
    if (VAR4->VAR8)
        FUN3(VAR4->VAR8);
    VAR4->VAR7 = NULL;
    VAR4->VAR8 = NULL;
    VAR6 = VAR4->VAR9;
    while (VAR6)
    {
        VAR4->VAR9 = VAR6->VAR10;
        FUN4(&VAR6->VAR11);
        FUN5(&VAR6);
        VAR6 = VAR4->VAR9;
    }
    while (VAR4->VAR12 && FUN6(VAR4->VAR12))
    {
        AVPacket VAR13;
        mfxSyncPoint VAR14;
        VAR15 *VAR16;
        FUN7(VAR4->VAR12, &VAR13, sizeof(VAR13), NULL);
        FUN7(VAR4->VAR12, &VAR14, sizeof(VAR14), NULL);
        FUN7(VAR4->VAR12, &VAR16, sizeof(VAR16), NULL);
        FUN5(&VAR16);
        FUN8(&VAR13);
    }
    FUN9(VAR4->VAR12);
    VAR4->VAR12 = NULL;
    return 0;
}