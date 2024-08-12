int FUN1(int VAR1, int VAR2, int VAR3)
{
    int VAR4;
    VAR4 = socket(VAR1, VAR2 | VAR5, VAR3);
    if (VAR4 == -1 && VAR6 == VAR7)
    {
        VAR4 = socket(VAR1, VAR2, VAR3);
        if (VAR4 != -1)
            FUN2(VAR4, VAR8, VAR9);
    }
    return VAR4;
}