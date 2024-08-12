static int FUN1(VAR1 *VAR2, vlan_bd_t VAR3, target_ulong VAR4)
{
    if ((FUN2(VAR3) % VAR4) || (FUN3(VAR3) % VAR4))
    {
        return -1;
    }
    if (FUN4(&VAR2->VAR5, FUN2(VAR3), FUN3(VAR3), VAR6) != 0)
    {
        return -1;
    }
    return 0;
}