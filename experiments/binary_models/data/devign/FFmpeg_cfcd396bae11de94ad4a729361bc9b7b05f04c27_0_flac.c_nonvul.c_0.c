static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    assert(VAR2->VAR4);
    if (VAR2->VAR5 == 0 && VAR2->VAR4)
    {
        VAR2->VAR5 = (VAR2->VAR6 * VAR2->VAR7 * VAR2->VAR4 + 7) / 8;
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR6; VAR3++)
    {
        VAR2->VAR8[VAR3] = FUN2(VAR2->VAR8[VAR3], sizeof(VAR9) * VAR2->VAR4);
    }
    if (VAR2->VAR10 < VAR2->VAR5)
        VAR2->VAR11 = FUN3(VAR2->VAR11, &VAR2->VAR10, VAR2->VAR5);
}