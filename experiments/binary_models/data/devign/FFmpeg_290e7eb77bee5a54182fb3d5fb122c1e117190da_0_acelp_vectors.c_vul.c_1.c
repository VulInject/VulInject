void FUN1(float *VAR1, const VAR2 *VAR3, float VAR4, int VAR5)
{
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR3->VAR7; VAR6++)
    {
        int VAR8 = VAR3->VAR8[VAR6], VAR9 = !((VAR3->VAR10 >> VAR6) & 1);
        float VAR11 = VAR3->VAR11[VAR6] * VAR4;
        do
        {
            VAR1[VAR8] += VAR11;
            VAR11 *= VAR3->VAR12;
            VAR8 += VAR3->VAR13;
        } while (VAR8 < VAR5 && VAR9);
    }