static bool FUN1(struct VAR1 *VAR2,
u32 VAR3, u32 VAR4)
{
bool VAR5 = false;
u32 VAR6;

while (VAR3--) {
VAR6 = FUN2(VAR2->VAR7->VAR8 + VAR9);
VAR5 = !!(VAR6 & VAR10);

if (VAR5)
break;

FUN3(VAR4);
}
FUN4("", VAR5 ? "" : "");

return VAR5;
}