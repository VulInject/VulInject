static enum VAR1
FUN1(struct VAR2 *VAR3,
const struct VAR4 *VAR5,
const struct VAR6 *VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR3);
unsigned long VAR10 = VAR7->VAR11 * 1000;
struct dispc_clock_info VAR12;
unsigned long VAR13;
int VAR14;

if (VAR10 == 0)
return VAR15;

VAR14 = FUN3(VAR9, VAR10, &VAR13, &VAR12);
if (VAR14 < 0)
return VAR16;

return VAR17;
}