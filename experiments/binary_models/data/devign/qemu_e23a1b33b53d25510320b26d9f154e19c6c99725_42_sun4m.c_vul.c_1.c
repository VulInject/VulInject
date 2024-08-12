static VAR1 *FUN1(target_phys_addr_t VAR2, VAR3 **VAR4)
{
    VAR1 *VAR5;
    VAR6 *VAR7;
    unsigned int VAR8;
    VAR5 = FUN2(NULL, "");
    FUN3(VAR5);
    VAR7 = FUN4(VAR5);
    for (VAR8 = 0; VAR8 < VAR9; VAR8++)
    {
        FUN5(VAR7, VAR8, *VAR4[VAR8]);
    }
    FUN6(VAR7, 0, VAR2);
    return VAR5;
}