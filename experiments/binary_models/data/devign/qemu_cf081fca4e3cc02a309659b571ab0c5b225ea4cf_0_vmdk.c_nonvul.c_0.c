static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    for (VAR8 = 0; VAR8 < VAR6->VAR9; VAR8++)
    {
        if (!VAR6->VAR10[VAR8].VAR11)
        {
            VAR2->VAR12.VAR13 = FUN2(VAR2->VAR12.VAR13, VAR6->VAR10[VAR8].VAR14 << VAR15);
        }
    }
}