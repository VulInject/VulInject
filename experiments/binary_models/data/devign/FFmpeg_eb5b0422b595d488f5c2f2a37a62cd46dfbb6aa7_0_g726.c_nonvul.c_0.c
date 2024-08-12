static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2->VAR5;
    if (VAR2->VAR6 != 1 || (VAR2->VAR7 != 16000 && VAR2->VAR7 != 24000 && VAR2->VAR7 != 32000 && VAR2->VAR7 != 40000))
    {
        FUN2(VAR2, VAR8, "");
        return -1;
    }
    if (VAR2->VAR9 != 8000 && VAR2->VAR10 >= 0)
    {
        FUN2(VAR2, VAR8, "");
        return -1;
    }
    FUN3(&VAR4->VAR4, VAR2->VAR7);
    VAR4->VAR11 = VAR4->VAR4.VAR12->VAR13;
    VAR4->VAR14 = 0;
    VAR4->VAR15 = 0;
    return 0;
}