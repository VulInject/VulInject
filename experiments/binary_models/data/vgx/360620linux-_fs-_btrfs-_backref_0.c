static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2->VAR7, VAR2->VAR8);
struct btrfs_key VAR9;
struct VAR10 *VAR11;
struct VAR12 *VAR13 = NULL;
struct VAR14 *VAR15;
int VAR16 = 0;
int VAR17;
struct VAR18 *VAR19;
struct VAR20 *VAR21;
struct VAR22 *VAR23 = NULL;
struct preftrees VAR24 = {
.VAR25 = VAR26,
.VAR27 = VAR26,
.VAR28 = VAR26
};


if (VAR4)
FUN3(VAR2->VAR29 == NULL);

VAR9.VAR30 = VAR2->VAR8;
VAR9.VAR31 = (VAR32)-1;
if (FUN4(VAR2->VAR7, VAR33))
VAR9.VAR34 = VAR35;
else
VAR9.VAR34 = VAR36;

VAR11 = FUN5();
if (!VAR11)
return -VAR37;
if (!VAR2->VAR38) {
VAR11->VAR39 = 1;
VAR11->VAR40 = 1;
}

if (VAR2->VAR41 == VAR42)
VAR11->VAR40 = 1;

VAR43:
VAR15 = NULL;

VAR17 = FUN6(NULL, VAR6, &VAR9, VAR11, 0, 0);
if (VAR17 < 0)
goto VAR44;
if (VAR17 == 0) {

FUN3(VAR17 != 0);
VAR17 = -VAR45;
goto VAR44;
}

if (VAR2->VAR38 && FUN7(VAR2->VAR38->VAR34 != VAR46) &&
VAR2->VAR41 != VAR42) {

VAR13 = &VAR2->VAR38->VAR47->VAR13;
FUN8(&VAR13->VAR48);
VAR15 = FUN9(VAR13, VAR2->VAR8);
if (VAR15) {
if (!FUN10(&VAR15->mutex)) {
FUN11(&VAR15->VAR49);
FUN12(&VAR13->VAR48);

FUN13(VAR11);


FUN14(&VAR15->mutex);
FUN15(&VAR15->mutex);
FUN16(VAR15);
goto VAR43;
}
FUN12(&VAR13->VAR48);
VAR17 = FUN17(VAR2->VAR7, VAR15, VAR2->VAR41,
&VAR24, VAR4);
FUN15(&VAR15->mutex);
if (VAR17)
goto VAR44;
} else {
FUN12(&VAR13->VAR48);
}
}

if (VAR11->VAR50[0]) {
struct VAR51 *VAR52;
int VAR53;

VAR11->VAR50[0]--;
VAR52 = VAR11->VAR54[0];
VAR53 = VAR11->VAR50[0];
FUN18(VAR52, &VAR9, VAR53);
if (VAR9.VAR30 == VAR2->VAR8 &&
(VAR9.VAR34 == VAR36 ||
VAR9.VAR34 == VAR35)) {
VAR17 = FUN19(VAR2, VAR11, &VAR16,
&VAR24, VAR4);
if (VAR17)
goto VAR44;
VAR17 = FUN20(VAR2, VAR6, VAR11, VAR16,
&VAR24, VAR4);
if (VAR17)
goto VAR44;
}
}


FUN3(FUN21(VAR4) == 0);


if (VAR4 && VAR2->VAR8 == VAR4->VAR55) {

if (VAR4->VAR56 >
FUN22(&VAR4->VAR6->VAR57)) {
VAR17 = VAR58;
goto VAR44;
}


if (VAR4->VAR2->VAR59 == VAR4->VAR2->VAR60 &&
VAR4->VAR61 == 1) {
bool VAR62;
bool VAR63;

VAR62 = FUN23(VAR4->VAR2, VAR4->VAR6,
VAR4->VAR2->VAR59,
0, &VAR63);
if (VAR62) {
if (VAR63)
VAR17 = VAR64;
else
VAR17 = VAR58;
goto VAR44;
}
}
}

FUN13(VAR11);

VAR17 = FUN24(VAR2->VAR7, &VAR24, VAR11->VAR40 == 0);
if (VAR17)
goto VAR44;

FUN25(!FUN26(&VAR24.VAR28.VAR6.VAR65));

VAR17 = FUN27(VAR2, VAR11, &VAR24, VAR4);
if (VAR17)
goto VAR44;

FUN25(!FUN26(&VAR24.VAR27.VAR6.VAR65));


VAR21 = FUN28(&VAR24.VAR25.VAR6);
while (VAR21) {
VAR19 = FUN29(VAR21, struct VAR18, VAR66);
VAR21 = FUN30(&VAR19->VAR66);

if (VAR2->VAR29 && VAR19->VAR67 && VAR19->VAR68 && VAR19->VAR69 == 0) {

VAR17 = FUN31(VAR2->VAR29, VAR19->VAR68, 0, VAR70);
if (VAR17 < 0)
goto VAR44;
}
if (VAR19->VAR67 && VAR19->VAR69) {
if (!VAR2->VAR71 && !VAR19->VAR72 &&
VAR19->VAR73 == 0) {
struct btrfs_tree_parent_check VAR74 = { 0 };
struct VAR51 *VAR75;

VAR74.VAR73 = VAR19->VAR73;

VAR75 = FUN32(VAR2->VAR7, VAR19->VAR69,
&VAR74);
if (FUN33(VAR75)) {
VAR17 = FUN34(VAR75);
goto VAR44;
}
if (!FUN35(VAR75)) {
FUN36(VAR75);
VAR17 = -VAR76;
goto VAR44;
}

if (!VAR11->VAR40)
FUN37(VAR75);
VAR17 = FUN38(VAR2, VAR75, &VAR23);
if (!VAR11->VAR40)
FUN39(VAR75);
FUN36(VAR75);
if (VAR17 == VAR77 ||
VAR17 < 0)
goto VAR44;
VAR19->VAR72 = VAR23;

VAR23 = NULL;
}
VAR17 = FUN40(VAR2->VAR49, VAR19->VAR69,
VAR19->VAR72,
(void **)&VAR23, VAR70);
if (VAR17 < 0)
goto VAR44;
if (!VAR17 && !VAR2->VAR71) {

FUN3(VAR23);
if (!VAR23) {
VAR17 = -VAR45;
goto VAR44;
}
while (VAR23->VAR78)
VAR23 = VAR23->VAR78;
VAR23->VAR78 = VAR19->VAR72;
}
VAR23 = NULL;

VAR19->VAR72 = NULL;
}
FUN41();
}

VAR44:
FUN42(VAR11);

FUN43(&VAR24.VAR25);
FUN43(&VAR24.VAR27);
FUN43(&VAR24.VAR28);

if (VAR17 == VAR77 || VAR17 < 0)
FUN44(VAR23);
return VAR17;
}