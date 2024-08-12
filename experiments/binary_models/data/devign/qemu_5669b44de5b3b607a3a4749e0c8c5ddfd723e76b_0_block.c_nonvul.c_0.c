static int FUN1(int VAR1)
{
    VAR1 |= VAR2;
    VAR1 |= VAR3 | VAR4;
    if (VAR1 & VAR5)
    {
        VAR1 &= ~VAR6;
    }
    VAR1 &= ~(VAR5 | VAR7 | VAR8);
    return VAR1;
}