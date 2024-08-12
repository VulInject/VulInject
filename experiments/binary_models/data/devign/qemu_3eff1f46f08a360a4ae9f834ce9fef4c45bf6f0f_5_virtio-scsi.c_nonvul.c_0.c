static void FUN1(VAR1 *VAR2, uint32_t VAR3, size_t VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint8_t VAR8[VAR9];
    uint32_t VAR10;
    if (VAR2->VAR11)
    {
        return;
    }
    VAR6->VAR12.VAR13.VAR14 = VAR15;
    VAR6->VAR12.VAR13.VAR3 = VAR3;
    if (VAR6->VAR12.VAR13.VAR3 == VAR16)
    {
        VAR6->VAR12.VAR13.VAR4 = FUN2(VAR4);
    }
    else
    {
        VAR6->VAR12.VAR13.VAR4 = 0;
        VAR10 = FUN3(VAR2, VAR8, sizeof(VAR8));
        VAR10 = FUN4(VAR10, VAR6->VAR17.VAR18 - sizeof(VAR6->VAR12.VAR13));
        FUN5(&VAR6->VAR17, sizeof(VAR6->VAR12.VAR13), &VAR6->VAR12, VAR10);
        VAR6->VAR12.VAR13.VAR10 = FUN2(VAR10);
    }
    FUN6(VAR6);
}