void FUN1(const VAR1 *VAR2, VAR3 *VAR4,
int VAR5, int VAR6)
{
VAR7 *VAR8 = VAR2->VAR8;
const VAR9   *VAR10  = VAR2->VAR11.VAR12;
const VAR13 *VAR14 = FUN2(VAR8->VAR15);
int VAR16 = VAR14->VAR17;
const int VAR18 = VAR2->VAR19 != VAR20;
if (VAR18) {
VAR6 <<= 1;
VAR5      <<= 1;
}

VAR6 = FUN3(VAR6, VAR8->VAR6 - VAR5);

if (VAR18 && VAR2->VAR21 && !(VAR8->VAR22 & VAR23))
return;

if (VAR8->VAR24) {
int VAR25[VAR26];
int VAR27;

VAR25[0] = VAR5 * VAR10->VAR28[0];
VAR25[1] =
VAR25[2] = (VAR5 >> VAR16) * VAR10->VAR28[1];
for (VAR27 = 3; VAR27 < VAR26; VAR27++)
VAR25[VAR27] = 0;

FUN4();

VAR8->FUN5(VAR8, VAR10, VAR25,
VAR5, VAR2->VAR19, VAR6);
}
}