int FUN1(struct VAR1 **VAR2, int VAR3, char *VAR4, struct in_addr VAR5, int VAR6)
{
    struct VAR1 *VAR7;
    for (VAR7 = *VAR2; VAR7; VAR7 = VAR7->VAR8)
    {
        if (VAR6 == VAR7->VAR9 && VAR5.VAR10 == VAR7->VAR11.VAR10)
            return -1;
    }
    VAR7 = *VAR2;
    *VAR2 = (struct VAR1 *)malloc(sizeof(struct VAR1));
    (*VAR2)->VAR9 = VAR6;
    (*VAR2)->VAR11 = VAR5;
    (*VAR2)->VAR12 = VAR3;
    (*VAR2)->VAR13 = (VAR3 == 3) ? VAR4 : strdup(VAR4);
    (*VAR2)->VAR8 = VAR7;
    return 0;
}