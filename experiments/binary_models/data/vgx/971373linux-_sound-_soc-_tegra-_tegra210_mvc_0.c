static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
u32 VAR5;
int VAR6;

VAR6 = FUN3(VAR4->VAR7, VAR8,
VAR5, !(VAR5 & VAR9),
10, 10000);
if (VAR6 < 0)
FUN4(VAR2->VAR10,
"",
VAR6);

return VAR6;
}