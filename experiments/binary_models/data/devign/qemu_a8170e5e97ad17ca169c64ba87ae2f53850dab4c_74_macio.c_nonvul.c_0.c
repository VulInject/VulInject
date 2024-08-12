static void FUN1(void *VAR1, hwaddr VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR2 = (VAR2 & 0xFFF) >> 4;
    VAR3 = FUN2(VAR3);
    if (VAR2 == 0)
    {
        FUN3(&VAR5->VAR6, 0, VAR3);
    }
}