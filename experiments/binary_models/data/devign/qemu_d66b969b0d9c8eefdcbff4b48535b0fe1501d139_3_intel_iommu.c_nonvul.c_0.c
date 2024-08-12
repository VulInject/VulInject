static void FUN1(VAR1 *VAR2, uint16_t VAR3, hwaddr VAR4, uint8_t VAR5)
{
    VTDIOTLBPageInvInfo VAR6;
    assert(VAR5 <= VAR7);
    VAR6.VAR3 = VAR3;
    VAR6.VAR4 = VAR4;
    VAR6.VAR8 = ~((1 << VAR5) - 1);
    FUN2(VAR2->VAR9, VAR10, &VAR6);
}