static VAR1 *FUN1(ram_addr_t VAR2)
{
    VAR1 *VAR3;
    VAR3 = FUN2(&VAR4.VAR5);
    if (VAR3 && VAR2 - VAR3->VAR6 < VAR3->VAR7)
    {
        goto VAR8;
    }
    FUN3(VAR3, &VAR4.VAR9, VAR10)
    {
        if (VAR2 - VAR3->VAR6 < VAR3->VAR7)
        {
            goto VAR8;
        }
    }
    fprintf(VAR11, "" VAR12 "", (VAR13)VAR2);
    FUN4();
VAR8:
    VAR4.VAR5 = VAR3;
    return VAR3;
}