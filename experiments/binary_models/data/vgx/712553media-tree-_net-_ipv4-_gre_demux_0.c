static void FUN1(struct VAR1 *VAR2, u32 VAR3)
{
const struct VAR4 *VAR5;
const struct VAR6 *VAR7 = (const struct VAR6 *)VAR2->VAR8;
u8 VAR9 = VAR2->VAR8[(VAR7->VAR10<<2) + 1]&0x7f;

if (VAR9 >= VAR11)
return;

FUN2();
VAR5 = FUN3(VAR12[VAR9]);
if (VAR5 && VAR5->VAR13)
VAR5->FUN4(VAR2, VAR3);
FUN5();
}