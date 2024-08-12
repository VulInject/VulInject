static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR2->VAR4 >= VAR2->VAR5)
    {
        VAR3 = FUN2(VAR2->VAR6, VAR2->VAR7, VAR8);
        if (VAR3 < 0)
        {
            return VAR3;
        }
        else if (!VAR3)
        {
            return -1;
        }
        else
        {
            VAR2->VAR4 = VAR2->VAR7;
            VAR2->VAR5 = VAR2->VAR7 + VAR3;
        }
    }
    return *VAR2->VAR4++;
}