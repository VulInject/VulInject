void FUN1(void *VAR1)
{
    VAR2 *VAR3;
    VAR3 = (VAR2 *)((char *)VAR1 - 16);
    FUN2(VAR3, *VAR3);
}