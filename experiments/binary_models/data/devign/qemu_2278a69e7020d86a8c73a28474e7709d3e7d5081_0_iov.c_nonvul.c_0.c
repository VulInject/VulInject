VAR1 FUN1(const struct VAR2 *VAR3, const unsigned int VAR4, size_t VAR5, int VAR6, size_t VAR7)
{
    size_t VAR8;
    unsigned int VAR9;
    for (VAR9 = 0, VAR8 = 0; (VAR5 || VAR8 < VAR7) && VAR9 < VAR4; VAR9++)
    {
        if (VAR5 < VAR3[VAR9].VAR10)
        {
            size_t VAR11 = FUN2(VAR3[VAR9].VAR10 - VAR5, VAR7 - VAR8);
            memset(VAR3[VAR9].VAR12 + VAR5, VAR6, VAR11);
            VAR8 += VAR11;
            VAR5 = 0;
        }
        else
        {
            VAR5 -= VAR3[VAR9].VAR10;
        }
    }
    assert(VAR5 == 0);
    return VAR8;
}