static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7;
    VAR7 = VAR3 >> 8;
    if (VAR7 > 3)
    {
        FUN2("", VAR7);
    }
    return FUN3(VAR6->VAR8[VAR7], VAR3 & 0xff);
}