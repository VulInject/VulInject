static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7 = 0;
    if (!(*VAR4 & VAR8))
    {
        *VAR4 |= VAR8;
        VAR7 = 1;
    }
    if (!(*VAR4 & VAR9))
    {
        if (VAR6 == 1 && VAR5 == 0)
        {
            *VAR4 |= VAR9;
            VAR7 = 1;
        }
        else
        {
            VAR2->VAR10 &= ~VAR11;
        }
    }
    return VAR7;
}