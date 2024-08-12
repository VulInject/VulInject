static bool FUN1(const void *VAR1, const void *VAR2)
{
    const VAR3 *VAR4 = VAR1;
    const struct VAR5 *VAR6 = VAR2;
    if (VAR4->VAR7 == VAR6->VAR7 && VAR4->VAR8[0] == VAR6->VAR9 && VAR4->VAR10 == VAR6->VAR10 && VAR4->VAR11 == VAR6->VAR11 && VAR4->VAR12 == VAR6->VAR12 && !(FUN2(&VAR4->VAR13) & VAR14))
    {
        if (VAR4->VAR8[1] == -1)
        {
            return true;
        }
        else
        {
            tb_page_addr_t VAR15;
            target_ulong VAR16;
            VAR16 = (VAR6->VAR7 & VAR17) + VAR18;
            VAR15 = FUN3(VAR6->VAR19, VAR16);
            if (VAR4->VAR8[1] == VAR15)
            {
                return true;
            }
        }
    }
    return false;
}