VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    FUN2();
    if (!(VAR2 = malloc(sizeof(VAR1))))
        return (NULL);
    memset(VAR2, 0, sizeof(*VAR2));
    VAR2->VAR3 = 0;
    VAR2->VAR4 = 1;
    VAR2->VAR5 = VAR2->VAR6 + (VAR2->VAR3 * 16);
    VAR2->VAR7 = 1;
    VAR2->VAR8 = 1;
    VAR2->VAR9 = 0x4000;
    VAR2->VAR10 = VAR2->VAR9 + 4;
    VAR2->VAR11[0] = (0x10 << 24) | VAR12;
    VAR2->VAR11[1] = 0x3000 >> 4;
    VAR13 = VAR2;
    return (VAR2);
}