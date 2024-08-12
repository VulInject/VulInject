static int FUN1(
const char *VAR1,
const char *VAR2,
gid_t VAR3) {

_cleanup_fclose_ VAR4 *VAR5 = NULL;
int VAR6;

assert(VAR1);
assert(VAR2 || FUN2(VAR3));

VAR6 = FUN3("", VAR1, VAR7, "", NULL, &VAR5);
if (VAR6 == -VAR8)
return 0; 
if (VAR6 < 0)
return FUN4(VAR6, "");

for (;;) {
struct VAR9 *VAR10;

VAR6 = FUN5(VAR5, &VAR10);
if (VAR6 < 0)
return FUN4(VAR6, "");
if (VAR6 == 0)
return 0; 

if (VAR2 && FUN6(VAR10->VAR11, VAR2))
return 1; 
if (FUN2(VAR3) && VAR10->VAR12 == VAR3)
return 1; 
}
}