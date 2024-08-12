static void FUN1(VADisplay VAR1, VAR2 *VAR3, unsigned int VAR4)
{
    unsigned int VAR5;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        if (VAR3[VAR5] != VAR6)
        {
            FUN2(VAR1, VAR3[VAR5]);
            VAR3[VAR5] = VAR6;
        }
    }
}