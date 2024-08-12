static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6;
    while (VAR5 > 0)
    {
        VAR6 = send(VAR2->VAR7, VAR4, VAR5, 0);
        if (VAR6 < 0)
        {
            if (VAR8 != VAR9)
                return;
        }
        else
        {
            VAR4 += VAR6;
            VAR5 -= VAR6;
        }
    }
    FUN2(VAR2->VAR10, VAR4, VAR5);
}