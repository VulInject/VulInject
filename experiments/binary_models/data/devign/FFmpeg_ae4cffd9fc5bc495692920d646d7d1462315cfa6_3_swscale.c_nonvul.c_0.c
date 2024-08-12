static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 **VAR5, int VAR6, VAR3 *VAR7, VAR3 **VAR8, int VAR9, VAR10 *VAR11, int VAR12, int VAR13)
{
    int VAR14;
    switch (VAR2->VAR15)
    {
    case VAR16:
    case VAR17:
        FUN2(VAR18)
        ((VAR18 *)VAR11)[VAR19 + 0] = VAR20[VAR21] + VAR22[VAR21] + VAR23[VAR21];
        ((VAR18 *)VAR11)[VAR19 + 1] = VAR20[VAR24] + VAR22[VAR24] + VAR23[VAR24];
    }
    break;
case VAR25:
    FUN2(VAR10)
    ((VAR10 *)VAR11)[0] = VAR20[VAR21];
    ((VAR10 *)VAR11)[1] = VAR22[VAR21];
    ((VAR10 *)VAR11)[2] = VAR23[VAR21];
    ((VAR10 *)VAR11)[3] = VAR20[VAR24];
    ((VAR10 *)VAR11)[4] = VAR22[VAR24];
    ((VAR10 *)VAR11)[5] = VAR23[VAR24];
    VAR11 += 6;
}