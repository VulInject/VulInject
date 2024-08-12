static VAR1 FUN1(VAR2 *VAR3)
{
    int64_t VAR4;
    int VAR5;
    switch (VAR3->VAR6)
    {
    case VAR7:
    case VAR8:
    case VAR9:
    case VAR10:
        VAR4 = VAR3->VAR4;
        break;
    case VAR11:
        VAR5 = FUN2(VAR3->VAR12);
        VAR4 = VAR5 ? VAR3->VAR13 * VAR3->VAR14 * VAR5 : VAR3->VAR4;
        break;
    default:
        VAR4 = 0;
        break;
    }
    return VAR4;
}