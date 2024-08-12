static int FUN1(
struct VAR1 *VAR2,
int VAR3, int VAR4, int VAR5,
enum bpf_access_src VAR6, enum bpf_access_type VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR2);
struct VAR8 *VAR10 = VAR9 + VAR3;
struct VAR11 *VAR12 = FUN3(VAR2, VAR10);
int VAR13, VAR14;
int VAR15;
char *VAR16;

if (VAR6 == VAR17)

VAR16 = "";
else if (VAR7 == VAR18)
VAR16 = "";
else
VAR16 = "";

if (FUN4(VAR10->VAR19)) {
VAR13 = VAR10->VAR19.VAR20 + VAR4;
if (VAR5 > 0)
VAR14 = VAR13 + VAR5 - 1;
else
VAR14 = VAR13;
} else {
if (VAR10->VAR21 >= VAR22 ||
VAR10->VAR23 <= -VAR22) {
FUN5(VAR2, "",
VAR16, VAR3);
return -VAR24;
}
VAR13 = VAR10->VAR23 + VAR4;
if (VAR5 > 0)
VAR14 = VAR10->VAR21 + VAR4 + VAR5 - 1;
else
VAR14 = VAR13;
}

VAR15 = FUN6(VAR13, VAR12, VAR7);
if (!VAR15)
VAR15 = FUN6(VAR14, VAR12, VAR7);

if (VAR15) {
if (FUN4(VAR10->VAR19)) {
FUN5(VAR2, "",
VAR16, VAR3, VAR4, VAR5);
} else {
char VAR25[48];

FUN7(VAR25, sizeof(VAR25), VAR10->VAR19);
FUN5(VAR2, "",
VAR16, VAR3, VAR25, VAR5);
}
}
return VAR15;
}