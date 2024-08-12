static int FUN1(int VAR1, int VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    VAR6 = VAR4[VAR2];
    VAR5 = VAR4[VAR1] << 11;
    VAR7 = VAR6 + VAR5;
    return (VAR7 + (VAR7 << 16)) << 1;
}