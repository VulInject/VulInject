VAR1 FUN1(uint64_t VAR2, uint64_t VAR3)
{
    uint8_t VAR4, VAR5, VAR6;
    int VAR7;
    VAR6 = 0;
    for (VAR7 = 0; VAR7 < 8; VAR7++)
    {
        VAR4 = VAR2 >> (VAR7 * 8);
        VAR5 = VAR3 >> (VAR7 * 8);
        if (VAR4 >= VAR5)
            VAR6 |= 1 << VAR7;
    }
    return VAR6;
}