static VAR1 FUN1(uint64_t VAR2)
{
    int VAR3;
    int VAR4 = 0;
    assert(VAR2 >= (1 << 16));
    VAR2 <<= 16;
    for (VAR3 = 19; VAR3 >= 0; VAR3--)
    {
        if (VAR2 < (VAR5[VAR3] << 16))
            continue;
        VAR4 |= 1 << VAR3;
        VAR2 = ((VAR2 << 16) + VAR5[VAR3] / 2) / VAR5[VAR3];
    }
    return VAR4;
}