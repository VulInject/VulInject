static int FUN1(VAR1 *VAR2, int VAR3, uint8_t VAR4)
{
    VAR5 *VAR6 = (VAR3) ? &VAR2->VAR7 : &VAR2->VAR8;
    VAR6->VAR9[VAR6->VAR10++] = VAR4;
    if (VAR6->VAR10 == VAR11)
        VAR6->VAR10 = 0;
    VAR6->VAR12++;
    return 1;
}