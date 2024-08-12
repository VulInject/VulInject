static int FUN1(int VAR1, int VAR2, VAR3 *VAR4) static int FUN1(int VAR2, int VAR1, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR5 = VAR4[VAR2];
    VAR5 += (VAR5 * 32) + (VAR5 * 1024);
    VAR6 = VAR4[VAR1];
    VAR6 += (VAR6 * 32) + (VAR6 * 1024);
    return (VAR5 + (VAR6 * (1 << 16))) * 2;
}