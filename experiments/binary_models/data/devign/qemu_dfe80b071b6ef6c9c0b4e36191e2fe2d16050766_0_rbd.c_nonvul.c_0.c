static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    ssize_t VAR4;
    do
    {
        char *VAR5 = (char *)&VAR3->VAR6;
        VAR4 = read(VAR3->VAR7[VAR8], VAR5 + VAR3->VAR9, sizeof(VAR3->VAR6) - VAR3->VAR9);
        if (VAR4 > 0)
        {
            VAR3->VAR9 += VAR4;
            if (VAR3->VAR9 == sizeof(VAR3->VAR6))
            {
                VAR3->VAR9 = 0;
                FUN2(VAR3->VAR6);
                VAR3->VAR10--;
            }
        }
    } while (VAR4 < 0 && VAR11 == VAR12);
}