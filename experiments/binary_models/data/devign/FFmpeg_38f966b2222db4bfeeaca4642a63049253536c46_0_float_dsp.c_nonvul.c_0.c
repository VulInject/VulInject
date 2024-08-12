static void FUN1(const double *VAR1, const double *VAR2)
{
    FUN2(double, VAR3, [VAR4]);
    FUN2(double, VAR5, [VAR4]);
    int VAR6;
    FUN3(void, double *VAR7, const double *VAR8, double VAR9, int VAR10);
    FUN4(VAR3, VAR1, VAR2[0], VAR4);
    FUN5(VAR5, VAR1, VAR2[0], VAR4);
    for (VAR6 = 0; VAR6 < VAR4; VAR6++)
    {
        double VAR11 = FUN6(VAR2[0]) + FUN6(VAR1[VAR6]) + FUN6(VAR2[0] * VAR1[VAR6]) + 1.0;
        if (!FUN7(VAR3[VAR6], VAR5[VAR6], VAR11 * 2 * VAR12))
        {
            fprintf(VAR13, "", VAR6, VAR3[VAR6], VAR5[VAR6], VAR3[VAR6] - VAR5[VAR6]);
            FUN8();
            break;
        }
    }
    FUN9(VAR5, VAR1, VAR2[0], VAR4);
}