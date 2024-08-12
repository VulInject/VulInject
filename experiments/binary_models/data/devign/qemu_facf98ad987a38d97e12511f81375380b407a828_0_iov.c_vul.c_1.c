void FUN1(VAR1 *VAR2, struct VAR3 *VAR4, unsigned int VAR5, size_t VAR6, size_t VAR7)
{
    int VAR8;
    size_t VAR9;
    assert(VAR2->VAR10 != -1);
    for (VAR8 = 0, VAR9 = 0; VAR9 < VAR7 && VAR8 < VAR5; VAR8++)
    {
        if (VAR6 < VAR4[VAR8].VAR11)
        {
            size_t VAR12 = FUN2(VAR4[VAR8].VAR11 - VAR6, VAR7 - VAR9);
            FUN3(VAR2, VAR4[VAR8].VAR13 + VAR6, VAR12);
            VAR9 += VAR12;
            VAR6 = 0;
        }
        else
        {
            VAR6 -= VAR4[VAR8].VAR11;
            assert(VAR6 == 0);