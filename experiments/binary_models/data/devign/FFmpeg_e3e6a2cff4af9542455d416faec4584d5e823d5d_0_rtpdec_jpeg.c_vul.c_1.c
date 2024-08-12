static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    int VAR4 = VAR3;
    int VAR5;
    VAR4 = FUN2(VAR3, 1, 99);
    if (VAR3 < 50)
        VAR3 = 5000 / VAR4;
    else
        VAR3 = 200 - VAR4 * 2;
    for (VAR5 = 0; VAR5 < 128; VAR5++)
    {
        int VAR6 = (VAR7[VAR5] * VAR3 + 50) / 100;
        VAR6 = FUN2(VAR6, 1, 255);
        VAR2[VAR5] = VAR6;
    }
}