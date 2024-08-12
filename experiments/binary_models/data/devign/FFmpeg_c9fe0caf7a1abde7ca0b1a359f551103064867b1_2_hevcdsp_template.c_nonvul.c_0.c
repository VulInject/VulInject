static void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, ptrdiff_t VAR6)
{
    int VAR7, VAR8;
    VAR9 *VAR10 = (VAR9 *)VAR3;
    VAR6 /= sizeof(VAR9);
    for (VAR8 = 0; VAR8 < 32; VAR8++)
    {
        for (VAR7 = 0; VAR7 < 32; VAR7++)
        {
            VAR10[VAR7] = FUN2(VAR10[VAR7] + *VAR5);
            VAR5++;
        }
        VAR10 += VAR6;
    }
}