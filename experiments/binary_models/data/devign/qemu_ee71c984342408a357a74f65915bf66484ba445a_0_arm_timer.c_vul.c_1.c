static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    int VAR7;
    VAR7 = VAR2 >> 8;
    if (VAR7 > 3)
    {
        FUN2("", VAR7);
    }
    FUN3(VAR6->VAR8[VAR7], VAR2 & 0xff, VAR3);
}