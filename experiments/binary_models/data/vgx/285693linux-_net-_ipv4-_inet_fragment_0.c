void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
void *VAR5, bool VAR6)
{
struct VAR3 **VAR7 = VAR5;
struct VAR8 *VAR9;
struct VAR3 *VAR10;
int VAR11;

FUN2(VAR4, VAR4->VAR12 - FUN3(VAR4));


VAR10 = FUN4(VAR4)->VAR13;
VAR9 = FUN5(&VAR4->VAR14);
FUN6(&VAR4->VAR14, &VAR2->VAR15);

VAR11 = VAR4->VAR16;
while (VAR9 || VAR10) {


while (VAR10) {
struct VAR3 *VAR13 = FUN4(VAR10)->VAR13;
bool VAR17;
int VAR18;

VAR11 += VAR10->VAR16;
if (VAR4->VAR19 != VAR10->VAR19)
VAR4->VAR19 = VAR20;
else if (VAR4->VAR19 == VAR21)
VAR4->VAR22 = FUN7(VAR4->VAR22, VAR10->VAR22);

if (VAR6 && FUN8(VAR4, VAR10, &VAR17,
&VAR18)) {
FUN9(VAR10, VAR17);
} else {
VAR10->VAR23 = NULL;
memset(&VAR10->VAR14, 0, sizeof(VAR10->VAR14));
VAR10->VAR24 = NULL;

VAR4->VAR25 += VAR10->VAR26;
VAR4->VAR26 += VAR10->VAR26;
VAR4->VAR16 += VAR10->VAR16;

*VAR7 = VAR10;
VAR7 = &VAR10->VAR27;
}

VAR10 = VAR13;
}

if (VAR9) {
struct VAR8 *VAR28 = FUN5(VAR9);

VAR10 = FUN10(VAR9);
FUN6(VAR9, &VAR2->VAR15);
VAR9 = VAR28;
}
}
FUN11(VAR2->VAR29, VAR11);

*VAR7 = NULL;
FUN12(VAR4);
VAR4->VAR23 = NULL;
VAR4->VAR30 = VAR2->VAR31;
VAR4->VAR32 = VAR2->VAR32;
}