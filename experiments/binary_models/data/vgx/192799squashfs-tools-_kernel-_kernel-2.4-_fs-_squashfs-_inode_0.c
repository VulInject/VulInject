static struct VAR1 *FUN1(struct VAR2 *VAR3, struct VAR1 *VAR1)
{
const unsigned char *VAR4 = VAR1->VAR5.VAR4;
int VAR6 = VAR1->VAR5.VAR6;
struct VAR2 *VAR2 = NULL;
struct VAR7 *VAR8 = &VAR3->VAR9->VAR10.VAR11;
struct VAR12 *VAR13 = &VAR8->VAR13;
long long VAR14 = FUN2(VAR3)->VAR15 +
VAR13->VAR16;
int VAR17 = FUN2(VAR3)->VAR18, VAR19 = 0,
VAR20;
struct squashfs_dir_header VAR21;
char VAR22[sizeof(struct VAR23) + VAR24];
struct VAR23 *VAR25 = (struct VAR23 *) VAR22;

FUN3("", VAR14, VAR17);

if (VAR6 > VAR24)
goto VAR26;

VAR19 = FUN4(VAR3->VAR9, &VAR14, &VAR17,
FUN2(VAR3)->VAR10.VAR27.VAR28,
FUN2(VAR3)->VAR10.VAR27.VAR29,
FUN2(VAR3)->VAR10.VAR27.VAR30, VAR4,
VAR6);

while (VAR19 < FUN5(VAR3)) {

if (VAR8->VAR31) {
struct squashfs_dir_header VAR32;
if (!FUN6(VAR3->VAR9, (char *) &VAR32,
VAR14, VAR17, sizeof(VAR32),
&VAR14, &VAR17))
goto VAR33;

VAR19 += sizeof(VAR32);
FUN7(&VAR21, &VAR32);
} else {
if (!FUN6(VAR3->VAR9, (char *) &VAR21,
VAR14, VAR17, sizeof(VAR21),
&VAR14, &VAR17))
goto VAR33;

VAR19 += sizeof(VAR21);
}

VAR20 = VAR21.VAR34 + 1;
while (VAR20--) {
if (VAR8->VAR31) {
struct squashfs_dir_entry VAR35;
if (!FUN6(VAR3->VAR9, (char *)
&VAR35, VAR14,VAR17,
sizeof(VAR35), &VAR14,
&VAR17))
goto VAR33;

VAR19 += sizeof(VAR35);
FUN8(VAR25, &VAR35);
} else {
if (!FUN6(VAR3->VAR9, (char *)
VAR25, VAR14,VAR17,
sizeof(*VAR25), &VAR14,
&VAR17))
goto VAR33;

VAR19 += sizeof(*VAR25);
}

if (!FUN6(VAR3->VAR9, VAR25->VAR4,
VAR14, VAR17, VAR25->VAR36 + 1,
&VAR14, &VAR17))
goto VAR33;

VAR19 += VAR25->VAR36 + 1;

if (VAR4[0] < VAR25->VAR4[0])
goto VAR26;

if ((VAR6 == VAR25->VAR36 + 1) && !FUN9(VAR4,
VAR25->VAR4, VAR6)) {
squashfs_inode_t VAR37 =
FUN10(VAR21.VAR15,
VAR25->VAR18);

FUN3(""
"", VAR4,
VAR21.VAR15, VAR25->VAR18,
VAR21.VAR38 + VAR25->VAR38);

VAR2 = (VAR8->VAR39)(VAR3->VAR9, VAR37);

goto VAR26;
}
}
}

VAR26:
FUN11(VAR1, VAR2);
return FUN12(0);

VAR33:
FUN13("", VAR14,
VAR17);
goto VAR26;
}