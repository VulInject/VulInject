static void FUN1(target_phys_addr_t VAR1, ram_addr_t VAR2, uint64_t VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    if ((VAR10)VAR2 > VAR3)
    {
        fprintf(VAR11, "", (unsigned int)(VAR2 / (1024 * 1024)), (unsigned int)(VAR3 / (1024 * 1024)));
        FUN2(1);
    }
    VAR5 = FUN3(NULL, "");
    VAR7 = FUN4(VAR5);
    VAR9 = FUN5(VAR8, VAR7);
    VAR9->VAR12 = VAR2;
    FUN6(VAR5);
    FUN7(VAR7, 0, VAR1);
}