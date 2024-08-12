int FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    uint32_t VAR4;
    VAR4 = FUN2(&VAR3->VAR5, 0, VAR6);
    if (VAR4 == 1023)
        FUN3("");
    if (VAR4 >= 32)
        VAR4 -= 16;
    return VAR4;
}