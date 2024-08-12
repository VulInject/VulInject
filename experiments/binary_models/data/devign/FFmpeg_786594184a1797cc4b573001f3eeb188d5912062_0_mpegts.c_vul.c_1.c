static void FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4)
{
    struct VAR5 *VAR6 = FUN2(VAR2, VAR3);
    int VAR7;
    if (!VAR6)
        return;
    if (VAR6->VAR8 >= VAR9)
        return;
    for (VAR7 = 0; VAR7 < VAR9; VAR7++)
        if (VAR6->VAR10[VAR7] == VAR4)
            return;
    VAR6->VAR10[VAR6->VAR8++] = VAR4;
}