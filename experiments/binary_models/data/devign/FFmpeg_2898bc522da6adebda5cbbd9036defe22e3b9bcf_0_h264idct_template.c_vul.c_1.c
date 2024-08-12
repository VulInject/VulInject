void FUN1(VAR1)(VAR2 *VAR3, int VAR4)
{
    const int VAR5 = 16 * 2;
    const int VAR6 = 16;
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR12 *VAR13 = (VAR12 *)VAR3;
    VAR7 = VAR13[VAR5 * 0 + VAR6 * 0];
    VAR8 = VAR13[VAR5 * 0 + VAR6 * 1];
    VAR9 = VAR13[VAR5 * 1 + VAR6 * 0];
    VAR10 = VAR13[VAR5 * 1 + VAR6 * 1];
    VAR11 = VAR7 - VAR8;
    VAR7 = VAR7 + VAR8;
    VAR8 = VAR9 - VAR10;
    VAR9 = VAR9 + VAR10;
    VAR13[VAR5 * 0 + VAR6 * 0] = ((VAR7 + VAR9) * VAR4) >> 7;
    VAR13[VAR5 * 0 + VAR6 * 1] = ((VAR11 + VAR8) * VAR4) >> 7;
    VAR13[VAR5 * 1 + VAR6 * 0] = ((VAR7 - VAR9) * VAR4) >> 7;
    VAR13[VAR5 * 1 + VAR6 * 1] = ((VAR11 - VAR8) * VAR4) >> 7;
}