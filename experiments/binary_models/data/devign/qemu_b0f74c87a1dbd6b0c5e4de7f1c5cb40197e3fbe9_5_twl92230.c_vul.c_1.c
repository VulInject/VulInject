static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
    VAR3->VAR4.VAR5--;
    VAR3->VAR4.VAR6--;
    VAR3->VAR4.VAR7 += 1000;
    FUN2(VAR3->VAR4.VAR8, VAR3->VAR4.VAR7);
    if ((VAR3->VAR4.VAR9 >> 3) & 3)
    {
        FUN3(VAR3);
        if (((VAR3->VAR4.VAR9 >> 3) & 3) == 1 && !VAR3->VAR4.VAR10.VAR11)
            VAR3->VAR12 |= 1 << 8;
        else if (((VAR3->VAR4.VAR9 >> 3) & 3) == 2 && !VAR3->VAR4.VAR10.VAR13)
            VAR3->VAR12 |= 1 << 8;
        else if (!VAR3->VAR4.VAR10.VAR14)
            VAR3->VAR12 |= 1 << 8;
    }
    else
        VAR3->VAR12 |= 1 << 8;
    if ((VAR3->VAR4.VAR9 >> 1) & 1)
    {
        if (VAR3->VAR4.VAR6 == 0)
            VAR3->VAR12 |= 1 << 9;
    }
    if (VAR3->VAR4.VAR5 <= 0)
    {
        VAR3->VAR4.VAR7 -= FUN4((VAR15)VAR3->VAR4.VAR16, 1000, 0x8000);
        VAR3->VAR4.VAR5 = 3600;
    }
    FUN5(VAR3);
}