int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, int VAR5, void *VAR6, int (*VAR7)(void *VAR6, VAR8 *VAR9, int VAR10), int (*VAR11)(void *VAR6, VAR8 *VAR9, int VAR10), FUN2 (*VAR12)(void *VAR6, int64_t VAR13, int VAR14))
{
    VAR2->VAR3 = VAR3;
    VAR2->VAR4 = VAR4;
    VAR2->VAR15 = VAR3;
    FUN3(VAR2, VAR5 ? VAR16 : VAR17);
    VAR2->VAR6 = VAR6;
    VAR2->VAR11 = VAR11;
    VAR2->VAR7 = VAR7;
    VAR2->VAR12 = VAR12;
    VAR2->VAR18 = 0;
    VAR2->VAR19 = 0;
    VAR2->VAR20 = 0;
    VAR2->VAR21 = 0;
    VAR2->VAR22 = 0;
    VAR2->VAR23 = 0;
    VAR2->VAR24 = NULL;
    if (!VAR7 && !VAR5)
    {
        VAR2->VAR18 = VAR4;
        VAR2->VAR25 = VAR2->VAR3 + VAR4;
    }
    VAR2->VAR26 = NULL;
    VAR2->VAR27 = NULL;
    return 0;
}