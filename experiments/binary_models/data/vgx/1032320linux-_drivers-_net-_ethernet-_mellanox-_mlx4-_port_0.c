void FUN1(struct VAR1 *VAR2, u8 VAR3, u64 VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
int VAR9;
bool VAR10 = FUN2(VAR2);
u8 VAR11 = (VAR3 == 1) ? 2 : 1;
struct VAR7 *VAR12 = &FUN3(VAR2)->VAR3[VAR11].VAR13;

if (VAR3 < 1 || VAR3 > VAR2->VAR14.VAR15) {
FUN4(VAR2, "", VAR3);
return;
}
VAR6 = &FUN3(VAR2)->VAR3[VAR3];
VAR8 = &VAR6->VAR13;

if (VAR10) {
if (VAR3 == 1) {
FUN5(&VAR8->mutex);
FUN6(&VAR12->mutex, VAR16);
} else {
FUN5(&VAR12->mutex);
FUN6(&VAR8->mutex, VAR16);
}
} else {
FUN5(&VAR8->mutex);
}

VAR9 = FUN7(VAR2, VAR8, VAR4);

if (FUN8(VAR2, VAR8, VAR9))
goto VAR17;

if (--VAR8->VAR18[VAR9] || VAR8->VAR19[VAR9]) {
FUN9(VAR2, "",
VAR9);
if (!VAR8->VAR18[VAR9])
VAR12->VAR19[VAR9] = false;
goto VAR17;
}

VAR8->VAR20[VAR9] = 0;
if (FUN10(VAR2, VAR3, VAR8->VAR20))
FUN4(VAR2, "", VAR3);
--VAR8->VAR21;

if (VAR10) {
VAR12->VAR19[VAR9] = false;
if (VAR12->VAR18[VAR9])
goto VAR17;
VAR12->VAR20[VAR9] = 0;
if (FUN10(VAR2, VAR11, VAR12->VAR20))
FUN4(VAR2, "", VAR11);

--VAR8->VAR21;
}
VAR17:
if (VAR10) {
if (VAR3 == 2) {
FUN11(&VAR8->mutex);
FUN11(&VAR12->mutex);
} else {
FUN11(&VAR12->mutex);
FUN11(&VAR8->mutex);
}
} else {
FUN11(&VAR8->mutex);
}
}