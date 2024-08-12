static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7;
int VAR8;

VAR5 = VAR2->VAR5;
VAR7 = FUN2(VAR5->VAR9);
VAR8 = VAR7->VAR10->FUN3(VAR5, VAR3);

if (VAR8 == 0) {
VAR7->VAR10->FUN4(VAR5);
FUN5(VAR2, VAR5);
} else if (VAR8 == -VAR11) {
VAR7->VAR10->FUN6(VAR5);
}

return VAR8;
}