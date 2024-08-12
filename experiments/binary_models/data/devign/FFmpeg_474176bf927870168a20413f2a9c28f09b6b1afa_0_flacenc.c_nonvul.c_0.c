static int FUN1(int VAR1, int VAR2, int VAR3)
{
    int VAR4, VAR5;
    for (VAR4 = VAR1; VAR4 > 0; VAR4--)
    {
        VAR5 = (1 << VAR4);
        if (!(VAR2 % VAR5) && (VAR2 > VAR5 * VAR3))
        {
            break;
        }
    }
    return VAR4;
}