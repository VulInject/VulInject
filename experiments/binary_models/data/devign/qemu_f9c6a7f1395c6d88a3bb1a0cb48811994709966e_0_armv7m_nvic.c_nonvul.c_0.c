void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    if (VAR2 >= 16)
        VAR2 += 16;
    FUN2(&VAR4->VAR5, 0, VAR2, VAR6);
}