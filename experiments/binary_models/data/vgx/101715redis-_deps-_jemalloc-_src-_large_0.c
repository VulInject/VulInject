static bool
FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5,
bool VAR6) {
VAR7 *VAR8 = FUN2(VAR4);
size_t VAR9 = FUN3(VAR4);
VAR10 *VAR11 = FUN4(VAR8);
size_t VAR12 = VAR5 - VAR9;

if (VAR11->VAR13 == NULL) {
return true;
}

if (VAR14 && FUN5(VAR15)) {
VAR6 = true;
}

bool VAR16 = VAR6;
bool VAR17 = true;
VAR3 *VAR18;
bool VAR19;
if ((VAR18 = FUN6(VAR2, VAR8, &VAR11,
&VAR8->VAR20, FUN7(VAR4), VAR12, 0,
VAR21, false, VAR22, &VAR16, &VAR17)) != NULL
|| (VAR18 = FUN6(VAR2, VAR8, &VAR11,
&VAR8->VAR23, FUN7(VAR4), VAR12, 0,
VAR21, false, VAR22, &VAR16, &VAR17)) != NULL) {
if (VAR24) {
VAR19 = false;
}
} else {
if ((VAR18 = FUN8(VAR2, VAR8, &VAR11,
FUN7(VAR4), VAR12, 0, VAR21, false,
VAR22, &VAR16, &VAR17)) == NULL) {
return true;
}
if (VAR24) {
VAR19 = true;
}
}

if (FUN9(VAR2, VAR8, &VAR11, VAR4, VAR18)) {
FUN10(VAR2, VAR8, &VAR11, VAR18);
return true;
}
rtree_ctx_t VAR25;
VAR26 *VAR27 = FUN11(VAR2, &VAR25);
szind_t VAR28 = FUN12(VAR5);
FUN13(VAR4, VAR28);
FUN14(VAR2, &VAR29, VAR27,
(VAR30)FUN15(VAR4), VAR28, false);

if (VAR24 && VAR19) {
FUN16(VAR2, &VAR8->VAR31, VAR12);
}

if (VAR6) {
if (VAR32) {

void *VAR33 = (void *)
((VAR30)FUN15(VAR4) + VAR9);
void *VAR34 = FUN17((void *)((VAR30)VAR33 +
VAR35));
size_t VAR36 = (VAR30)VAR34 - (VAR30)VAR33;
assert(VAR36 > 0);
memset(VAR33, 0, VAR36);
}
assert(VAR16);
} else if (VAR14 && FUN5(VAR37)) {
memset((void *)((VAR30)FUN15(VAR4) + VAR9),
VAR38, VAR5 - VAR9);
}

FUN18(VAR2, VAR8, VAR4, VAR9);

return false;
}