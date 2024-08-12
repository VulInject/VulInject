void FUN1(float *VAR1, const VAR2 *VAR3, int VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR3->VAR6; VAR5++)
    {
        int VAR7 = VAR3->VAR7[VAR5], VAR8 = !((VAR3->VAR9 >> VAR5) & 1);
        do
        {
            VAR1[VAR7] = 0.0;
            VAR7 += VAR3->VAR10;
        } while (VAR7 < VAR4 && VAR8);
    }