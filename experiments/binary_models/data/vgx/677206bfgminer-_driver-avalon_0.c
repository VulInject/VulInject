static int FUN1(int VAR1, struct VAR2 *VAR3)
{
struct avalon_task VAR4;
VAR5 *VAR6;
int VAR7, VAR8 = 0;
struct timespec VAR9;

FUN2(&VAR4, 1, 0,
VAR10,
VAR11,
VAR12,
VAR13,
0, 0,
VAR14);
VAR7 = FUN3(VAR1, &VAR4, NULL);
if (VAR7 == VAR15)
return 1;

FUN4(VAR1, VAR3);

VAR6 = (VAR5 *)VAR3;

if (VAR6[0] == 0)
VAR6 = (VAR5  *)(VAR3 + 1);
if (VAR6[0] == 0xAA && VAR6[1] == 0x55 &&
VAR6[2] == 0xAA && VAR6[3] == 0x55) {
for (VAR8 = 4; VAR8 < 11; VAR8++)
if (VAR6[VAR8] != 0)
break;
}

VAR9.VAR16 = 0;
VAR9.VAR17 = VAR18;
FUN5(&VAR9, NULL);

if (VAR8 != 11) {
FUN6(VAR19, ""
"",
VAR8, VAR6[0], VAR6[1], VAR6[2], VAR6[3]);

} else
FUN6(VAR20, "");
return 0;
}