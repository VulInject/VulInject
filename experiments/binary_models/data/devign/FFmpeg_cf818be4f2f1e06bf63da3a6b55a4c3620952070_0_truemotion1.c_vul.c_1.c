static int FUN1(int VAR1, int VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR5 = VAR4[VAR1];
    VAR6 = VAR4[VAR2];
    return (VAR5 + (VAR6 << 8) + (VAR6 << 16)) << 1;
}