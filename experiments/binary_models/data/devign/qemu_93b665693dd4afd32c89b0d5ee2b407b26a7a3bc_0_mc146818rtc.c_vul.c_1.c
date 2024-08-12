static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2(VAR3, VAR3->VAR4);
    if ((VAR3->VAR5[VAR6] & 0xc0) && VAR7)
    {
        VAR3->VAR8++;
        return;
    }
    if (VAR3->VAR5[VAR9] & VAR10)
    {
        VAR3->VAR5[VAR6] |= 0xc0;
        FUN3(VAR3->VAR11);
    }
    if (VAR3->VAR5[VAR9] & VAR12)
    {
        FUN4(VAR3->VAR13);
    }
}