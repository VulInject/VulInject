static int FUN1(struct VAR1 *VAR2)
{
    USBPacket VAR3;
    if (VAR2->VAR4 == VAR5)
    {
        VAR3.VAR6 = VAR7;
        VAR3.VAR8 = 1;
        VAR3.VAR9 = VAR2->VAR10.VAR11;
        VAR3.VAR12 = VAR2->VAR10.VAR12;
        VAR2->VAR10.VAR12 = VAR2->VAR13->VAR14->FUN2(VAR2->VAR13, &VAR3);
        return VAR2->VAR10.VAR12;
    }
    if (VAR2->VAR4 == VAR15)
    {
        VAR3.VAR8 = 0;
    }
    return -1;
}