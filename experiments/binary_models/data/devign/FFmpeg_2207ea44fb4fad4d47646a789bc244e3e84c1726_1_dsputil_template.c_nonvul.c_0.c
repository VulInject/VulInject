void FUN1(VAR1)(VAR2 *VAR3, const VAR2 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11)
{
    int VAR12, VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    if (VAR9 >= VAR11)
    {
        VAR4 -= VAR9 * VAR5;
        VAR4 += (VAR11 - 1) * VAR5;
        VAR9 = VAR11 - 1;
    }
    else if (VAR9 <= -VAR7)
    {
        VAR4 -= VAR9 * VAR5;
        VAR4 += (1 - VAR7) * VAR5;
        VAR9 = 1 - VAR7;
    }
    if (VAR8 >= VAR10)
    {
        VAR4 += (VAR10 - 1 - VAR8) * sizeof(VAR18);
        VAR8 = VAR10 - 1;
    }
    else if (VAR8 <= -VAR6)
    {
        VAR4 += (1 - VAR6 - VAR8) * sizeof(VAR18);
        VAR8 = 1 - VAR6;
    }
    VAR14 = FUN2(0, -VAR9);
    VAR15 = FUN2(0, -VAR8);
    VAR16 = FUN3(VAR7, VAR11 - VAR9);
    VAR17 = FUN3(VAR6, VAR10 - VAR8);
    FUN4(VAR14 < VAR16 && VAR7);
    FUN4(VAR15 < VAR17 && VAR6);
    VAR10 = VAR17 - VAR15;
    VAR4 += VAR14 * VAR5 + VAR15 * sizeof(VAR18);
    VAR3 += VAR15 * sizeof(VAR18);
    for (VAR13 = 0; VAR13 < VAR14; VAR13++)
    {
        memcpy(VAR3, VAR4, VAR10 * sizeof(VAR18));
        VAR3 += VAR5;
    }
    for (; VAR13 < VAR16; VAR13++)
    {
        memcpy(VAR3, VAR4, VAR10 * sizeof(VAR18));
        VAR4 += VAR5;
        VAR3 += VAR5;
    }
    VAR4 -= VAR5;
    for (; VAR13 < VAR7; VAR13++)
    {
        memcpy(VAR3, VAR4, VAR10 * sizeof(VAR18));
        VAR3 += VAR5;
    }
    VAR3 -= VAR7 * VAR5 + VAR15 * sizeof(VAR18);
    while (VAR7--)
    {
        VAR18 *VAR19 = (VAR18 *)VAR3;
        for (VAR12 = 0; VAR12 < VAR15; VAR12++)
        {
            VAR19[VAR12] = VAR19[VAR15];
        }
        for (VAR12 = VAR17; VAR12 < VAR6; VAR12++)
        {
            VAR19[VAR12] = VAR19[VAR17 - 1];
        }
        VAR3 += VAR5;
    }
}