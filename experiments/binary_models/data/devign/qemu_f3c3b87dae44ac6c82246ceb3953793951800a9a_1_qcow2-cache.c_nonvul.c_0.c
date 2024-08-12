int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = FUN2(VAR2, VAR4);
    if (VAR5 == 0)
    {
        int VAR6 = FUN3(VAR2->VAR7->VAR2);
        if (VAR6 < 0)
        {
            VAR5 = VAR6;
        }
    }
    return VAR5;
}