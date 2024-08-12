static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5 = 0;
    int64_t VAR6;
    int VAR7;
    for (VAR7 = 0; VAR7 < VAR3; VAR7++)
        VAR5 = FUN2(VAR5, FUN3(VAR2[VAR7]));
    VAR5 = FUN4(VAR5, 0x7FFF);
    VAR4 = FUN5(VAR5, 15);
    VAR6 = (VAR4 == 15) ? 0x7FFF : (1 << VAR4);
    for (VAR7 = 0; VAR7 < VAR3; VAR7++)
        VAR2[VAR7] = FUN6(VAR2[VAR7] * VAR6 << 1) >> 4;
    return VAR4 - 3;
}