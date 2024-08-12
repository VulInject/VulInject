static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5.VAR4;
    char *VAR6 = VAR2->VAR5.VAR7.VAR6;
    int VAR8;
    unsigned long *VAR9 = NULL;
    unsigned long *VAR10 = NULL;
    void *VAR11, *VAR12;
    int VAR13, VAR14 = -1;
    VAR12 = VAR4->VAR12;
    VAR13 = sizeof(unsigned long) * 8;
    if (!VAR6)
    {
        VAR15 *VAR16 = NULL;
        VAR15 *VAR17 = NULL;
        VAR16 = (void *)VAR4->VAR12;
        VAR17 = ((void *)VAR4->VAR12) + 4;
        VAR16 = ((void *)VAR4->VAR12) - 4;
        VAR17 = (void *)VAR4->VAR12;
        if (VAR16)
        {
            if (VAR16[1] == 0)
            {
                VAR13 = 32;
                VAR12 = VAR16;
            }
            else
            {
                VAR13 = 64;
                VAR12 = VAR17;
            }
        }
    }
    else if (strcmp(VAR6, VAR18) == 0)
    {
        VAR13 = 32;
        VAR12 = ((void *)VAR4->VAR12) - 4;
    }
    else if (strcmp(VAR6, VAR19) == 0)
    {
        VAR13 = 64;
        VAR12 = ((void *)VAR4->VAR12) + 4;
    }
    if (VAR2->VAR20)
    {
        FUN2(VAR2->VAR20, VAR2->VAR21 * VAR22);
        VAR2->VAR20 = NULL;
    }
    VAR2->VAR21 = (VAR2->VAR23 + (VAR22 - 1)) / VAR22;
    VAR8 = VAR2->VAR21 * VAR13 / 8;
    VAR8 = (VAR8 + (VAR22 - 1)) / VAR22;
    VAR9 = FUN3(sizeof(unsigned long) * VAR8);
    VAR10 = FUN3(sizeof(unsigned long) * VAR2->VAR21);
    FUN4(VAR13, VAR8, VAR9, VAR12);
    VAR11 = FUN5(VAR24, VAR2->VAR5.VAR7.VAR25, VAR26, VAR9, VAR8);
    if (VAR11 == NULL)
        goto VAR27;
    FUN4(VAR13, VAR2->VAR21, VAR10, VAR11);
    FUN2(VAR11, VAR8 * VAR22);
    VAR2->VAR20 = FUN5(VAR24, VAR2->VAR5.VAR7.VAR25, VAR26, VAR10, VAR2->VAR21);
    if (VAR2->VAR20 == NULL)
        goto VAR27;
    VAR14 = 0;
VAR27:
    FUN6(VAR9);
    FUN6(VAR10);
    return VAR14;
}