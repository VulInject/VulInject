void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4, VAR5 = 0;
    for (VAR4 = 0; VAR6[VAR4].VAR7 != 0; VAR4++)
    {
        if (VAR3 & VAR6[VAR4].VAR7)
        {
            VAR5 = FUN2(VAR6[VAR4].VAR8, VAR5);
        }
    }
    VAR2->VAR5 = VAR5;