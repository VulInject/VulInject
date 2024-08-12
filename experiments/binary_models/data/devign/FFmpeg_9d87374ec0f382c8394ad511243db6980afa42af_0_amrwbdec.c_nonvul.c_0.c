static void FUN1(VAR1 *VAR2, int VAR3, float *VAR4, const float *VAR5, const float *VAR6, const float *VAR7)
{
    float VAR8[VAR9];
    enum Mode VAR10 = VAR2->VAR11;
    if (VAR10 == VAR12)
    {
        float VAR13[VAR9];
        double VAR14[VAR9];
        FUN2(VAR13, VAR7, VAR6, VAR15[VAR3], 1.0 - VAR15[VAR3], VAR16);
        FUN3(VAR13);
        VAR13[VAR9 - 1] *= 2.0;
        FUN4(VAR14, VAR13, VAR9);
        FUN5(VAR14, VAR8, VAR9);
        FUN6(VAR8, VAR8, 0.9, VAR9);
    }
    else
    {
        FUN6(VAR8, VAR2->VAR17[VAR3], 0.6, VAR16);
    }
    FUN7(VAR4, VAR8, VAR5, VAR18, (VAR10 == VAR12) ? VAR9 : VAR16);
}