static int FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    int VAR4, VAR5;
    if ((VAR4 = FUN2(&VAR3, VAR1)))
        return VAR4;
    if (VAR6)
        FUN3(VAR3);
    if (VAR7)
    {
        FUN4("");
        for (VAR5 = 0; VAR5 < VAR3->VAR8; VAR5++)
            FUN5(VAR3, VAR5);
        FUN6("");
    }
    if (VAR9)
        FUN7(VAR3);
    FUN8(&VAR3);
    return 0;
}