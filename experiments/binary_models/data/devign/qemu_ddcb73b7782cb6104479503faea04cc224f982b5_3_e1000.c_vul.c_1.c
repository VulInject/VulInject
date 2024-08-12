static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = FUN2(VAR4->VAR7);
    VAR6->VAR8 = (VAR4->VAR9[VAR10] & VAR11) == 0;
    return 0;
}