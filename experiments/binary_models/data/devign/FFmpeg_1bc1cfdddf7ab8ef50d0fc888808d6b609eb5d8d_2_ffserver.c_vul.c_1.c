static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    VAR1 *VAR6;
    VAR6 = FUN2(VAR3, VAR5->VAR7);
    if (!VAR6)
    {
        FUN3(VAR2, VAR8);
        return;
    }
    if (VAR6->VAR9 != VAR10 && VAR6->VAR9 != VAR11)
    {
        FUN3(VAR2, VAR12);
        return;
    }
    VAR6->VAR9 = VAR13;
    FUN4(VAR2, VAR14);
    FUN5(VAR2->VAR15, "", VAR6->VAR7);
    FUN5(VAR2->VAR15, "");
}