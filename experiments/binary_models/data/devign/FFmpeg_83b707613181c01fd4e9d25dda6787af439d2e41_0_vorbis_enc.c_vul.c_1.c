static void FUN1(VAR1 *VAR2, VAR3 *VAR4, float *VAR5, VAR6 *VAR7, int VAR8)
{
    int VAR9 = 255 / VAR4->VAR10 + 1;
    int VAR11;
    float VAR12 = 0.;
    float VAR13[VAR4->VAR14];
    for (VAR11 = 0; VAR11 < VAR4->VAR14; VAR11++)
    {
        VAR13[VAR11] = FUN2(VAR4, VAR5, VAR11);
        VAR12 += VAR13[VAR11];
    }
    VAR12 /= VAR4->VAR14;
    VAR12 /= VAR2->VAR15;
    for (VAR11 = 0; VAR11 < VAR4->VAR14; VAR11++)
    {
        int VAR16 = VAR4->VAR17[VAR4->VAR17[VAR11].VAR18].VAR19;
        float VAR20 = VAR13[VAR11];
        int VAR21;
        VAR20 *= FUN3(VAR12 / VAR20, 0.5) * FUN3(1.25, VAR16 / 200.);
        for (VAR21 = 0; VAR21 < VAR9 - 1; VAR21++)
            if (VAR22[VAR21 * VAR4->VAR10] > VAR20)
                break;
        VAR7[VAR4->VAR17[VAR11].VAR18] = VAR21;
    }
}