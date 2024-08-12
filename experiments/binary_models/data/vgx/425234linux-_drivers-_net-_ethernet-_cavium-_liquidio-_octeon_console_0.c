static VAR1 FUN1(struct VAR2 *VAR3,
const char *VAR4,
u32 VAR5)
{
u64 VAR6 = 0;

if (!FUN2(VAR3, 3)) {
u32 VAR7;

u64 VAR8 = FUN3(
VAR3, VAR3->VAR9,
FUN4(struct VAR10,
VAR8),
FUN5(struct VAR10,
VAR8));
u32 VAR11 = (VAR12)FUN3(
VAR3, VAR3->VAR9,
FUN4(struct VAR10,
VAR13),
FUN5(struct VAR10,
VAR13));

u32 VAR14 = (VAR12)FUN3(
VAR3, VAR3->VAR9,
FUN4(struct VAR10,
VAR15),
FUN5(struct VAR10,
VAR15));

u64 VAR16 = VAR8;

for (VAR7 = 0; VAR7 < VAR11; VAR7++) {
u64 VAR17 = FUN3(
VAR3, VAR16,
FUN4(
struct VAR18,
VAR19),
FUN5(
struct VAR18,
VAR19));

if (VAR4 && VAR17) {
char *VAR20 =
FUN6(VAR14 + 1, VAR21);
if (!VAR20)
break;

FUN7(VAR3, VAR16,
VAR20,
VAR14);
if (!FUN8(VAR4, VAR20, VAR14)) {
VAR6 = VAR16;
FUN9(VAR20);
break;
}
FUN9(VAR20);
} else if (!VAR4 && !VAR17) {
VAR6 = VAR16;
break;
}

VAR16 +=
sizeof(struct VAR18);
}
}
return VAR6;
}