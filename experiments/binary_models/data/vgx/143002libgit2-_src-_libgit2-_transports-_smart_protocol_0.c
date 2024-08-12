int FUN1(VAR1 *VAR2, int VAR3)
{
VAR4 *VAR5 = &VAR2->VAR6;
VAR7 *VAR8 = &VAR2->VAR8;
int VAR9, VAR10 = 0, VAR11;
const char *VAR12 = NULL;
VAR13 *VAR14 = NULL;
git_pkt_parse_data VAR15 = { 0 };
size_t VAR16;


FUN2(VAR8, VAR16, VAR14) {
FUN3(VAR14);
}
FUN4(VAR8);
VAR14 = NULL;

do {
if (VAR5->VAR17 > 0)
VAR9 = FUN5(&VAR14, &VAR12, VAR5->VAR18, VAR5->VAR17, &VAR15);
else
VAR9 = VAR19;

if (VAR9 < 0 && VAR9 != VAR19)
return VAR9;

if (VAR9 == VAR19) {
if ((VAR11 = FUN6(VAR5)) < 0)
return VAR11;

if (VAR11 == 0) {
FUN7(VAR20, "");
return VAR21;
}

continue;
}

if (FUN8(VAR5, VAR12) < 0)
return -1;

if (VAR14->VAR22 == VAR23) {
FUN7(VAR20, "", ((VAR24 *)VAR14)->VAR9);
FUN9(VAR14);
return -1;
}

if (VAR14->VAR22 != VAR25 && FUN10(VAR8, VAR14) < 0)
return -1;

if (VAR14->VAR22 == VAR25) {
VAR10++;
FUN3(VAR14);
}
} while (VAR10 < VAR3);

return VAR10;
}