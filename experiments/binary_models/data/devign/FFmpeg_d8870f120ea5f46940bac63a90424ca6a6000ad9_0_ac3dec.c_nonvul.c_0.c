static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    float VAR4 = VAR5[VAR2->VAR6];
    float VAR7 = VAR5[VAR2->VAR8];
    for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
    {
        VAR2->VAR10[VAR3][0] = VAR5[VAR11[VAR2->VAR12][VAR3][0]];
        VAR2->VAR10[VAR3][1] = VAR5[VAR11[VAR2->VAR12][VAR3][1]];
    }
    if (VAR2->VAR12 > 1 && VAR2->VAR12 & 1)
    {
        VAR2->VAR10[1][0] = VAR2->VAR10[1][1] = VAR4;
    }
    if (VAR2->VAR12 == VAR13 || VAR2->VAR12 == VAR14)
    {
        int VAR15 = VAR2->VAR12 - 2;
        VAR2->VAR10[VAR15][0] = VAR2->VAR10[VAR15][1] = VAR7 * VAR16;
    }
    if (VAR2->VAR12 == VAR17 || VAR2->VAR12 == VAR18)
    {
        int VAR15 = VAR2->VAR12 - 4;
        VAR2->VAR10[VAR15][0] = VAR2->VAR10[VAR15 + 1][1] = VAR7;
    }
    VAR2->VAR19[0] = VAR2->VAR19[1] = 0.0f;
    for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
    {
        VAR2->VAR19[0] += VAR2->VAR10[VAR3][0];
        VAR2->VAR19[1] += VAR2->VAR10[VAR3][1];
    }
    VAR2->VAR19[0] = 1.0f / VAR2->VAR19[0];
    VAR2->VAR19[1] = 1.0f / VAR2->VAR19[1];
}