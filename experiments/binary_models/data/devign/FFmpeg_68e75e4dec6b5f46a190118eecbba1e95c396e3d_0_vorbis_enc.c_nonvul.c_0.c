static void FUN1(VAR1 *VAR2, VAR3 *VAR4, float *VAR5, int *VAR6, int VAR7)
{
    int VAR8 = 255 / VAR4->VAR9 + 1;
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR4->VAR11; VAR10++)
    {
        int VAR12 = VAR4->VAR13[VAR4->VAR13[VAR10].VAR14].VAR15;
        int VAR16 = VAR4->VAR13[VAR4->VAR13[FUN2(VAR10 - 1, 0)].VAR14].VAR15;
        int VAR17 = VAR4->VAR13[VAR4->VAR13[FUN3(VAR10 + 1, VAR4->VAR11 - 1)].VAR14].VAR15;
        int VAR18;
        float VAR19 = 0;
        assert(VAR17 <= VAR7);
        for (VAR18 = VAR16; VAR18 < VAR17; VAR18++)
            VAR19 += FUN4(VAR5[VAR18]);
        VAR19 /= VAR17 - VAR16;
        VAR19 /= FUN5(4, 1 - VAR12 / 400.);
        for (VAR18 = 0; VAR18 < VAR8 - 1; VAR18++)
            if (VAR20[VAR18 * VAR4->VAR9] > VAR19)
                break;
        VAR6[VAR4->VAR13[VAR10].VAR14] = VAR18;
    }
}