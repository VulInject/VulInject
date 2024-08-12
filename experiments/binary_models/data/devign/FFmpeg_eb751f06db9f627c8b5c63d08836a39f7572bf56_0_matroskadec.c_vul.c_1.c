static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    int VAR4, VAR5, VAR6, VAR7 = 0;
    if (sscanf(VAR2->VAR8, "", &VAR4, &VAR5, &VAR6) == 3)
        VAR7 = (VAR4 == 57 && VAR5 >= 36 && VAR5 <= 51 && VAR6 >= 100);
    switch (VAR3)
    {
    case VAR9:
        return VAR10;
    case VAR11:
        return VAR12;
    case VAR13:
        return VAR14;
    case VAR15:
        return VAR16;
    case VAR17:
        return VAR7 ? VAR18 : VAR19;
    case VAR20:
        return VAR7 ? VAR19 : VAR18;
    default:
        return VAR12;
    }
}