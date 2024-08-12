int FUN1(struct VAR1 *VAR2,
enum phy_mode VAR3)
{
struct VAR1 *VAR4;
struct VAR5 *VAR6;
int VAR7;

if (!VAR2)
return 0;

VAR6 = &VAR2->VAR8;

FUN2(VAR4, VAR6, VAR8) {
VAR7 = FUN3(VAR4->VAR9, VAR3);
if (VAR7)
goto VAR10;
}

return 0;

VAR10:
FUN4(VAR4, VAR6, VAR8)
FUN5(VAR4->VAR9);

return VAR7;
}