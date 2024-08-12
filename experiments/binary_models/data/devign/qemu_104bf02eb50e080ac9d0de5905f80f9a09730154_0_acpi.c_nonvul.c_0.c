static int FUN1(const VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    VAR4 = 0;
    for (VAR5 = 0; VAR5 < VAR3; VAR5++)
    {
        VAR4 += VAR2[VAR5];
    }
    return (-VAR4) & 0xff;
}