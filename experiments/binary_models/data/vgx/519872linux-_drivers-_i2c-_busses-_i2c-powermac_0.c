static bool FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
u32 VAR5, char *VAR6, int VAR7)
{
char VAR8[16];




if (FUN2(VAR4, VAR8, sizeof(VAR8)) >= 0) {
snprintf(VAR6, VAR7, "", VAR8);
return true;
}


if (FUN3(VAR4, "")) {

if (VAR5 == 0x34) {
snprintf(VAR6, VAR7, "");
return true;
} else if (VAR5 == 0x35) {
snprintf(VAR6, VAR7, "");
return true;
}
}

FUN4(&VAR2->VAR9, "", VAR4);
return false;
}