int FUN1(int *VAR1, int VAR2, int VAR3, enum AVSampleFormat VAR4, int VAR5)
{
    int VAR6;
    int VAR7 = FUN2(VAR4);
    int VAR8 = FUN3(VAR4);
    if (!VAR7 || VAR3 <= 0 || VAR2 <= 0)
        if (!VAR5)
        {
            VAR5 = 1;
            VAR3 = FUN4(VAR3, 32);
        }
    if (VAR2 > VAR9 / VAR5 || (VAR10)VAR2 * VAR3 > (VAR9 - (VAR5 * VAR2)) / VAR7)
        VAR6 = VAR8 ? FUN4(VAR3 * VAR7, VAR5) : FUN4(VAR3 * VAR7 * VAR2, VAR5);
    if (VAR1)
        *VAR1 = VAR6;
    return VAR8 ? VAR6 * VAR2 : VAR6;