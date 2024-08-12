static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    struct VAR4 *VAR5 = (struct VAR4 *)VAR2;
    VAR3 -= VAR5->VAR6;
    switch (VAR3)
    {
    case VAR7 ... VAR8:
        if (VAR3 & 3)
            goto VAR9;
        return VAR5->VAR10[VAR3 >> 2];
    default:
    VAR9:
        FUN2("" VAR11 "", VAR12, VAR3);
        break;
    }
    return 0;
}