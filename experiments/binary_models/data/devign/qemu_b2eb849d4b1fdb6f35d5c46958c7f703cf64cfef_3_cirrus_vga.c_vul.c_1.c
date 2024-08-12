static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    int VAR8;
    int VAR9;
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        VAR8 = VAR3;
        VAR9 = VAR8 + VAR5;
        VAR8 &= VAR10;
        while (VAR8 < VAR9)
        {
            FUN2(VAR2->VAR11 + VAR8);
            VAR8 += VAR12;
        }
        VAR3 += VAR4;
    }
}