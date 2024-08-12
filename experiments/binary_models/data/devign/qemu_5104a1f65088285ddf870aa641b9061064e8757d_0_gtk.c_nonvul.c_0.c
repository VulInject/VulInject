static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = "";
    VAR4 *VAR5;
    const char *VAR6 = "";
    if (FUN2(VAR2))
    {
        VAR6 = "";
    }
    if (!FUN3())
    {
        VAR3 = "";
    }
    if (VAR7)
    {
        VAR5 = FUN4("", VAR7, VAR3, VAR6);
    }
    else
    {
        VAR5 = FUN4("", VAR3, VAR6);
    }
    FUN5(FUN6(VAR2->VAR8), VAR5);
    FUN7(VAR5);
}