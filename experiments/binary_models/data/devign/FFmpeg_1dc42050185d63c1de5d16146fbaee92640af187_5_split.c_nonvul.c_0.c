static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9 = 0;
    for (VAR8 = 0; VAR8 < VAR6->VAR10; VAR8++)
    {
        VAR3 *VAR11 = FUN2(VAR4, ~VAR12);
        if (!VAR11)
        {
            VAR9 = FUN3(VAR13);
            break;
        }
        VAR9 = FUN4(VAR2->VAR7->VAR14[VAR8], VAR11);
        if (VAR9 < 0)
            break;
    }
    FUN5(VAR4);
    return VAR9;
}