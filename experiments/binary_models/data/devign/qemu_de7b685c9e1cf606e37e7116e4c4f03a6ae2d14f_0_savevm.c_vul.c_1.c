VAR1 FUN1(VAR2 *VAR3, ram_addr_t VAR4, ram_addr_t VAR5, size_t VAR6, int *VAR7)
{
    if (VAR3->VAR8->VAR9)
    {
        int VAR10 = VAR3->VAR8->FUN2(VAR3, VAR3->VAR11, VAR4, VAR5, VAR6, VAR7);
        if (VAR10 != VAR12)
        {
            if (*VAR7 > 0)
            {
                FUN3(VAR3, *VAR7);
            }
            else if (VAR10 < 0)
            {
                FUN4(VAR3, VAR10);
            }
        }
        return VAR10;
    }
    return VAR13;
}