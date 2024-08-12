VAR1 *FUN1(const char *VAR2)
{
    VAR3 *VAR4;
    VAR1 *VAR5;
    static int VAR6;
    VAR4 = FUN2(FUN3(VAR7));
    VAR5 = &VAR4->VAR5;
    VAR5->VAR8 = VAR2;
    if (FUN4() && !VAR6)
    {
        VAR6 = 1;
        FUN5();
        VAR9 = FUN6(VAR10);
    }
    if (FUN7(VAR4, VAR2) < 0)
    {
        FUN8(FUN9(VAR4));
        return NULL;
    }
    FUN10(VAR5);
    return VAR5;
}