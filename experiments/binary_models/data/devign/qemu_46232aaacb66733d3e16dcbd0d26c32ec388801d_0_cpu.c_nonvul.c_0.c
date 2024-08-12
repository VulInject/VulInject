static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    const char *VAR7 = "";
    if (FUN2())
    {
        VAR7 = "";
    }
    else if (FUN3())
    {
        VAR7 = "";
    }
    VAR2->VAR8 = FUN4(FUN5(VAR7));
    FUN6(FUN7(VAR2), "", FUN7(VAR2->VAR8), NULL);
    FUN8(VAR2->VAR8, "", VAR2->VAR9);
    VAR6 = FUN9(VAR2->VAR8);
    VAR6->VAR2 = VAR2;
    VAR6->VAR10 = VAR11 | VAR12;
}