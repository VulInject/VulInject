static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    VAR1 *VAR6;
    VAR6 = FUN2(VAR3, VAR5->VAR7);
    if (!VAR6)
    {
        FUN3(VAR2, VAR8);
        return;
    }
    FUN4(VAR6);
    FUN5(VAR2, VAR9);
    FUN6(VAR2->VAR10, "", VAR6->VAR7);
    FUN6(VAR2->VAR10, "");
}