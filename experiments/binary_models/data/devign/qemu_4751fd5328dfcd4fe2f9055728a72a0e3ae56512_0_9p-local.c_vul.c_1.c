static int FUN1(int VAR1, const char *VAR2, mode_t VAR3)
{
    int VAR4, VAR5;
    VAR4 = FUN2(VAR1, VAR2, VAR6, 0);
    if (VAR4 == -1)
    {
        if (VAR7 == VAR8)
        {
            VAR4 = FUN2(VAR1, VAR2, VAR9, 0);
        }
        if (VAR4 == -1 && VAR7 == VAR10)
        {
            VAR7 = VAR8;
        }
    }
    if (VAR4 == -1)
    {
        return -1;
    }
    VAR5 = FUN3(VAR4, VAR3);
    FUN4(VAR4);
    return VAR5;
}