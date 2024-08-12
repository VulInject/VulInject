static bool FUN1(struct VAR1 *VAR2)
{
    off_t VAR3 = 0;
    off_t VAR4;
    VAR4 = FUN2(VAR2, 0, VAR5);
    if (VAR4 < 0)
    {
        return false;
    }
    VAR3 = FUN2(VAR2, VAR4, VAR6);
    return (VAR3 < 0) && (VAR7 == VAR8);
}