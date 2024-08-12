static int FUN1(VAR1 *VAR2)
{
    char VAR3[VAR4];
    const int VAR5[] = {150, 0};
    snprintf(VAR3, sizeof(VAR3), "", VAR2->VAR6);
    if (FUN2(VAR2, VAR3, VAR5, NULL) != 150)
        return FUN3(VAR7);
    VAR2->VAR8 = VAR9;
    return 0;
}