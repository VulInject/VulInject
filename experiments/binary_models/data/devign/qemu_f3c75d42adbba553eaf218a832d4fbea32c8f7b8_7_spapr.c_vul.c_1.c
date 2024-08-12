static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2(VAR3);
    VAR6 *VAR7 = &VAR3->VAR7;
    FUN3(VAR5);
    VAR5->VAR8 = 1;
    VAR7->VAR9[VAR10] = 0;
    VAR7->VAR11 = (VAR12 *)VAR13->VAR14;
    if (FUN4() && !VAR7->VAR11)
    {
        VAR7->VAR11 = (void *)1;
    }
    VAR7->VAR15 = -1;
    VAR7->VAR16 = FUN5(VAR13) - 1;
    VAR7->VAR9[VAR17] = (VAR18)(VAR19)VAR13->VAR14 | (VAR13->VAR20 - 18);
}