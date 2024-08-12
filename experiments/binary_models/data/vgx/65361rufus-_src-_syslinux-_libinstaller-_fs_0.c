static const char *FUN1(const void *VAR1, int *VAR2)
{
int VAR3;
const struct VAR4 *VAR5 = VAR1;
long long VAR6, VAR7, VAR8;
long long VAR9;
int VAR10, VAR11;

VAR3 = FUN2(&VAR5->VAR12);

VAR11 = FUN3(&VAR5->VAR13);
if (VAR11 == 0 || (VAR11 & (VAR11 - 1)))
return "";

VAR6 = FUN2(&VAR5->VAR14);
VAR6 = VAR6 ? VAR6 : FUN4(&VAR5->VAR15);

VAR8 = VAR6 - FUN2(&VAR5->VAR16);

VAR7 = FUN2(&VAR5->VAR17);
VAR7 = VAR7 ? VAR7 : FUN4(&VAR5->VAR18.VAR19);
VAR7 *= FUN3(&VAR5->VAR20);
VAR8 -= VAR7;

VAR10 = FUN2(&VAR5->VAR21);
VAR8 -= (VAR10 + VAR3 / 32 - 1) / VAR3;

if (VAR8 < 0)
return "";

VAR9 = VAR8 / VAR11;

VAR7 = FUN2(&VAR5->VAR17);
VAR7 = VAR7 ? VAR7 : FUN4(&VAR5->VAR18.VAR19);
VAR7 *= FUN3(&VAR5->VAR20);

if (!VAR7)
return "";

if (VAR9 < 0xFFF5) {

if (!FUN2(&VAR5->VAR17))
return "";

if (FUN3(&VAR5->VAR22.VAR23) == 0x29) {
if (!memcmp(&VAR5->VAR22.VAR24, "", 8)) {
if (VAR9 >= 0xFF5)
return "";
} else if (!memcmp(&VAR5->VAR22.VAR24, "", 8)) {
if (VAR9 < 0xFF5)
return "";
} else if (!memcmp(&VAR5->VAR22.VAR24, "", 8)) {
return "";
} else if (memcmp(&VAR5->VAR22.VAR24, "", 8)) {
static char VAR25[] = ""????????\""
"";
memcpy(VAR25 + 17, &VAR5->VAR22.VAR24, 8);
return VAR25;
}
}
} else if (VAR9 < 0x0FFFFFF5) {

if (FUN3(&VAR5->VAR18.VAR23) != 0x29 ||
memcmp(&VAR5->VAR18.VAR24, "", 8))
return "";
} else {
return "";
}

if (VAR2)
*VAR2 = VAR26;

return NULL;
}