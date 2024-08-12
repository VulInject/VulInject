enum VAR1 FUN1(const VAR2 *VAR3, unsigned int VAR4)
{
    while (VAR3->VAR5 != VAR6)
    {
        if (FUN2((VAR4 >> 0) & 0xFF) == FUN2((VAR3->VAR4 >> 0) & 0xFF) && FUN2((VAR4 >> 8) & 0xFF) == FUN2((VAR3->VAR4 >> 8) & 0xFF) && FUN2((VAR4 >> 16) & 0xFF) == FUN2((VAR3->VAR4 >> 16) & 0xFF) && FUN2((VAR4 >> 24) & 0xFF) == FUN2((VAR3->VAR4 >> 24) & 0xFF))
            return VAR3->VAR5;
        VAR3++;
    }
    return VAR6;
}