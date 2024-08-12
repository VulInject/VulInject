static int FUN1(int VAR1, int VAR2, int VAR3)
{
    if (VAR1 == VAR4)
    {
        if (!VAR2)
        {
            VAR1 = VAR3 ? VAR5 : VAR6;
        }
        else if (!VAR3)
        {
            VAR1 = VAR2 ? VAR7 : VAR6;
        }
    }
    return VAR1;
}