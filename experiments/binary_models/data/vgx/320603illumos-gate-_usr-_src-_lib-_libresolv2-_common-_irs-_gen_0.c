static struct VAR1 *
FUN1(struct VAR1 *VAR2) {
struct VAR1 *VAR3 = VAR2->VAR3;

FUN2(VAR2, sizeof *VAR2);
return (VAR3);
}