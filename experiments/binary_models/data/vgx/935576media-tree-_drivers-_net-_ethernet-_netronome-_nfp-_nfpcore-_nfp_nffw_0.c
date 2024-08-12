static VAR1 FUN1(const struct VAR2 *VAR3)
{
u64 VAR4 = FUN2(VAR3->VAR5);

return (VAR4 & 0xFF) << 32 | FUN2(VAR3->VAR6);
}