static VAR1 FUN1(VAR2 *VAR3, uint8_t VAR4)
{
    VAR5 *VAR6 = &VAR3->VAR3.VAR6;
    uint32_t VAR7 = VAR8;
    uint16_t VAR9;
    if ((VAR6->VAR10[VAR4].VAR11 & VAR12))
    {
        VAR9 = FUN2(&VAR6->VAR10[VAR4].VAR13);
        VAR7 = VAR6->VAR10[VAR4].VAR13.VAR14[VAR6->VAR10[VAR4].VAR15++];
        if (VAR6->VAR10[VAR4].VAR15 >= VAR9)
        {
            FUN3(&VAR6->VAR10[VAR4], VAR16);
            FUN4(VAR3, VAR4, VAR17);
        }
        FUN5("", VAR7, VAR6->VAR10[VAR4].VAR15 - 1);
    }
    return VAR7;
}