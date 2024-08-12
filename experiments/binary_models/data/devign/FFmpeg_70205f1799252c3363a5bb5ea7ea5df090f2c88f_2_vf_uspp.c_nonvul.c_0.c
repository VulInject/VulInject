static int FUN1(VAR1 *VAR2, char *VAR3)
{
    int VAR4 = -1;
    VAR2->VAR5 = VAR5;
    VAR2->VAR6 = VAR6;
    VAR2->VAR7 = VAR7;
    VAR2->VAR8 = VAR8;
    VAR2->VAR9 = VAR9;
    VAR2->VAR10 = VAR10;
    VAR2->VAR11 = malloc(sizeof(struct VAR12));
    memset(VAR2->VAR11, 0, sizeof(struct VAR12));
    FUN2();
    VAR2->VAR11->VAR13 = 4;
    if (VAR3)
        sscanf(VAR3, "", &VAR4, &VAR2->VAR11->VAR14, &VAR2->VAR11->VAR15);
    if (VAR4 >= 0 && VAR4 <= 8)
        VAR2->VAR11->VAR13 = VAR4;
    if (VAR2->VAR11->VAR14 < 0)
        VAR2->VAR11->VAR14 = 0;
    return 1;
}