static void FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4, ptrdiff_t VAR5)
{
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
        VAR2[VAR6] -= FUN2(VAR3[VAR6], VAR4);
}