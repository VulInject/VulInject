void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    FUN2(&VAR2->VAR7, VAR2);
    if (VAR2->public.VAR8.VAR9)
    {
        VAR6 = &VAR2->public.VAR8.VAR10;
        VAR4 = FUN3(VAR2);
        FUN4(VAR4);
        FUN5(VAR6);
        FUN6(VAR4);
    }
    FUN7(VAR2);
    FUN8(VAR2->VAR11);
    VAR2->VAR11 = NULL;
}