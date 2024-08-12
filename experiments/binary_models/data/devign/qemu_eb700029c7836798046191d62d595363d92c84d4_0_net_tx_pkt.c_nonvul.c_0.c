static VAR1 FUN1(struct VAR2 *VAR3, bool VAR4)
{
    uint8_t VAR5 = VAR6;
    uint16_t VAR7;
    VAR7 = FUN2(&VAR3->VAR8[VAR9], 1, VAR3->VAR8[VAR9].VAR10);
    if (!VAR4)
    {
        goto VAR11;
    }
    VAR5 = FUN3(VAR7, VAR3->VAR8[VAR12].VAR13, VAR3->VAR14);
VAR11:
    return VAR5;
}