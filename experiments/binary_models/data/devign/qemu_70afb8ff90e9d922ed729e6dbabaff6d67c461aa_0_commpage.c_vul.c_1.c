void FUN1(void *VAR1, int VAR2)
{
    uint32_t VAR3 = ((VAR4 *)VAR1)->VAR5[VAR6];
    VAR7 *VAR8 = (VAR7 *)((VAR4 *)VAR1)->VAR5[VAR9];
    FUN2("", VAR3, VAR8);
    if (VAR8 && VAR3 == FUN3(*VAR8))
    {
        uint32_t new = ((VAR4 *)VAR1)->VAR5[VAR10];
        *VAR8 = FUN3(new);
        ((VAR4 *)VAR1)->VAR11 |= 0x40;
    }
    else
    {
        ((VAR4 *)VAR1)->VAR5[VAR6] = FUN3(*VAR8);
        ((VAR4 *)VAR1)->VAR11 &= ~0x40;
    }
    FUN4("");
}