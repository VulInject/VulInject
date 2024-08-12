VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    static int VAR4;
    VAR3 = FUN2(sizeof(VAR1));
    FUN3(VAR3);
    VAR3->VAR5 = VAR2;
    if (!VAR4)
    {
        VAR4 = 1;
        FUN4();
        VAR6 = FUN5(VAR7);
    }
    if (FUN6(VAR3, VAR2) < 0)
    {
        FUN7(VAR3);
        return NULL;
    }
    FUN8(VAR3);
    FUN9(VAR3);
    FUN10(VAR3);
    return VAR3;
}