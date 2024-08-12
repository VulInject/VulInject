static void FUN1(VAR1 *VAR2, uint16_t VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7;
    VAR5 -= VAR4;
    for (VAR7 = 0; VAR7 < VAR4; VAR7++, VAR2 += VAR5)
        for (VAR6 = 0; VAR6 < VAR4; VAR6++)
            *VAR2++ = VAR3;
}