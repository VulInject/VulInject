static void FUN1(VAR1)(VAR2 *VAR3, const int *VAR4, VAR5 *VAR6, ptrdiff_t VAR7)
{
    int VAR8;
    for (VAR8 = 0; VAR8 < 16; VAR8++)
        FUN1(VAR9)
        (VAR3 + VAR4[VAR8], VAR6 + VAR8 * 16 * sizeof(VAR10), VAR7);
}