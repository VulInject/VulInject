static bool FUN1(VAR1 *VAR2)
{
    const uint64_t VAR3 = VAR2->VAR4.VAR3 & 0x000f;
    if (VAR3 >= FUN2() || VAR2->VAR4.VAR5 > FUN3() || VAR2->VAR4.VAR5 <= 0)
    {
        return false;
    }
    if (!FUN4() && FUN5(VAR2) >= FUN6())
    {
        return false;
    }
    return true;
}