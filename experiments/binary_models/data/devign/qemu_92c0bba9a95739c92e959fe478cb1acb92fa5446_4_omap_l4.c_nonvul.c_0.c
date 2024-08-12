VAR1 FUN1(struct VAR2 *VAR3, int VAR4, int VAR5)
{
    target_phys_addr_t VAR6;
    ssize_t VAR7;
    if (VAR4 < 0 || VAR4 >= VAR3->VAR8)
    {
        fprintf(VAR9, "", VAR10, VAR4);
        FUN2(-1);
    }
    VAR6 = VAR3->VAR11->VAR6 + VAR3->VAR12[VAR4].VAR13;
    VAR7 = VAR3->VAR12[VAR4].VAR7;
    if (VAR5)
    {
        FUN3(VAR6, VAR7, VAR5);
    }
    return VAR6;
}