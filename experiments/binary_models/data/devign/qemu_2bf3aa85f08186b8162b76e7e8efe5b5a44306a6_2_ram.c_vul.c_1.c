static int FUN1(VAR1 *VAR2, VAR3 *VAR4, ram_addr_t VAR5, VAR6 *VAR7)
{
    int VAR8 = -1;
    if (FUN2(VAR7, VAR9))
    {
        VAR2->VAR10++;
        VAR2->VAR11 += FUN3(VAR2, VAR4, VAR5 | VAR12);
        FUN4(VAR2->VAR13, 0);
        VAR2->VAR11 += 1;
        VAR8 = 1;
    }
    return VAR8;
}