static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    if (VAR4->VAR7 <= VAR2->VAR8 - 2 * VAR4->VAR9)
    {
        VAR4->VAR7 += VAR4->VAR9;
        return;
    }
    VAR6 = 0;
    for (; VAR6 < VAR2->VAR8 - VAR4->VAR9; VAR6++)
        memcpy(VAR4->VAR10->VAR11[0] + VAR6 * VAR4->VAR10->VAR12[0], VAR4->VAR10->VAR11[0] + (VAR6 + VAR4->VAR9) * VAR4->VAR10->VAR12[0], VAR2->VAR13);
    for (; VAR6 < VAR2->VAR8; VAR6++)
        memset(VAR4->VAR10->VAR11[0] + VAR6 * VAR4->VAR10->VAR12[0], VAR14, VAR2->VAR13);
}