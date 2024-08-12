static int FUN1(uint32_t VAR1, uint32_t VAR2)
{
    int VAR3 = 0, VAR4, VAR5;
    for (VAR5 = 0; VAR5 < 32; VAR5 += 8)
    {
        VAR4 = ((VAR1 >> VAR5) & 0xFF) - ((VAR2 >> VAR5) & 0xFF);
        VAR3 += VAR4 * VAR4;
    }
    return VAR3;
}