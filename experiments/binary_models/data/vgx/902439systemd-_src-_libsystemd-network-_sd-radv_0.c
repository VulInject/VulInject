static int FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4, void *VAR5) {
VAR6 *VAR7 = FUN2(VAR5);
struct in6_addr VAR8;
triple_timestamp VAR9;
int VAR10;

assert(VAR2);
assert(VAR7->VAR11);

ssize_t VAR12 = FUN3(VAR3);
if (VAR12 < 0) {
if (FUN4(VAR12) || FUN5(VAR12))
return 0;

FUN6(VAR7, VAR12, "");
return 0;
}

_cleanup_free_ char *VAR13 = FUN7(char, VAR12);
if (!VAR13)
return -VAR14;

VAR10 = FUN8(VAR3, VAR13, VAR12, &VAR8, &VAR9);
if (VAR10 < 0) {
if (FUN4(VAR10) || FUN5(VAR10))
return 0;

switch (VAR10) {
case -VAR15:
FUN9(VAR7, "",
FUN10(&VAR8));
break;

case -VAR16:
FUN9(VAR7, "");
break;

case -VAR17:
FUN9(VAR7, "");
break;

default:
FUN6(VAR7, VAR10, "");
break;
}

return 0;
}

if ((VAR18) VAR12 < sizeof(struct VAR19)) {
FUN9(VAR7, "");
return 0;
}

const char *VAR20 = FUN10(&VAR8);

VAR10 = FUN11(VAR7, &VAR8, VAR7->VAR21);
if (VAR10 < 0)
FUN6(VAR7, VAR10, "", VAR20);
else
FUN9(VAR7, "", VAR20);

return 0;
}