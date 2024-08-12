void FUN1(int VAR1)
{
    uint32_t VAR2, VAR3, VAR4, VAR5, VAR6;
    VAR7 *VAR8;
    int VAR9;
    VAR2 = VAR10 & 0xffff;
    VAR8 = VAR11->VAR12[VAR13].VAR14 + VAR2;
    if (VAR1 == 1)
    {
        VAR5 = FUN2(VAR8 + 8);
        VAR3 = FUN2(VAR8 + 4) & 0xffff;
        VAR4 = FUN2(VAR8) & 0xffff;
    }
    else
    {
        VAR5 = FUN3(VAR8 + 4);
        VAR3 = FUN3(VAR8 + 2);
        VAR4 = FUN3(VAR8);
    }
    VAR6 = VAR2 + (6 << VAR1);
    VAR10 = (VAR10 & 0xffff0000) | (VAR6 & 0xffff);
    FUN4(VAR15, VAR3);
    VAR11->VAR16 = VAR4;
    VAR9 = VAR17;
    if (VAR1 == 0)
        VAR9 &= 0xffff;
    FUN5(VAR5, VAR9);
}