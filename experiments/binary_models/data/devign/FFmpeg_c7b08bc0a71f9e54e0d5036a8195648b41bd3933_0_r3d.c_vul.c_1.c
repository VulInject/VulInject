static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8[0];
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12;
    if (!VAR7->VAR13->VAR14.VAR15 || !VAR7->VAR14.VAR16)
        return -1;
    VAR12 = VAR4 * VAR7->VAR13->VAR14.VAR16 / ((VAR17)VAR7->VAR13->VAR14.VAR15 * VAR7->VAR14.VAR16);
    FUN2(VAR2, "" VAR18 "", VAR12, VAR4);
    if (VAR12 < VAR10->VAR19)
    {
        FUN3(VAR2->VAR20, VAR10->VAR19, VAR21);
    }
    else
    {
        FUN4(VAR2, VAR22, "", VAR12);
        return -1;
    }
    return 0;
}