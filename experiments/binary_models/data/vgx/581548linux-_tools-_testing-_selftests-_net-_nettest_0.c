static int FUN1(int VAR1, void *VAR2, socklen_t VAR3, struct VAR4 *VAR5)
{
int VAR6 = strlen(VAR5->VAR7);
struct tcp_md5sig VAR8 = {};
int VAR9 = VAR10;
int VAR11;

VAR8.VAR12 = VAR6;
memcpy(VAR8.VAR13, VAR5->VAR7, VAR6);

if (VAR5->VAR14) {
VAR9 = VAR15;
VAR8.VAR16 |= VAR17;

VAR8.VAR18 = VAR5->VAR14;
VAR2 = &VAR5->VAR19;
}
memcpy(&VAR8.VAR20, VAR2, VAR3);

if ((VAR5->VAR21 && VAR5->VAR22 >= 0) || VAR5->VAR22 >= 1) {
VAR9 = VAR15;
VAR8.VAR16 |= VAR23;

VAR8.VAR24 = VAR5->VAR21;
FUN2("", VAR8.VAR24);
} else {
FUN2("", VAR8.VAR24);
}

VAR11 = FUN3(VAR1, VAR25, VAR9, &VAR8, sizeof(VAR8));
if (VAR11 < 0) {

if (VAR26 == VAR27)
VAR11 = 0;
else
FUN4("");
}

return VAR11;
}