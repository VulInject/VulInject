static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    bool VAR5 = VAR4->VAR6 && VAR4->VAR5;
    bool VAR7 = VAR4->VAR8 && VAR4->VAR7;
    if (VAR5 || VAR7)
    {
        FUN2(VAR2, "", VAR5, &VAR9);
        FUN2(VAR2, "", VAR7, &VAR9);
    }
    else if (VAR4->VAR6 || VAR4->VAR8)
    {
        FUN2(VAR2, "", !VAR4->VAR6, &VAR9);
        FUN2(VAR2, "", !VAR4->VAR8, &VAR9);
    }
    if (VAR4->VAR10)
    {
        FUN3(VAR2, "", VAR4->VAR11, &VAR9);
    }
    FUN4(VAR2, "", VAR4->VAR12, &VAR9);
    FUN4(VAR2, "", VAR4->VAR13, &VAR9);
}