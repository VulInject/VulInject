VAR1 FUN1(int VAR2, VAR3 *VAR4, int VAR5)
{
    uint32_t VAR6 = 0, VAR7 = 0;
    int VAR8;
    for (VAR8 = 0; VAR8 < VAR2 - 1; VAR8 += 2)
    {
        VAR6 += (VAR1)VAR4[VAR8];
        VAR7 += (VAR1)VAR4[VAR8 + 1];
    }
    if (VAR8 < VAR2)
    {
        VAR6 += (VAR1)VAR4[VAR8];
    }
    if (VAR5 & 1)
    {
        return VAR6 + (VAR7 << 8);
    }
    else
    {
        return VAR7 + (VAR6 << 8);
    }
}