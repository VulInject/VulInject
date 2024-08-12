static void FUN1(VAR1 *VAR2, float VAR3, int VAR4)
{
    unsigned int VAR5, VAR6;
    double VAR7, VAR8;
    float VAR9[5];
    for (VAR5 = 36; VAR5--; VAR2->VAR10[VAR5 + 5] = VAR2->VAR10[VAR5])
        ;
    for (VAR5 = 5; VAR5--;)
    {
        float *VAR11 = VAR2->VAR10 + VAR5;
        float *VAR12 = VAR2->VAR13;
        for (VAR7 = 0, VAR6 = 36; VAR6--; VAR7 -= (*(++VAR11)) * (*(VAR12++)))
            ;
        VAR2->VAR10[VAR5] = VAR7;
    }
    for (VAR7 = 32, VAR5 = 10; VAR5--; VAR7 -= VAR2->VAR14[VAR5] * VAR2->VAR15[VAR5])
        ;
    if (VAR7 < 0)
        VAR7 = 0;
    else if (VAR7 > 60)
        VAR7 = 60;
    VAR8 = FUN2(VAR7 * 0.1151292546497) * VAR3;
    for (VAR7 = 0, VAR5 = 5; VAR5--;)
    {
        VAR9[VAR5] = VAR16[VAR4][VAR5] * VAR8;
        VAR7 += VAR9[VAR5] * VAR9[VAR5];
    }
    if ((VAR7 /= 5) < 1)
        VAR7 = 1;
    for (VAR5 = 10; --VAR5; VAR2->VAR15[VAR5] = VAR2->VAR15[VAR5 - 1])
        ;
    *VAR2->VAR15 = VAR2->VAR17[VAR2->VAR18] = 10 * FUN3(VAR7) - 32;
    for (VAR5 = 1; VAR5 < 5; VAR5++)
        for (VAR6 = VAR5; VAR6--; VAR9[VAR5] -= VAR2->VAR13[VAR5 - VAR6 - 1] * VAR9[VAR6])
            ;
    for (VAR5 = 0; VAR5 < 5; VAR5++)
    {
        float VAR19 = VAR2->VAR10[4 - VAR5] + VAR9[VAR5];
        if (VAR19 > 4095)
            VAR19 = 4095;
        else if (VAR19 < -4095)
            VAR19 = -4095;
        VAR2->VAR20[VAR2->VAR21 + VAR5] = VAR2->VAR10[4 - VAR5] = VAR19;
    }
}