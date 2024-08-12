int FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5)
{
    int VAR6;
    VAR6 = FUN2(VAR1, VAR3, VAR5, VAR7);
    if (VAR6 != -1 || VAR8 != VAR9)
    {
        return VAR6;
    }
    VAR6 = FUN3(VAR1, VAR3, VAR5);
    if (VAR6 >= 0)
    {
        FUN4(VAR6);
    }
    return VAR6;
}