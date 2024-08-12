static inline VAR1 FUN1(void)
{
u64 VAR2;

VAR2 = FUN2(&VAR3->VAR4.VAR5.VAR6);
FUN3(VAR2 & ~(3U << 23), &VAR3->VAR4.VAR5.VAR6);

return (VAR2 >> 23) & 3;
}