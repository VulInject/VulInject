static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    VAR5 *VAR6 = (VAR5 *)VAR2;
    for (VAR4 = 0; VAR4 < VAR3; VAR4++)
        VAR6[VAR4] = (FUN2(VAR6[VAR4], 30189 << 4) * 19077 - (39057361 << 4)) >> 14;
}