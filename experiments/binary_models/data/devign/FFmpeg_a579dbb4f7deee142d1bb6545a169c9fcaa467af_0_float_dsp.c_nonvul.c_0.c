static void FUN1(const float *VAR1, const float *VAR2)
{
    FUN2(float, VAR3, [VAR4]);
    FUN2(float, VAR5, [VAR4]);
    FUN2(float, VAR6, [VAR4]);
    FUN2(float, VAR7, [VAR4]);
    int VAR8;
    FUN3(void, float *av_restrict VAR1, float *av_restrict VAR2, int VAR9);
    memcpy(VAR3, VAR1, VAR4 * sizeof(*VAR1));
    memcpy(VAR6, VAR2, VAR4 * sizeof(*VAR2));
    memcpy(VAR5, VAR1, VAR4 * sizeof(*VAR1));
    memcpy(VAR7, VAR2, VAR4 * sizeof(*VAR2));
    FUN4(VAR3, VAR6, VAR4);
    FUN5(VAR5, VAR7, VAR4);
    for (VAR8 = 0; VAR8 < VAR4; VAR8++)
    {
        if (!FUN6(VAR3[VAR8], VAR5[VAR8], VAR10) || !FUN6(VAR6[VAR8], VAR7[VAR8], VAR10))
        {
            fprintf(VAR11, "", VAR8, VAR3[VAR8], VAR5[VAR8], VAR3[VAR8] - VAR5[VAR8]);
            fprintf(VAR11, "", VAR8, VAR6[VAR8], VAR7[VAR8], VAR6[VAR8] - VAR7[VAR8]);
            FUN7();
            break;
        }
    }
    memcpy(VAR5, VAR1, VAR4 * sizeof(*VAR1));
    memcpy(VAR7, VAR2, VAR4 * sizeof(*VAR2));
    FUN8(VAR5, VAR7, VAR4);
}