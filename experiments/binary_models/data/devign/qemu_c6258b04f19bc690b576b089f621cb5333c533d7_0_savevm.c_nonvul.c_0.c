void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    const char *VAR9 = FUN2(VAR4, "");
    if (FUN3(VAR9, &VAR6, &VAR8) < 0)
    {
        FUN4(VAR2, "", FUN5(VAR6), FUN6(VAR8));
        FUN7(VAR8);
    }
}