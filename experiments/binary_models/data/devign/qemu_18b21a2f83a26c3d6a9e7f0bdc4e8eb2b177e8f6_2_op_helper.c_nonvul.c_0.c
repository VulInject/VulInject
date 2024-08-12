static void FUN1(target_ulong VAR1, int VAR2)
{
    VAR1 &= ~(VAR2 - 1);
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR2; VAR3 += 4)
    {
        FUN2(VAR1 + VAR3, 0);
    }
    if (VAR4->VAR5 == VAR1)
        VAR4->VAR5 = (VAR6)-1ULL;
}