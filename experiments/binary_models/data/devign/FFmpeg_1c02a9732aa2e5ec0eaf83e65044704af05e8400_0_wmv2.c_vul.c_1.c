static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8)
{
    VAR9 *const VAR10 = &VAR2->VAR10;
    switch (VAR2->VAR11[VAR8])
    {
    case 0:
        if (VAR10->VAR12[VAR8] >= 0)
        {
            VAR10->VAR13.FUN2(VAR6, VAR7, VAR4);
        }
        break;
    case 1:
        FUN3(VAR6, VAR7, VAR4);
        FUN3(VAR6 + 4 * VAR7, VAR7, VAR2->VAR14[VAR8]);
        memset(VAR2->VAR14[VAR8], 0, 64 * sizeof(VAR3));
        break;
    case 2:
        FUN4(VAR6, VAR7, VAR4);
        FUN4(VAR6 + 4, VAR7, VAR2->VAR14[VAR8]);
        memset(VAR2->VAR14[VAR8], 0, 64 * sizeof(VAR3));
        break;
    default:
        FUN5(VAR10->VAR15, VAR16, "");
    }
}