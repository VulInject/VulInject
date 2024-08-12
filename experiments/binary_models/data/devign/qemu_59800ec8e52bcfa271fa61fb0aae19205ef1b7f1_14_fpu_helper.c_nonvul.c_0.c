void FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, uint32_t VAR5)
{
    CPU_DoubleU VAR6, VAR7;
    uint32_t VAR8 = 0;
    VAR6.VAR9 = VAR3;
    VAR7.VAR9 = VAR4;
    if (FUN2(FUN3(VAR6.VAR10) || FUN3(VAR7.VAR10)))
    {
        VAR8 = 0x01UL;
    }
    else if (FUN4(VAR6.VAR10, VAR7.VAR10, &VAR2->VAR11))
    {
        VAR8 = 0x08UL;
    }
    else if (!FUN5(VAR6.VAR10, VAR7.VAR10, &VAR2->VAR11))
    {
        VAR8 = 0x04UL;
    }
    else
    {
        VAR8 = 0x02UL;
    }
    VAR2->VAR12 &= ~(0x0F << VAR13);
    VAR2->VAR12 |= VAR8 << VAR13;
    VAR2->VAR14[VAR5] = VAR8;
    if (FUN2(VAR8 == 0x01UL && (FUN6(VAR6.VAR10) || FUN6(VAR7.VAR10))))
    {
        FUN7(VAR2, VAR15, 1);
    }
}