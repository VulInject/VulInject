static void FUN1(void *VAR1)
{
    VAR2 **VAR3 = VAR1;
    VAR4 *VAR5;
    FUN2();
    FUN3(VAR5, &VAR6.VAR7, VAR8)
    {
        FUN4(VAR5->VAR9);
        VAR5->VAR9 = NULL;
        FUN4(VAR5->VAR10);
        VAR5->VAR10 = NULL;
    }
    FUN5();
    if (VAR11.VAR12)
    {
        FUN6(VAR11.VAR12);
        FUN4(VAR11.VAR13);
        FUN4(VAR11.VAR14);
        FUN4(VAR11.VAR15);
        VAR11.VAR12 = NULL;
        VAR11.VAR13 = NULL;
        VAR11.VAR14 = NULL;
        VAR11.VAR15 = NULL;
    }
    FUN7();
    FUN8();
    FUN9(VAR3);
}