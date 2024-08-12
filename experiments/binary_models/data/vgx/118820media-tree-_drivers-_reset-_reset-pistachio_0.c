static int FUN1(struct VAR1 *VAR2,
unsigned long VAR3)
{
struct VAR4 *VAR5;
u32 VAR6;
int VAR7;

VAR5 = FUN2(VAR2, struct VAR4, VAR2);
VAR7 = FUN3(VAR3);
if (VAR7 < 0)
return VAR7;
VAR6 = FUN4(VAR7);

return FUN5(VAR5->VAR8, VAR9,
VAR6, VAR6);
}