static unsigned int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
enum lp8788_buck_id VAR5 = FUN3(VAR2);
u8 VAR6;
int VAR7;

VAR7 = FUN4(VAR4->VAR8, VAR9, &VAR6);
if (VAR7)
return VAR7;

return VAR6 & FUN5(VAR5) ?
VAR10 : VAR11;
}