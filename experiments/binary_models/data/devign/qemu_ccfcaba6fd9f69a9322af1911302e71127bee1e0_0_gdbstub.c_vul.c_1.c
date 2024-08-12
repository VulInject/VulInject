static void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    FUN2(VAR2->VAR4);
    VAR2->VAR4->VAR5 = VAR3;
    VAR2->VAR4->VAR6 = VAR3;
    VAR2->VAR4->VAR7 = VAR3 + 4;
    VAR2->VAR4->VAR8[15] = VAR3;
    VAR2->VAR4->VAR9.VAR10 = VAR3 & ~(VAR11)1;
    if (VAR3 & 1)
    {
        VAR2->VAR4->VAR12 |= VAR13;
    }
    else
    {
        VAR2->VAR4->VAR12 &= ~(VAR13);
    }
    VAR2->VAR4->VAR14[VAR15] = VAR3;
    FUN2(VAR2->VAR4);
    VAR2->VAR4->VAR16.VAR17 = VAR3;