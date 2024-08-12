static void FUN1(VAR1 *VAR2)
{
    AVPacket VAR3, *VAR4 = &VAR3;
    int VAR5;
    VAR6 *VAR7;
    VAR7 = VAR2->VAR8[0];
    FUN2(VAR2);
    FUN3(&VAR2->VAR9, VAR2->VAR10, VAR11);
    for (;;)
    {
        VAR5 = FUN4(VAR2, VAR4);
        if (VAR5 < 0)
            break;
        if (VAR4->VAR12 == 0 && VAR7->VAR13 && (VAR4->VAR14 & VAR15))
        {
            FUN5(VAR7, VAR7->VAR13->VAR16, VAR4->VAR17, VAR18);
        }
        FUN6(VAR4);
    }
}