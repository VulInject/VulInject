void FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR2->VAR4 = VAR3;
    if (VAR3)
    {
        VAR2->VAR5 |= VAR6;
    }
    else
    {
        VAR2->VAR5 &= ~VAR6;
    }
}