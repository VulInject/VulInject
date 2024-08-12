static int FUN1(VAR1 *VAR2, uint8_t VAR3, VAR4 *VAR5)
{
    struct virtio_net_ctrl_mac VAR6;
    if (VAR3 != VAR7 || VAR5->VAR8 != 3 || VAR5->VAR9[1].VAR10 < sizeof(VAR6) || VAR5->VAR9[2].VAR10 < sizeof(VAR6))
        return VAR11;
    VAR2->VAR12.VAR13 = 0;
    memset(VAR2->VAR12.VAR14, 0, VAR15 * VAR16);
    VAR6.VAR17 = FUN2(VAR5->VAR9[1].VAR18);
    if (sizeof(VAR6.VAR17) + (VAR6.VAR17 * VAR16) > VAR5->VAR9[1].VAR10)
        return VAR11;
    if (VAR6.VAR17 <= VAR15)
    {
        memcpy(VAR2->VAR12.VAR14, VAR5->VAR9[1].VAR18 + sizeof(VAR6), VAR6.VAR17 * VAR16);
        VAR2->VAR12.VAR13 += VAR6.VAR17;
    }
    else
    {
        VAR2->VAR19 = 1;
        return VAR20;
    }
    VAR6.VAR17 = FUN2(VAR5->VAR9[2].VAR18);
    if (sizeof(VAR6.VAR17) + (VAR6.VAR17 * VAR16) > VAR5->VAR9[2].VAR10)
        return VAR11;
    if (VAR6.VAR17)
    {
        if (VAR2->VAR12.VAR13 + VAR6.VAR17 <= VAR15)
        {
            memcpy(VAR2->VAR12.VAR14 + (VAR2->VAR12.VAR13 * VAR16), VAR5->VAR9[2].VAR18 + sizeof(VAR6), VAR6.VAR17 * VAR16);
            VAR2->VAR12.VAR13 += VAR6.VAR17;
        }
        else
            VAR2->VAR21 = 1;
    }
    return VAR20;
}