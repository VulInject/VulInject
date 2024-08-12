static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7)
{
    VAR7->VAR8[0] = VAR6->VAR8[0] + VAR3 + VAR4 * VAR6->VAR9[0];
    VAR7->VAR9[0] = VAR6->VAR9[0];
    if (VAR2->VAR10 == VAR11)
    {
        VAR7->VAR8[1] = VAR6->VAR8[1] + (VAR3 >> 1) + (VAR4 >> 1) * VAR6->VAR9[1];
        VAR7->VAR9[1] = VAR6->VAR9[1];
        VAR7->VAR8[2] = VAR6->VAR8[2] + (VAR3 >> 1) + (VAR4 >> 1) * VAR6->VAR9[2];
        VAR7->VAR9[2] = VAR6->VAR9[2];
    }
}