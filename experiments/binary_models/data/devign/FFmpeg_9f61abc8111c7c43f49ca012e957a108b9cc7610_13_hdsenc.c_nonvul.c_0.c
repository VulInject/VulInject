static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int final, int64_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10 = 0;
    char VAR11[1024];
    int VAR12 = VAR2->VAR13[VAR4->VAR14]->VAR15;
    if (!VAR4->VAR16)
        return 0;
    FUN2(VAR4->VAR17->VAR18);
    VAR4->VAR16 = 0;
    FUN3(VAR2, VAR4);
    snprintf(VAR11, sizeof(VAR11), "", VAR2->VAR19, VAR12, VAR4->VAR20);
    VAR10 = FUN4(VAR4->VAR21, VAR11);
    if (VAR10 < 0)
        return VAR10;
    FUN5(VAR4, VAR11, VAR4->VAR22, VAR5 - VAR4->VAR22);
    if (!final)
    {
        VAR10 = FUN6(VAR2, VAR4, VAR5);
        if (VAR10 < 0)
            return VAR10;
    }
    if (VAR7->VAR23 || (final && VAR7->VAR24))
    {
        int remove = VAR4->VAR25 - VAR7->VAR23 - VAR7->VAR26;
        if (final && VAR7->VAR24)
            remove = VAR4->VAR25;
        if (remove > 0)
        {
            for (VAR9 = 0; VAR9 < remove; VAR9++)
            {
                unlink(VAR4->VAR27[VAR9]->VAR28);
                FUN7(VAR4->VAR27[VAR9]);
            }
            VAR4->VAR25 -= remove;
            memmove(VAR4->VAR27, VAR4->VAR27 + remove, VAR4->VAR25 * sizeof(*VAR4->VAR27));
        }
    }
    if (VAR10 >= 0)
        VAR10 = FUN8(VAR2, VAR4, final);
    return VAR10;
}