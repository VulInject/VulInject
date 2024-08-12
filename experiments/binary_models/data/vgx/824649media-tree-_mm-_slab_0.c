static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3)
{
int VAR4;

for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++) {
void *VAR6 = FUN2(VAR2, VAR3, VAR4);

if (VAR2->VAR7 & VAR8)
*FUN3(VAR2, VAR6) = NULL;

if (VAR2->VAR7 & VAR9) {
*FUN4(VAR2, VAR6) = VAR10;
*FUN5(VAR2, VAR6) = VAR10;
}

if (VAR2->VAR11 && !(VAR2->VAR7 & VAR12)) {
FUN6(VAR2,
VAR6 + FUN7(VAR2));
VAR2->FUN8(VAR6 + FUN7(VAR2));
FUN9(
VAR2, VAR6 + FUN7(VAR2));
}

if (VAR2->VAR7 & VAR9) {
if (*FUN5(VAR2, VAR6) != VAR10)
FUN10(VAR2, "");
if (*FUN4(VAR2, VAR6) != VAR10)
FUN10(VAR2, "");
}

if (VAR2->VAR7 & VAR12) {
FUN11(VAR2, VAR6, VAR13);
FUN12(VAR2, VAR6, 0, 0);
}
}
}


union VAR14 {
struct {
unsigned int VAR15;
unsigned int *VAR16;
unsigned int VAR17;
};
struct rnd_state VAR18;
};