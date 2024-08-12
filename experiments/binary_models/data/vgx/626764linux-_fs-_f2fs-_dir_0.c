static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR4 = FUN2(VAR1);
unsigned long VAR5 = FUN3(VAR4);
struct VAR6 *VAR7 = NULL;
struct VAR8 *VAR9 = NULL;
struct VAR10 *VAR11 = &VAR1->VAR12;
loff_t VAR13 = VAR3->VAR14;
unsigned int VAR15 = ((unsigned long)VAR3->VAR14 / VAR16);
struct f2fs_dentry_ptr VAR17;
struct fscrypt_str VAR18 = FUN4(NULL, 0);
int VAR19 = 0;

if (FUN5(VAR4)) {
VAR19 = FUN6(VAR4);
if (VAR19)
goto VAR20;

VAR19 = FUN7(VAR21, &VAR18);
if (VAR19 < 0)
goto VAR20;
}

if (FUN8(VAR4)) {
VAR19 = FUN9(VAR1, VAR3, &VAR18);
goto VAR22;
}

for (; VAR15 < VAR5; VAR3->VAR14 = VAR15 * VAR16) {
pgoff_t VAR23;


if (FUN10(VAR24)) {
VAR19 = -VAR25;
goto VAR22;
}
FUN11();


if (VAR5 - VAR15 > 1 && !FUN12(VAR11, VAR15))
FUN13(VAR4->VAR26, VAR11, VAR1, VAR15,
FUN14(VAR5 - VAR15, (VAR27)VAR28));

VAR9 = FUN15(VAR4, VAR15, &VAR23);
if (FUN16(VAR9)) {
VAR19 = FUN17(VAR9);
if (VAR19 == -VAR29) {
VAR19 = 0;
VAR15 = VAR23;
continue;
} else {
goto VAR22;
}
}

VAR7 = FUN18(VAR9);

FUN19(VAR4, &VAR17, VAR7);

VAR19 = FUN20(VAR3, &VAR17,
VAR15 * VAR16, &VAR18);
if (VAR19) {
FUN21(VAR9, 0);
break;
}

FUN21(VAR9, 0);

VAR15++;
}
VAR22:
FUN22(&VAR18);
VAR20:
FUN23(VAR4, VAR13, VAR3->VAR14, VAR19);
return VAR19 < 0 ? VAR19 : 0;
}