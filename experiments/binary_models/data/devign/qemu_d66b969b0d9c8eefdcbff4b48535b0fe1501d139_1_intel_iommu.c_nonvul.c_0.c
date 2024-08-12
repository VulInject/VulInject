static VAR1 *FUN1(VAR2 *VAR3, uint16_t VAR4, hwaddr VAR5)
{
    VAR1 *VAR6;
    uint64_t VAR7;
    int VAR8;
    for (VAR8 = VAR9; VAR8 < VAR10; VAR8++)
    {
        VAR7 = FUN2(FUN3(VAR5, VAR8), VAR4, VAR8);
        VAR6 = FUN4(VAR3->VAR11, &VAR7);
        if (VAR6)
        {
            goto VAR12;
        }
    }
VAR12:
    return VAR6;
}