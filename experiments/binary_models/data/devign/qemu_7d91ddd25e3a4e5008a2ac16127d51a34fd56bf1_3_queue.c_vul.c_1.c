static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned VAR5, const struct VAR6 *VAR7, int VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12;
    size_t VAR13 = 0;
    int VAR14;
    if (VAR2->VAR15 >= VAR2->VAR16 && !VAR10)
    {
        return;
    }
    for (VAR14 = 0; VAR14 < VAR8; VAR14++)
    {
        VAR13 += VAR7[VAR14].VAR17;
    }
    VAR12 = FUN2(sizeof(VAR11) + VAR13);
    VAR12->VAR4 = VAR4;
    VAR12->VAR10 = VAR10;
    VAR12->VAR5 = VAR5;
    VAR12->VAR18 = 0;
    for (VAR14 = 0; VAR14 < VAR8; VAR14++)
    {
        size_t VAR19 = VAR7[VAR14].VAR17;
        memcpy(VAR12->VAR20 + VAR12->VAR18, VAR7[VAR14].VAR21, VAR19);
        VAR12->VAR18 += VAR19;
    }
    FUN3(&VAR2->VAR22, VAR12, VAR23);