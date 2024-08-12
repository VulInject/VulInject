static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    if (FUN2(VAR2->VAR8, ((VAR9)VAR4->VAR10 * 512) + (VAR4->VAR11 * sizeof(VAR4->VAR12)), &(VAR4->VAR12), sizeof(VAR4->VAR12)) != sizeof(VAR4->VAR12))
        return -1;
    if (VAR6->VAR13 != 0)
    {
        VAR4->VAR10 = VAR6->VAR14[VAR4->VAR15];
        if (FUN2(VAR2->VAR8, ((VAR9)VAR4->VAR10 * 512) + (VAR4->VAR11 * sizeof(VAR4->VAR12)), &(VAR4->VAR12), sizeof(VAR4->VAR12)) != sizeof(VAR4->VAR12))
            return -1;
    }
    return 0;
}