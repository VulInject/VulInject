static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5;
    bool *VAR6 = VAR3;
    VAR5 = (VAR4 *)FUN2(VAR2, VAR7);
    if (!VAR5 || (VAR6 && !*VAR6 && VAR5->VAR8))
    {
        return;
    }
    FUN3(""%VAR9\"", FUN4(VAR2));
    if (VAR5->VAR10)
    {
        FUN3("", VAR5->VAR10->VAR11);
    }
    if (FUN5(VAR5))
    {
        FUN3(""%VAR9\"", FUN6(VAR5));
    }
    if (VAR5->VAR12)
    {
        FUN3(""%VAR9\"", VAR5->VAR12);
    }
    if (VAR5->VAR8)
    {
        FUN3("");
    }
    FUN3("");
}