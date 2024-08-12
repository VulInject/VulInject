void FUN1(uint64_t VAR1, uint64_t VAR2, uint32_t VAR3)
{
    CPU_DoubleU VAR4, VAR5;
    uint32_t VAR6 = 0;
    VAR4.VAR7 = VAR1;
    VAR5.VAR7 = VAR2;
    if (FUN2(FUN3(VAR4.VAR8) || FUN3(VAR5.VAR8)))
    {
        VAR6 = 0x01UL;
    }
    else if (FUN4(VAR4.VAR8, VAR5.VAR8, &VAR9->VAR10))
    {
        VAR6 = 0x08UL;
    }
    else if (!FUN5(VAR4.VAR8, VAR5.VAR8, &VAR9->VAR10))
    {
        VAR6 = 0x04UL;
    }
    else
    {
        VAR6 = 0x02UL;
    }
    VAR9->VAR11 &= ~(0x0F << VAR12);
    VAR9->VAR11 |= VAR6 << VAR12;
    VAR9->VAR13[VAR3] = VAR6;
    if (FUN2(VAR6 == 0x01UL && (FUN6(VAR4.VAR8) || FUN6(VAR5.VAR8))))
    {
        FUN7(VAR14);
    }
}