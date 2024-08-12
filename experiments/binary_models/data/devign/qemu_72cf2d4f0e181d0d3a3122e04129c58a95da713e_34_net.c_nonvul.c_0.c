static VAR1 FUN1(VAR2 *VAR3, const struct VAR4 *VAR5, int VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10;
    size_t VAR11 = 0;
    int VAR12;
    VAR11 = FUN2(VAR5, VAR6);
    VAR10 = FUN3(sizeof(VAR9) + VAR11);
    VAR10->VAR3 = VAR3;
    VAR10->VAR8 = VAR8;
    VAR10->VAR13 = 0;
    for (VAR12 = 0; VAR12 < VAR6; VAR12++)
    {
        size_t VAR14 = VAR5[VAR12].VAR15;
        memcpy(VAR10->VAR16 + VAR10->VAR13, VAR5[VAR12].VAR17, VAR14);
        VAR10->VAR13 += VAR14;
    }
    FUN4(&VAR3->VAR18->VAR19, VAR10, VAR20);
    return VAR10->VAR13;
}