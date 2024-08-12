static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    if (VAR4->VAR5 < sizeof(VAR4->VAR6))
    {
        VAR4->VAR6[VAR4->VAR7] = VAR2;
        if (++VAR4->VAR7 == sizeof(VAR4->VAR6))
            VAR4->VAR7 = 0;
        VAR4->VAR5++;
    }
}