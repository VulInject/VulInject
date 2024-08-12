static void FUN1(bool VAR1, VAR2 *VAR3, VAR2 *VAR4, bool VAR5)
{
    VAR6 *VAR7, *VAR8;
    VAR9 *VAR10;
    if (VAR1)
    {
        FUN2(VAR3, VAR4, &VAR7, &VAR8);
        FUN3(!VAR5 || FUN4(VAR7, VAR11));
        FUN3(!VAR5 || FUN4(VAR8, VAR11));
        FUN3(FUN4(VAR7, VAR12));
        FUN3(FUN4(VAR8, VAR12));
        VAR10 = FUN5();
        FUN6(VAR10, true, VAR7, VAR8);
        FUN7(VAR10);
        FUN8(FUN9(VAR7));
        FUN8(FUN9(VAR8));
        FUN2(VAR3, VAR4, &VAR7, &VAR8);
        FUN3(!VAR5 || FUN4(VAR7, VAR11));
        FUN3(!VAR5 || FUN4(VAR8, VAR11));
        FUN3(FUN4(VAR7, VAR12));
        FUN3(FUN4(VAR8, VAR12));
        VAR10 = FUN5();
        FUN6(VAR10, false, VAR7, VAR8);
        FUN7(VAR10);
        FUN8(FUN9(VAR7));
        FUN8(FUN9(VAR8));
    }
    else
    {
        FUN10(VAR3, VAR4, &VAR7, &VAR8);
        FUN3(!VAR5 || FUN4(VAR7, VAR11));
        FUN3(!VAR5 || FUN4(VAR8, VAR11));
        FUN3(FUN4(VAR7, VAR12));
        FUN3(FUN4(VAR8, VAR12));
        VAR10 = FUN5();
        FUN6(VAR10, true, VAR7, VAR8);
        FUN7(VAR10);
        FUN8(FUN9(VAR7));
        FUN8(FUN9(VAR8));
        FUN10(VAR3, VAR4, &VAR7, &VAR8);
        FUN3(!VAR5 || FUN4(VAR7, VAR11));
        FUN3(!VAR5 || FUN4(VAR8, VAR11));
        FUN3(FUN4(VAR7, VAR12));
        FUN3(FUN4(VAR8, VAR12));
        VAR10 = FUN5();
        FUN6(VAR10, false, VAR7, VAR8);
        FUN7(VAR10);
        FUN8(FUN9(VAR7));
        FUN8(FUN9(VAR8));
    }
}