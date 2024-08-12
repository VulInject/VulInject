static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint8_t VAR8[8192];
    char *VAR9;
    VAR6->VAR10 = 0xff;
    VAR2->VAR11 |= VAR12;
    FUN2(&VAR2->VAR13, VAR8, sizeof(VAR8));
    if ((VAR9 = memchr(VAR8, '', sizeof(VAR8))))
        if (!memcmp(VAR9, "", 6))
            VAR6->VAR14 = 1;
    FUN3(&VAR2->VAR13, -(VAR15)sizeof(VAR8), VAR16);
    return 0;
}