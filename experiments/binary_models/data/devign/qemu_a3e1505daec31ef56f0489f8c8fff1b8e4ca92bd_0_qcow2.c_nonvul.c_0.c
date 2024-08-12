static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    uint64_t VAR6;
    int VAR7 = (FUN2(VAR8, VAR4->VAR9) / VAR10);
    int VAR11, VAR12 = 0;
    VAR11 = FUN3(VAR4->VAR13, VAR4->VAR9 / sizeof(VAR14));
    if (VAR4->VAR15 >= 3 && !VAR4->VAR16 && 3 + VAR11 <= VAR4->VAR17)
    {
        return FUN4(VAR2);
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6 += VAR7)
    {
        VAR12 = FUN5(VAR2, VAR6 * VAR10, FUN6(VAR7, VAR2->VAR18 - VAR6), VAR19, true);
        if (VAR12 < 0)
        {
            break;
        }
    }
    return VAR12;
}