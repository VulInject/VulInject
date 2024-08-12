VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    uint8_t VAR7;
    VAR6->FUN3(VAR3, VAR3->VAR8);
    if (VAR4 > (VAR3->VAR9 - sizeof(VAR7)))
        return (VAR1)-1;
    VAR7 = FUN4(VAR3->VAR8 + VAR4);
    return VAR7;
}