VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    VAR4 *VAR5;
    static int VAR6;
    VAR3 = FUN2(FUN3(VAR7));
    VAR5 = &VAR3->VAR5;
    VAR5->VAR8 = VAR2;
    if (FUN4() && !VAR6)
    {
        VAR6 = 1;
        FUN5();
        FUN6(VAR9);
    }
    if (FUN7(VAR3, VAR2) < 0)
    {
        FUN8(FUN9(VAR3));
        return NULL;
    }
    FUN10(FUN9(VAR3), NULL);
    return VAR3;
}