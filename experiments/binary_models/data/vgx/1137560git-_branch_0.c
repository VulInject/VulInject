void FUN1(struct VAR1 *VAR2, const char *VAR3,
const char *VAR4,
const char *VAR5, int VAR6,
int VAR7, int VAR8, enum branch_track VAR9,
int VAR10)
{
int VAR11 = 0;
char *VAR12 = NULL;
struct object_id VAR13;
struct submodule_entry_list VAR14;


FUN2(VAR2, VAR4, VAR15,
&VAR12, &VAR13);


if (!VAR5)
VAR5 = VAR12;

FUN3(VAR2, &VAR13, &VAR14);

for (VAR11 = 0; VAR11 < VAR14.VAR16; VAR11++) {
if (!VAR14.VAR17[VAR11].VAR18) {
int VAR19 = FUN4(
FUN5(""),
VAR14.VAR17[VAR11].VAR20->VAR3);
if (FUN6(VAR21))
FUN7(FUN5(""),
VAR4);
FUN8(VAR19);
}

if (FUN9(
VAR14.VAR17[VAR11].VAR18,
VAR14.VAR17[VAR11].VAR20, VAR3,
FUN10(&VAR14.VAR17[VAR11]
.VAR22->VAR23),
VAR5, VAR6, VAR7, VAR8, VAR9, 1))
FUN11(FUN5(""),
VAR14.VAR17[VAR11].VAR20->VAR3,
VAR3);
}

FUN12(VAR24, VAR3, VAR4, VAR6, 0, VAR7, VAR8,
VAR15, VAR10);
if (VAR10)
return;

if (VAR9)
FUN13(VAR3, VAR5, VAR9, VAR8);

for (VAR11 = 0; VAR11 < VAR14.VAR16; VAR11++) {
if (FUN9(
VAR14.VAR17[VAR11].VAR18,
VAR14.VAR17[VAR11].VAR20, VAR3,
FUN10(&VAR14.VAR17[VAR11]
.VAR22->VAR23),
VAR5, VAR6, VAR7, VAR8, VAR9, 0))
FUN11(FUN5(""),
VAR14.VAR17[VAR11].VAR20->VAR3,
VAR3);
FUN14(VAR14.VAR17[VAR11].VAR18);
}
}