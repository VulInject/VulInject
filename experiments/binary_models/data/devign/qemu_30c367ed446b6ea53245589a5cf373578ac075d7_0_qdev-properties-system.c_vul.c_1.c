static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = VAR5;
    VAR13 *VAR14 = FUN3(VAR10, VAR12);
    VAR15 **VAR16 = &VAR14->VAR17[0];
    VAR7 *VAR18 = NULL;
    int32_t VAR19;
    VAR15 *VAR20;
    if (VAR10->VAR21)
    {
        FUN4(VAR10, VAR6, VAR8);
        FUN5(VAR4, &VAR19, VAR6, &VAR18);
        if (VAR18)
        {
            FUN6(VAR8, VAR18);
            if (VAR19 == -1)
            {
                *VAR16 = NULL;
                VAR20 = FUN7(VAR19);
                if (!VAR20)
                {
                    FUN8(VAR8, VAR22, VAR6, VAR12->VAR23->VAR6);
                    *VAR16 = VAR20;