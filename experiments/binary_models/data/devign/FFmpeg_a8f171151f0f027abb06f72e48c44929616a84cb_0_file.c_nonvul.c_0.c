static int FUN1(VAR1 *VAR2, const unsigned char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    VAR4 = FUN2(VAR4, VAR6->VAR9);
    VAR8 = write(VAR6->VAR10, VAR3, VAR4);
    return (-1 == VAR8) ? FUN3(VAR11) : VAR8;
}