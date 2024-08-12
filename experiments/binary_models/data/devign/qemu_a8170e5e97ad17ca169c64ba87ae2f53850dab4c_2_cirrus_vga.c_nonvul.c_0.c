static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    if (VAR6->VAR7 != VAR6->VAR8)
    {
        *VAR6->VAR7++ = (VAR9)VAR3;
        if (VAR6->VAR7 >= VAR6->VAR8)
        {
            FUN2(VAR6);
        }
    }
}