static int FUN1(struct VAR1 *VAR2)
{
struct flexcan_regs VAR3 *VAR4 = VAR2->VAR4;
u32 VAR5;

VAR5 = VAR2->read(&VAR4->VAR6);
VAR5 &= ~VAR7;
VAR2->write(VAR5, &VAR4->VAR6);

return FUN2(VAR2);
}