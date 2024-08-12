static void FUN1(VAR1)(VAR2 *VAR3, int VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        VAR3[VAR5] = (FUN2(VAR3[VAR5], 30775) * 4663 - 9289992) >> 12;
        VAR3[VAR5 + VAR6] = (FUN2(VAR3[VAR5 + VAR6], 30775) * 4663 - 9289992) >> 12;
    }
}