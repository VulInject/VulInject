FUN1(const unsigned char *VAR1, enum floatformat_byteorders VAR2, unsigned int VAR3, unsigned int VAR4, unsigned int VAR5)
{
    unsigned long VAR6;
    unsigned int VAR7;
    int VAR8;
    VAR7 = (VAR4 + VAR5) / VAR9;
    if (VAR2 == VAR10)
        VAR7 = (VAR3 / VAR9) - VAR7 - 1;
    VAR8 = ((VAR4 + VAR5) % VAR9) - VAR9;
    VAR6 = *(VAR1 + VAR7) >> (-VAR8);
    VAR8 += VAR9;
    if (VAR2 == VAR10)
        ++VAR7;
    else
        --VAR7;
    while ((unsigned int)VAR8 < VAR5)
    {
        if (VAR5 - VAR8 < VAR9)
            VAR6 |= (unsigned long)(*(VAR1 + VAR7) & ((1 << (VAR5 - VAR8)) - 1)) << VAR8;
        else
            VAR6 |= (unsigned long)*(VAR1 + VAR7) << VAR8;
        VAR8 += VAR9;
        if (VAR2 == VAR10)
            ++VAR7;
        else
            --VAR7;
    }
    return VAR6;
}