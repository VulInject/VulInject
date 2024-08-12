static int
FUN1(int VAR1, const struct VAR2 *VAR3, size_t VAR4,
struct VAR5 **VAR6)
{
const struct VAR7 *VAR8 = (const struct VAR7 *) VAR3;
int VAR9 = FUN2(VAR8, VAR4);
char *VAR10;

if (VAR9 > 0) {
VAR10 = FUN3("", VAR9, VAR8->VAR11);
} else {

static atomic_count VAR12 = FUN4(0);
VAR10 = FUN3("", FUN5(&VAR12));
}
return FUN6(VAR10, VAR1, 0, VAR13, VAR6);
}