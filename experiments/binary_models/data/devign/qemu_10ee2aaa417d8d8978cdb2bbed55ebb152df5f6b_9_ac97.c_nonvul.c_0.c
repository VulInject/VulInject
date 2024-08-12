static void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4, uint32_t VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR7, VAR9, VAR2);
    VAR1 *VAR10 = &VAR8->VAR9;
    if (!VAR3)
    {
        VAR8->VAR11[0] = VAR4;
        FUN3(VAR4, 256 * 1, 1, VAR12, VAR10);
        FUN3(VAR4, 256 * 2, 2, VAR13, VAR10);
        FUN3(VAR4, 256 * 4, 4, VAR14, VAR10);
        FUN4(VAR4, 256 * 1, 1, VAR15, VAR10);
        FUN4(VAR4, 256 * 2, 2, VAR16, VAR10);
        FUN4(VAR4, 256 * 4, 4, VAR17, VAR10);
    }
    else
    {
        VAR8->VAR11[1] = VAR4;
        FUN3(VAR4, 64 * 1, 1, VAR18, VAR10);
        FUN3(VAR4, 64 * 2, 2, VAR19, VAR10);
        FUN3(VAR4, 64 * 4, 4, VAR20, VAR10);
        FUN4(VAR4, 64 * 1, 1, VAR21, VAR10);
        FUN4(VAR4, 64 * 2, 2, VAR22, VAR10);
        FUN4(VAR4, 64 * 4, 4, VAR23, VAR10);
    }
}