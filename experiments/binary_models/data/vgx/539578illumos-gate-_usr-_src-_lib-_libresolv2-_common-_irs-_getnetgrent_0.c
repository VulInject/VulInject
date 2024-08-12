int
FUN1(const char *VAR1, const char *VAR2,
const char *VAR3, const char *VAR4,
struct VAR5 *VAR5) {
struct VAR6 *VAR7;

if (!VAR5 || !(VAR7 = VAR5->VAR7))
return (0);
return ((*VAR7->VAR8)(VAR7, VAR1, VAR2, VAR3, VAR4));
}