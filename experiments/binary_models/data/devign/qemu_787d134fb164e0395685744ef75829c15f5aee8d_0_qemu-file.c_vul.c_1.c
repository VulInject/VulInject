int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    int VAR4 = 0;
    if (VAR3->VAR5 > 0)
    {
        VAR4 = VAR3->VAR5;
        FUN2(VAR2, VAR3->VAR6, VAR3->VAR5);
        VAR3->VAR5 = 0;
    }
    return VAR4;