static void FUN1(struct VAR1 *VAR2, u64 VAR3)
{
int VAR4 = FUN2(VAR2->VAR5);
int VAR6 = FUN3(VAR2);
int VAR7, VAR8;
static int VAR9;

if (VAR2->VAR10)
VAR4 = 1;

if (!VAR9) {
FUN4("",
"", "", "", "", "", "", "");
VAR9 = 1;
}

for (VAR8 = 0; VAR8 < VAR4; VAR8++) {
for (VAR7 = 0; VAR7 < VAR6; VAR7++) {
struct VAR11 *VAR12;

VAR12 = FUN5(VAR2->VAR12, VAR7, VAR8);

FUN4("" VAR13 "" VAR13 "" VAR13 "" VAR13 "",
VAR2->VAR14->VAR15[VAR7],
FUN6(VAR2->VAR5, VAR8),
VAR12->VAR16,
VAR12->VAR17,
VAR12->VAR18,
VAR3,
FUN7(VAR2));
}
}
}