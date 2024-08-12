static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int32_t VAR4 = VAR5;
    int32_t VAR6;
    assert((VAR3->VAR7[VAR8] & 0x60) != 0x60);
    FUN2(VAR3);
    VAR3->VAR7[VAR8] &= ~VAR9;
    if (FUN3(VAR10) >= VAR3->VAR11)
    {
        VAR4 |= VAR12;
        if (VAR3->VAR7[VAR13] & VAR14)
        {
            FUN4(VAR15);
        }
    }
    VAR6 = VAR4 & ~VAR3->VAR7[VAR16];
    VAR3->VAR7[VAR16] |= VAR4;
    if ((VAR6 & VAR3->VAR7[VAR13]) != 0)
    {
        VAR3->VAR7[VAR16] |= VAR17;
        FUN5(VAR3->VAR18);
    }
    FUN6(VAR3);
}