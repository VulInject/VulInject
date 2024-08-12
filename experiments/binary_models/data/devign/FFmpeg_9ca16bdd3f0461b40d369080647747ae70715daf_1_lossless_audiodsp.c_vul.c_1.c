static VAR1 FUN1(VAR2 *VAR3, const VAR2 *VAR4, const VAR2 *VAR5, int VAR6, int VAR7)
{
    int VAR8 = 0;
    while (VAR6--)
    {
        VAR8 += *VAR3 * *VAR4++;
        *VAR3++ += VAR7 * *VAR5++;
    }
    return VAR8;
}