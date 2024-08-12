static int FUN1(void *VAR1, const char *VAR2, double VAR3, int VAR4, int64_t VAR5, const VAR6 **VAR7)
{
    const VAR6 *VAR8 = FUN2(VAR1, VAR2, NULL, 0, 0);
    void *VAR9;
    if (VAR7)
        *VAR7 = VAR8;
    if (!VAR8)
        return VAR10;
    if (VAR8->VAR11 * VAR4 < VAR3 * VAR5 || VAR8->VAR12 * VAR4 > VAR3 * VAR5)
    {
        FUN3(VAR1, VAR13, "", VAR3, VAR2);
        return FUN4(VAR14);
    }
    VAR9 = ((VAR15 *)VAR1) + VAR8->VAR16;
    switch (VAR8->VAR17)
    {
    case VAR18:
    case VAR19:
        *(int *)VAR9 = FUN5(VAR3 / VAR4) * VAR5;
        break;
    case VAR20:
        *(VAR21 *)VAR9 = FUN5(VAR3 / VAR4) * VAR5;
        break;
    case VAR22:
        *(float *)VAR9 = VAR3 * VAR5 / VAR4;
        break;
    case VAR23:
        *(double *)VAR9 = VAR3 * VAR5 / VAR4;
        break;
    case VAR24:
        if ((int)VAR3 == VAR3)
            *(VAR25 *)VAR9 = (VAR25){VAR3 * VAR5, VAR4};
        else
            *(VAR25 *)VAR9 = FUN6(VAR3 * VAR5 / VAR4, 1 << 24);
        break;
    default:
        return FUN4(VAR26);
    }
    return 0;
}