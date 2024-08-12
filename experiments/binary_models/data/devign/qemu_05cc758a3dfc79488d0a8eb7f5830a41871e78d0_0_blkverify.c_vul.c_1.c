static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    FUN2(VAR6->VAR8->VAR2);
    if (VAR2->VAR9->VAR2->VAR10 && VAR6->VAR8->VAR2->VAR10)
    {
        VAR3 *VAR11 = FUN3();
        FUN4(VAR11, "", "");
        FUN5(VAR2->VAR9->VAR2->VAR10);
        FUN6(VAR11, "", VAR2->VAR9->VAR2->VAR10);
        FUN5(VAR6->VAR8->VAR2->VAR10);
        FUN6(VAR11, "", VAR6->VAR8->VAR2->VAR10);
        VAR2->VAR10 = VAR11;
    }
    if (VAR2->VAR9->VAR2->VAR12[0] && VAR6->VAR8->VAR2->VAR12[0])
    {
        snprintf(VAR2->VAR12, sizeof(VAR2->VAR12), "", VAR2->VAR9->VAR2->VAR12, VAR6->VAR8->VAR2->VAR12);
    }
}