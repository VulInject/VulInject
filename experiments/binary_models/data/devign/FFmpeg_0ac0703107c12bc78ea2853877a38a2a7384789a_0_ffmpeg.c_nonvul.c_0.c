static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9;
    while (VAR8)
    {
        AVPacket VAR10 = *VAR4;
        int VAR11 = FUN2(VAR8, VAR6, NULL, &VAR10.VAR12, &VAR10.VAR13, VAR4->VAR12, VAR4->VAR13, VAR4->VAR14 & VAR15);
        if (VAR11)
        {
            FUN3(VAR4);
            VAR10.VAR16 = VAR17;
        }
        *VAR4 = VAR10;
        VAR8 = VAR8->VAR18;
    }
    VAR9 = FUN4(VAR2, VAR4);
    if (VAR9 < 0)
    {
        FUN5("", VAR9);
        FUN6(1);
    }
}