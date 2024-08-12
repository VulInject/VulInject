static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    FUN2("", (int)VAR3);
    assert(FUN3(0, 0x400 * 3, VAR3));
    return *(VAR1 *)&VAR5->VAR6[VAR3];
}