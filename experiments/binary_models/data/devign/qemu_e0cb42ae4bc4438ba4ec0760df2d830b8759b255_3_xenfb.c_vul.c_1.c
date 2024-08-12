static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5.VAR4;
    char *VAR6 = VAR2->VAR5.VAR7.VAR6;
    int VAR8;
    VAR9 *VAR10 = NULL;
    VAR9 *VAR11 = NULL;
    void *VAR12, *VAR13;
    int VAR14, VAR15 = -1;
    VAR13 = VAR4->VAR13;
    VAR14 = sizeof(unsigned long) * 8;
    if (!VAR6)
    {
        VAR16 *VAR17 = NULL;
        VAR16 *VAR18 = NULL;
        VAR17 = (void *)VAR4->VAR13;
        VAR18 = ((void *)VAR4->VAR13) + 4;
        VAR17 = ((void *)VAR4->VAR13) - 4;
        VAR18 = (void *)VAR4->VAR13;
        if (VAR17)
        {
            if (VAR17[1] == 0)
            {
                VAR14 = 32;
                VAR13 = VAR17;
            }
            else
            {
                VAR14 = 64;
                VAR13 = VAR18;
            }
        }
    }
    else if (strcmp(VAR6, VAR19) == 0)
    {
        VAR14 = 32;
        VAR13 = ((void *)VAR4->VAR13) - 4;
    }
    else if (strcmp(VAR6, VAR20) == 0)
    {
        VAR14 = 64;
        VAR13 = ((void *)VAR4->VAR13) + 4;
    }
    if (VAR2->VAR21)
    {
        FUN2(VAR2->VAR21, VAR2->VAR22 * VAR23);
        VAR2->VAR21 = NULL;
    }
    VAR2->VAR22 = (VAR2->VAR24 + (VAR23 - 1)) / VAR23;
    VAR8 = VAR2->VAR22 * VAR14 / 8;
    VAR8 = (VAR8 + (VAR23 - 1)) / VAR23;
    VAR10 = FUN3(sizeof(VAR9) * VAR8);
    VAR11 = FUN3(sizeof(VAR9) * VAR2->VAR22);
    FUN4(VAR14, VAR8, VAR10, VAR13);
    VAR12 = FUN5(VAR25, VAR2->VAR5.VAR7.VAR26, VAR27, VAR10, VAR8);
    if (VAR12 == NULL)
        goto VAR28;
    FUN4(VAR14, VAR2->VAR22, VAR11, VAR12);
    FUN2(VAR12, VAR8 * VAR23);
    VAR2->VAR21 = FUN5(VAR25, VAR2->VAR5.VAR7.VAR26, VAR27, VAR11, VAR2->VAR22);
    if (VAR2->VAR21 == NULL)
        goto VAR28;
    VAR15 = 0;
VAR28:
    FUN6(VAR10);
    FUN6(VAR11);
    return VAR15;
}