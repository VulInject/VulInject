static int FUN1(VAR1 *VAR2)
{
    static const char *VAR3 = "";
    int VAR4;
    static const int VAR5[] = {225, 226, 0};
    VAR6 *VAR7 = VAR2->VAR8;
    if (FUN2(VAR7, VAR3, NULL, NULL) < 0)
    {
        FUN3(VAR7);
        if ((VAR4 = FUN4(VAR2)) < 0)
        {
            FUN5(VAR2, VAR9, "");
            return VAR4;
        }
    }
    else
    {
        FUN6(VAR7);
    }
    if (FUN7(VAR7, NULL, VAR5) < 225)
    {
        FUN8(&VAR7->VAR10);
        if ((VAR4 = FUN4(VAR2)) < 0)
        {
            FUN5(VAR2, VAR9, "");
            return VAR4;
        }
    }
    return 0;
}