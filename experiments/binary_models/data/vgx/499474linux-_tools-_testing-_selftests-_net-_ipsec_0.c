static int FUN1(int VAR1, char *VAR2, size_t VAR3, struct in_addr VAR4,
bool VAR5, int VAR6, in_addr_t VAR7, ping_f VAR8)
{
struct test_desc VAR9;
unsigned int VAR10, VAR11, VAR12 = 0;
int VAR13[2];
char VAR14[VAR15] = {}, VAR16[VAR15] = {};

if (FUN2(VAR4, VAR17, &VAR10, VAR13)) {
FUN3("");
return -1;
}

memset(&VAR9, 0, sizeof(VAR9));
VAR9.VAR18		= VAR19;
VAR9.VAR20.VAR21.VAR22	= VAR10;
memcpy(&VAR9.VAR20.VAR21.VAR23, &VAR4, sizeof(VAR4));

FUN4(VAR1, &VAR9, 0);
if (VAR5) {

FUN5(VAR1, &VAR9, 0);
if (VAR9.VAR18 != VAR19)
return -1;
VAR7 = VAR9.VAR20.VAR21.VAR23;
VAR6 = VAR9.VAR20.VAR21.VAR22;
}

for (VAR11 = 0; VAR11 < VAR24 ; VAR11++) {
struct timespec VAR25 = {
.VAR26 = 0,
.VAR27 = VAR28,
};

VAR12 += !FUN6(VAR13, VAR7, VAR6, VAR2, VAR29);
FUN7(&VAR25, 0);
}

close(VAR13[0]);
close(VAR13[1]);

strncpy(VAR14, FUN8(*(struct VAR30 *)&VAR7), VAR15 - 1);
strncpy(VAR16, FUN8(VAR4), VAR15 - 1);

if (VAR12 < VAR31) {
FUN3("",
VAR5 ? "" : "", VAR16, VAR14,
VAR24 - VAR12, VAR24);
return -1;
}

FUN3("",
VAR5 ? "" : "", VAR16, VAR14,
VAR12, VAR24);

return 0;
}