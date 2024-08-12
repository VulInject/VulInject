void FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
const int VAR4 = sizeof(struct VAR5);
struct VAR6 *VAR7;
struct VAR8 *VAR8;
struct VAR5 *VAR9;
unsigned int VAR10, VAR11;
u32 VAR12, VAR13;

VAR7 = FUN2(VAR2->VAR14->VAR15);

if (VAR7->VAR16 == VAR17 || VAR3 == 0)
return;

VAR11 = VAR3 / FUN3(VAR2);
VAR12 = FUN4(VAR2);

FUN5(VAR8, VAR2->VAR14) {
struct VAR18 *VAR19 = FUN6(VAR8);
struct bio_vec VAR20;
struct bvec_iter VAR21;

VAR13 = FUN7(VAR19) & 0xffffffff;

FUN8(VAR20, VAR19, VAR21) {
VAR9 = FUN9(VAR20.VAR22) + VAR20.VAR23;

for (VAR10 = 0; VAR10 < VAR20.VAR24; VAR10 += VAR4, VAR9++) {

if (VAR11 == 0) {
FUN10(VAR9);
return;
}

if (FUN11(VAR9->VAR25) == VAR12)
VAR9->VAR25 = FUN12(VAR13);

VAR13++;
VAR12++;
VAR11--;
}

FUN10(VAR9);
}
}
}