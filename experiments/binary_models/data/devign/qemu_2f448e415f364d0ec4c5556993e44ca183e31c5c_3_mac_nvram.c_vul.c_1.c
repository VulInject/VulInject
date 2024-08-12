static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7;
    VAR3 = (VAR3 >> VAR6->VAR8) & (VAR6->VAR4 - 1);
    VAR7 = VAR6->VAR9[VAR3];
    FUN2("", (int)VAR3, VAR7);
    return VAR7;
}