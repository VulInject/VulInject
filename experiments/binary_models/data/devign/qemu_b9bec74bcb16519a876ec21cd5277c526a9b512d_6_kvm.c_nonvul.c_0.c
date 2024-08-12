static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 0;
    for (VAR3 = 0; VAR3 < FUN2(VAR5) - 1; VAR3++)
    {
        if (FUN3(VAR2->VAR6, VAR5[VAR3].VAR7))
        {
            VAR4 |= (1 << VAR5[VAR3].VAR8);
        }
    }
    return VAR4;
}