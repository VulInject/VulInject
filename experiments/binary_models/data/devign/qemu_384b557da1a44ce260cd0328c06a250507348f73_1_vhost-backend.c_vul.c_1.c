int FUN1(struct VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, uint64_t VAR5, IOMMUAccessFlags VAR6)
{
    struct vhost_iotlb_msg VAR7;
    VAR7.VAR3 = VAR3;
    VAR7.VAR4 = VAR4;
    VAR7.VAR8 = VAR5;
    VAR7.VAR9 = VAR10;
    switch (VAR6)
    {
    case VAR11:
        VAR7.VAR6 = VAR12;
        break;
    case VAR13:
        VAR7.VAR6 = VAR14;
        break;
    case VAR15:
        VAR7.VAR6 = VAR16;
        break;
    default:
        return -VAR17;
    }
    return VAR2->VAR18->FUN2(VAR2, &VAR7);
}