static VAR1 FUN1(VAR2 *VAR3, int VAR4, int VAR5, VAR6 *VAR7, int VAR8, int VAR9)
{
    int VAR10;
    uint64_t VAR11[VAR12 + 1];
    int VAR13;
    RiceContext VAR14;
    uint64_t VAR15[VAR12 + 1][VAR16] = {{0}};
    assert(VAR4 >= 0 && VAR4 <= VAR12);
    assert(VAR5 >= 0 && VAR5 <= VAR12);
    assert(VAR4 <= VAR5);
    VAR14.VAR17 = VAR3->VAR17;
    for (VAR10 = 0; VAR10 < VAR8; VAR10++)
        VAR3->VAR18[VAR10] = (2 * VAR7[VAR10]) ^ (VAR7[VAR10] >> 31);
    FUN2(VAR4, VAR5, VAR3->VAR18, VAR8, VAR9, VAR15);
    VAR13 = VAR4;
    VAR11[VAR4] = VAR19;
    for (VAR10 = VAR4; VAR10 <= VAR5; VAR10++)
    {
        VAR11[VAR10] = FUN3(&VAR14, VAR10, VAR15[VAR10], VAR8, VAR9);
        if (VAR11[VAR10] <= VAR11[VAR13])
        {
            VAR13 = VAR10;
            *VAR3 = VAR14;
        }
    }
    return VAR11[VAR13];
}