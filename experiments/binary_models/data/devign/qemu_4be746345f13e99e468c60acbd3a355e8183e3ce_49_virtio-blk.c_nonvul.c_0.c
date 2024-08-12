static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    FUN2(VAR4, VAR2);
    if (VAR2)
    {
        int VAR5 = FUN3(FUN4(VAR4->VAR6), &VAR4->VAR7.VAR8);
        bool VAR9 = !(VAR5 & VAR10);
        if (FUN5(VAR4, -VAR2, VAR9))
            return;
    }
    FUN6(VAR4, VAR11);
    FUN7(FUN8(VAR4->VAR6->VAR12), &VAR4->VAR13);
    FUN9(VAR4);
}