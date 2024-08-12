static const VAR1 *FUN1(void *VAR2, const char *VAR3, double VAR4, int VAR5, int64_t VAR6)
{
    const VAR1 *VAR7 = FUN2(VAR2, VAR3, NULL, 0, 0);
    void *VAR8;
    if (!VAR7 || VAR7->VAR9 <= 0)
        return NULL;
    if (VAR7->VAR10 * VAR5 < VAR4 * VAR6 || VAR7->VAR11 * VAR5 > VAR4 * VAR6)
    {
        FUN3(NULL, VAR12, "", VAR4, VAR3);
        return NULL;
    }
    VAR8 = ((VAR13 *)VAR2) + VAR7->VAR9;
    switch (VAR7->VAR14)
    {
    case VAR15:
    case VAR16:
        *(int *)VAR8 = FUN4(VAR4 / VAR5) * VAR6;
        break;
    case VAR17:
        *(VAR18 *)VAR8 = FUN4(VAR4 / VAR5) * VAR6;
        break;
    case VAR19:
        *(float *)VAR8 = VAR4 * VAR6 / VAR5;
        break;
    case VAR20:
        *(double *)VAR8 = VAR4 * VAR6 / VAR5;
        break;
    case VAR21:
        if ((int)VAR4 == VAR4)
            *(VAR22 *)VAR8 = (VAR22){VAR4 * VAR6, VAR5};
        else
            *(VAR22 *)VAR8 = FUN5(VAR4 * VAR6 / VAR5, 1 << 24);
        break;
    default:
        return NULL;
    }
    return VAR7;
}