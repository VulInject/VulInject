static int FUN1(VAR1* VAR2, enum wc_HashType VAR3,
VAR4* VAR5, const VAR6* VAR7, word32 VAR8, VAR6* VAR9, VAR10* VAR11)
{
int VAR12 = 0;
word32 VAR13 = VAR2->VAR14.VAR15->VAR16;
int VAR17 = 0;


VAR12 = FUN2(&VAR2->VAR18, VAR3, VAR2->VAR19, VAR20);
if (VAR12 == 0) {
VAR17 = 1;

VAR12 = FUN3(&VAR2->VAR18, VAR3, VAR2->VAR21, VAR2->VAR22);
}
if (VAR12 == 0) {
VAR12 = FUN4(VAR5, VAR2->VAR23, VAR13);
}
if (VAR12 == 0) {

VAR12 = FUN3(&VAR2->VAR18, VAR3, VAR2->VAR23, VAR13);
}
if (VAR12 == 0) {

VAR12 = FUN3(&VAR2->VAR18, VAR3, VAR7, VAR8);
}
if (VAR12 == 0) {
VAR12 = FUN5(&VAR2->VAR18, VAR3, VAR9);
}
if (VAR12 == 0) {
*VAR11 = FUN6(VAR3);
}

if (VAR17) {
(void)FUN7(&VAR2->VAR18, VAR3);
}

return VAR12;
}