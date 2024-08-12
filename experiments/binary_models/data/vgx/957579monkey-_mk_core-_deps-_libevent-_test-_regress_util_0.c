static void
FUN1(void *VAR1)
{
int VAR2, VAR3;

for (VAR2 = 0; VAR4[VAR2].VAR5; ++VAR2) {
char VAR6[128];
struct VAR7 *VAR8 = &VAR4[VAR2];
struct in6_addr VAR9;
int VAR10;
VAR10 = FUN2(VAR11, VAR8->VAR5, &VAR9);
if (VAR10 == 0) {
if (VAR8->VAR12 != VAR13)
FUN3(("",
VAR8->VAR5));
continue;
}
if (VAR8->VAR12 == VAR13) {
FUN3(("", VAR8->VAR5));
continue;
}
for (VAR3 = 0; VAR3 < 4; ++VAR3) {

ev_uint32_t VAR14 =
((VAR15)VAR9.VAR16[VAR3*4  ] << 24) |
((VAR15)VAR9.VAR16[VAR3*4+1] << 16) |
((VAR15)VAR9.VAR16[VAR3*4+2] << 8) |
((VAR15)VAR9.VAR16[VAR3*4+3]);
if (VAR14 != VAR8->VAR17[VAR3]) {
FUN3(("", VAR8->VAR5));
continue;
}
}
if (VAR8->VAR12 == VAR18) {
const char *VAR19 = FUN4(VAR11, &VAR9, VAR6,
sizeof(VAR6));
if (!VAR19) {
FUN3(("", VAR8->VAR5));
continue;
}
if (strcmp(VAR6, VAR8->VAR5)) {
FUN3(("", VAR8->VAR5, VAR6));
continue;
}
}

}
FUN5((""));
}

static struct VAR20 {
const char *VAR21;
int VAR22;
const char *VAR5;
int VAR23;
} VAR24[] = {