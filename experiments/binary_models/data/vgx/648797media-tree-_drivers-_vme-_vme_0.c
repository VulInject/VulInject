int FUN1(struct VAR1 *VAR2, int VAR3,
unsigned long long VAR4, unsigned long long VAR5, u32 VAR6,
u32 VAR7, u32 VAR8)
{
struct VAR9 *VAR10 = FUN2(VAR2);
struct VAR11 *VAR12;
int VAR13;

if (VAR2->VAR14 != VAR15) {
FUN3(VAR16 "");
return -VAR17;
}

VAR12 = FUN4(VAR2->VAR18, struct VAR11, VAR19);

if (VAR10->VAR20 == NULL) {
FUN3(VAR21 "");
return -VAR17;
}

if (!(((VAR12->VAR22 & VAR6) == VAR6) &&
((VAR12->VAR23 & VAR7) == VAR7) &&
((VAR12->VAR24 & VAR8) == VAR8))) {
FUN3(VAR21 "");
return -VAR17;
}

VAR13 = FUN5(VAR6, VAR4, VAR5);
if (VAR13)
return VAR13;

return VAR10->FUN6(VAR12, VAR3, VAR4, VAR5, VAR6,
VAR7, VAR8);
}