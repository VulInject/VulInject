void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int *VAR6, int VAR7, float *VAR8, int VAR9)
{
    int VAR10, VAR11, VAR12;
    VAR10 = 0;
    VAR11 = VAR5[0] * VAR7;
    for (VAR12 = 1; VAR12 < VAR3; VAR12++)
    {
        int VAR13 = VAR2[VAR12].VAR14;
        if (VAR6[VAR13])
        {
            int VAR15 = VAR2[VAR13].VAR16;
            int VAR17 = VAR5[VAR13] * VAR7;
            if (VAR10 < VAR9)
                FUN2(VAR10, VAR11, FUN3(VAR15, VAR9), VAR17, VAR8);
            VAR10 = VAR15;
            VAR11 = VAR17;
        }
        if (VAR10 >= VAR9)
            break;
    }
    if (VAR10 < VAR9)
        FUN2(VAR10, VAR11, VAR9, VAR11, VAR8);
}