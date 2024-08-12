static void FUN1(void)
{
    if (VAR1 < VAR2)
    {
        memmove(VAR3 + VAR1, VAR3 + VAR1 + 1, VAR2 - VAR1 - 1);
        VAR2--;
    }
}