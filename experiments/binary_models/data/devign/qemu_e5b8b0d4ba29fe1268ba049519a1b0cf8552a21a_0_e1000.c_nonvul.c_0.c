FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    VAR2->VAR5[VAR3] = VAR4 & 0xffff;
    if (FUN2(VAR2, 1))
    {
        FUN3(&VAR2->VAR6->VAR7);
    }
}