void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4, VAR5 = 0;
    FUN2(&VAR3, VAR6);
    for (VAR4 = 0; VAR7[VAR4].VAR8 != 0; VAR4++)
    {
        if (VAR3 & VAR7[VAR4].VAR8)
        {
            VAR5 = FUN3(VAR7[VAR4].VAR9, VAR5);
        }
    }
    VAR2->VAR5 = VAR5;
}