static void FUN1(VAR1 *VAR2)
{
VAR3 *VAR4;
int VAR5;

if (FUN2() && !VAR2->VAR6) {
FUN3("");
return;
}

FUN3("");
FUN3(""
"");

VAR4 = &VAR2->VAR7.VAR8[0];
for (VAR5 = 0; VAR5 < VAR2->VAR9; VAR5++, VAR4++) {
hwaddr VAR10, VAR11;
target_ulong VAR12;
uint64_t VAR13 = (VAR14)VAR4->VAR13;
char VAR15[20];


if (!(VAR4->VAR16 & VAR17)) {
continue;
}

VAR12 = ~(VAR4->VAR13 - 1);
VAR10 = VAR4->VAR18 & VAR12;
VAR11 = VAR4->VAR19 & VAR12;

VAR11 |= (VAR20)(VAR4->VAR19 & 0xF) << 32;
if (VAR13 >= 1 * VAR21) {
snprintf(VAR15, sizeof(VAR15), "" VAR22 "", VAR13 / VAR21);
} else {
snprintf(VAR15, sizeof(VAR15), "" VAR22 "", VAR13 / VAR23);
}
FUN3("" VAR24 "" VAR24 "",
(VAR14)VAR10, (VAR14)VAR11, VAR15, (VAR25)VAR4->VAR26,
VAR4->VAR16, VAR4->VAR27);
}

}