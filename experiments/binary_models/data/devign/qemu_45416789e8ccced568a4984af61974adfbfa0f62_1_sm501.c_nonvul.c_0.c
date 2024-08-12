static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    FUN2("", (int)VAR2, VAR3);
    assert(FUN3(0, 0x400 * 3, VAR2));
    *(VAR6 *)&VAR5->VAR7[VAR2] = VAR3;
}