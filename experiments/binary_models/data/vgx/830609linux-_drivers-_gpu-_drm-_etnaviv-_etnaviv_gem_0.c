int FUN1(struct VAR1 *VAR2, u32 VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9 = VAR2->VAR9;
bool write = !!(VAR3 & VAR10);
int VAR11;

if (!VAR7->VAR12) {
void *VAR11;

FUN3(&VAR7->VAR13);
VAR11 = FUN4(VAR7);
FUN5(&VAR7->VAR13);
if (FUN6(VAR11))
return FUN7(VAR11);
}

if (VAR3 & VAR14) {
if (!FUN8(VAR2->VAR15,
FUN9(write)))
return -VAR16;
} else {
unsigned long VAR17 = FUN10(VAR5);

VAR11 = FUN11(VAR2->VAR15, FUN9(write),
true, VAR17);
if (VAR11 <= 0)
return VAR11 == 0 ? -VAR18 : VAR11;
}

if (VAR7->VAR19 & VAR20) {
FUN12(VAR9->VAR9, VAR7->VAR12,
FUN13(VAR3));
VAR7->VAR21 = VAR3;
}

return 0;
}