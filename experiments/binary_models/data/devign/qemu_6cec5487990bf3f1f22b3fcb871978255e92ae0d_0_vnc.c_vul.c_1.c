static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    int VAR9, VAR10;
    VAR11 *VAR12, *VAR13;
    FUN2(VAR2, VAR3, VAR4, VAR5, VAR6, 5);
    VAR12 = (VAR11 *)malloc(VAR2->VAR14);
    VAR13 = (VAR11 *)malloc(VAR2->VAR14);
    VAR9 = VAR10 = 0;
    for (VAR8 = VAR4; VAR8 < (VAR4 + VAR6); VAR8 += 16)
    {
        for (VAR7 = VAR3; VAR7 < (VAR3 + VAR5); VAR7 += 16)
        {
            VAR2->FUN3(VAR2, VAR7, VAR8, FUN4(16, VAR3 + VAR5 - VAR7), FUN4(16, VAR4 + VAR6 - VAR8), VAR13, VAR12, &VAR10, &VAR9);
        }
    }
    free(VAR12);
    free(VAR13);
}