VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    int VAR3;
    static int VAR4;
    FUN2();
    VAR2 = malloc(sizeof(VAR1));
    if (!VAR2)
        return NULL;
    memset(VAR2, 0, sizeof(VAR1));
    for (VAR3 = 0; VAR3 < 8; VAR3++)
        VAR2->VAR5[VAR3] = 1;
    VAR2->VAR6 = 0x37f;
    VAR2->VAR7 = 0x2 | VAR8;
    if (!VAR4)
    {
        VAR4 = 1;
        FUN3();
    }
    return VAR2;
}