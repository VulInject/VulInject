int FUN1(VAR1 *VAR2, bool VAR3, VAR4 **VAR5)
{
    int VAR6 = 0;
    VAR6 = FUN2(VAR2, VAR3, VAR5);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    VAR2->VAR3 = VAR3;
    return 0;
}