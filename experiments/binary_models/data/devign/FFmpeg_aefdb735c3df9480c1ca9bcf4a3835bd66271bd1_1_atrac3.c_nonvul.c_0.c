static void FUN1(float *VAR1, float *VAR2, int *VAR3)
{
    int VAR4, VAR5;
    float VAR6[2][2];
    if (VAR3[1] != 7 || VAR3[3] != 7)
    {
        FUN2(VAR3[1], VAR3[0], VAR6[0]);
        FUN2(VAR3[3], VAR3[2], VAR6[1]);
        for (VAR4 = 256; VAR4 < 4 * 256; VAR4 += 256)
        {
            for (VAR5 = VAR4; VAR5 < VAR4 + 8; VAR5++)
            {
                VAR1[VAR5] *= FUN3(VAR6[0][0], VAR6[0][1], VAR5 - VAR4);
                VAR2[VAR5] *= FUN3(VAR6[1][0], VAR6[1][1], VAR5 - VAR4);
            }
            for (; VAR5 < VAR4 + 256; VAR5++)
            {
                VAR1[VAR5] *= VAR6[1][0];
                VAR2[VAR5] *= VAR6[1][1];
            }
        }
    }
}