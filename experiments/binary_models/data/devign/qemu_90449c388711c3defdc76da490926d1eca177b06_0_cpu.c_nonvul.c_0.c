VAR1 *FUN1(const char *VAR2)
{
    VAR3 *VAR4;
    VAR1 *VAR5;
    VAR4 = FUN2(FUN3(VAR6));
    VAR5 = &VAR4->VAR5;
    if (FUN4())
    {
        FUN5(VAR5);
    }
    if (FUN6(VAR5, VAR2) < 0)
    {
        FUN7(FUN8(VAR4));
        return NULL;
    }
    FUN9(VAR5);
    return VAR5;
}