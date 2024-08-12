static void FUN1(unsigned int *VAR1, VAR2 *VAR3, struct VAR4 *VAR5, unsigned int VAR6, bool VAR7, hwaddr VAR8, size_t VAR9)
{
    unsigned VAR10 = *VAR1;
    assert(VAR10 <= VAR6);
    if (!VAR9)
    {
        FUN2("");
        while (VAR9)
        {
            hwaddr VAR11 = VAR9;
            if (VAR10 == VAR6)
            {
                FUN2("");
                VAR5[VAR10].VAR12 = FUN3(VAR8, &VAR11, VAR7);
                VAR5[VAR10].VAR13 = VAR11;
                VAR3[VAR10] = VAR8;
                VAR9 -= VAR11;
                VAR8 += VAR11;
                VAR10++;
                *VAR1 = VAR10