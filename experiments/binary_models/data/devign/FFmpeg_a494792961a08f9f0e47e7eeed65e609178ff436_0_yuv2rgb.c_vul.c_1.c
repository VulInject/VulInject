static void FUN1(VAR1 *VAR2[256 + 2 * VAR3], const int VAR4, const int VAR5, void *VAR6)
{
    int VAR7;
    VAR1 *VAR8 = VAR6;
    VAR8 -= VAR4 * (VAR5 >> 9);
    for (VAR7 = 0; VAR7 < 256 + 2 * VAR3; VAR7++)
    {
        int64_t VAR9 = FUN2(VAR7 - VAR3, 0, 255) * VAR5;
        VAR2[VAR7] = VAR8 + VAR4 * (VAR9 >> 16);
    }
}