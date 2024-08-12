static void FUN1(float *VAR1, float *VAR2, int VAR3, int VAR4)
{
    unsigned int VAR5;
    double VAR6;
    while (VAR4 >= 0)
    {
        float *VAR7 = VAR2;
        float *VAR8 = VAR7 - VAR4;
        for (VAR6 = 0, VAR5 = VAR3; VAR5--; VAR6 += (*VAR8++) * (*VAR7++))
            ;
        VAR1[VAR4--] = VAR6;
    }
}