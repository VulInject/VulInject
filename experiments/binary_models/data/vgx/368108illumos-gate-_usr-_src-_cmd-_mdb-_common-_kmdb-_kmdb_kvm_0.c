static void
FUN1(VAR1 *VAR2, int VAR3, void *private)
{
if (VAR4) {
if (!FUN2(VAR2) &&
(VAR5.VAR6 & VAR7)) {

return;
}

} else {
VAR8 *VAR9, *VAR10;
const VAR11 *VAR12, *VAR13;
mdb_map_t VAR14;

if ((VAR12 = FUN3(VAR2,
(VAR15)VAR16->VAR17)) == NULL) {
FUN4("",
VAR16->VAR18);
return; 
}

bcopy(VAR12, &VAR14, sizeof (VAR11));

for (VAR9 = FUN5(&VAR2->VAR19); VAR9; VAR9 = VAR10) {
VAR10 = FUN5(VAR9);

if (VAR9->VAR20 == &VAR21) {
VAR22 *VAR23 = VAR9->VAR24;

if ((VAR13 = FUN3(VAR2,
VAR23->VAR25)) == NULL ||
(VAR13->VAR26 == VAR14.VAR26 &&
VAR13->VAR27 == VAR14.VAR27)) {
FUN6(VAR2, VAR9,
VAR28);
}
}
}
}

(void) FUN7(VAR2, NULL);
}