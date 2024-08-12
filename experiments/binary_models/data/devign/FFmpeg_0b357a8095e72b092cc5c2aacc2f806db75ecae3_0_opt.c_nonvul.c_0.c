static int FUN1(void *VAR1, const VAR2 *VAR3, void *VAR4, double VAR5, int VAR6, int64_t VAR7)
{
    if (VAR3->VAR8 != VAR9 && (VAR3->VAR10 * VAR6 < VAR5 * VAR7 || VAR3->VAR11 * VAR6 > VAR5 * VAR7))
    {
        FUN2(VAR1, VAR12, "", VAR5 * VAR7 / VAR6, VAR3->VAR13);
        return FUN3(VAR14);
    }
    switch (VAR3->VAR8)
    {
    case VAR9:
    case VAR15:
        *(int *)VAR4 = FUN4(VAR5 / VAR6) * VAR7;
        break;
    case VAR16:
        *(VAR17 *)VAR4 = FUN4(VAR5 / VAR6) * VAR7;
        break;
    case VAR18:
        *(float *)VAR4 = VAR5 * VAR7 / VAR6;
        break;
    case VAR19:
        *(double *)VAR4 = VAR5 * VAR7 / VAR6;
        break;
    case VAR20:
        if ((int)VAR5 == VAR5)
            *(VAR21 *)VAR4 = (VAR21){VAR5 * VAR7, VAR6};
        else
            *(VAR21 *)VAR4 = FUN5(VAR5 * VAR7 / VAR6, 1 << 24);
        break;
    default:
        return FUN3(VAR22);
    }
    return 0;
}