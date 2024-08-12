static void FUN1(float *VAR1, VAR2 *VAR3, float VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 <= VAR6; VAR5++)
    {
        VAR3[VAR5].VAR7 = VAR5 == 0 ? 0 : VAR8[VAR5 - 1];
        VAR3[VAR5].VAR9 = VAR5 == VAR6 ? VAR4 : VAR8[VAR5];
        VAR3[VAR5].VAR10 = VAR1[VAR5];
    }
}