VAR1 *FUN1(int VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13)
{
    VAR1 *VAR14;
    VAR14 = FUN2(sizeof(VAR1));
    if (!VAR14)
        if ((unsigned)VAR2 >= VAR15 / (VAR16 + VAR17))
            VAR14->VAR18 = FUN2(VAR2 * (VAR16 + VAR17));
    if (!VAR14->VAR18)
        goto VAR19;
    VAR14->VAR2 = VAR2;
    VAR14->VAR3 = VAR3;
    VAR14->VAR4 = VAR4;
    VAR14->VAR5 = VAR5;
    VAR14->VAR6 = VAR6;
    VAR14->VAR7 = VAR7;
    VAR14->VAR8 = VAR8;
    VAR14->VAR9 = VAR9;
    VAR14->VAR10 = VAR10;
    VAR14->VAR11 = VAR11;
    VAR14->VAR12 = VAR12;
    VAR14->VAR13 = VAR13;
    VAR14->VAR20 = VAR2 - (VAR12 + VAR13);
    VAR14->VAR21 = VAR3 - (VAR10 + VAR11);
    VAR14->VAR22 = ((VAR4 - VAR8 - VAR9) * VAR23) / VAR14->VAR20;
    VAR14->VAR24 = ((VAR5 - VAR6 - VAR7) * VAR23) / VAR14->VAR21;
    FUN3(&VAR14->VAR25[0][0], (float)VAR14->VAR20 / (float)(VAR4 - VAR8 - VAR9), VAR17, VAR26, 1 << VAR27, 0);
    FUN3(&VAR14->VAR28[0][0], (float)VAR14->VAR21 / (float)(VAR5 - VAR6 - VAR7), VAR17, VAR26, 1 << VAR27, 0);
    return VAR14;
VAR19:
    FUN4(VAR14);