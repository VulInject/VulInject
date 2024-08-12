static void FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4)
{
    struct VAR5 *VAR6 = FUN2(VAR2, VAR3);
    if (!VAR6)
        return;
    if (VAR6->VAR7 >= VAR8)
        return;
    VAR6->VAR9[VAR6->VAR7++] = VAR4;
}