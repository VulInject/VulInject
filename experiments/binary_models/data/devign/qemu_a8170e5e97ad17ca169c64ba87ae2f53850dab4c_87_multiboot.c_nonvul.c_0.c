static VAR1 FUN1(VAR2 *VAR3, const char *VAR4)
{
    hwaddr VAR5 = VAR3->VAR6;
    char *VAR7 = (char *)VAR3->VAR8 + VAR5;
    FUN2(VAR7, strlen(VAR4) + 1, VAR4);
    VAR3->VAR6 += strlen(VAR7) + 1;
    return VAR3->VAR9 + VAR5;
}