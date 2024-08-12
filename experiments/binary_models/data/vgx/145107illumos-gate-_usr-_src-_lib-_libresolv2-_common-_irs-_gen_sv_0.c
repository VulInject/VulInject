static struct VAR1 *
FUN1(struct VAR2 *this) {
struct VAR3 *VAR3 = (struct VAR3 *)this->private;

if (!VAR3->VAR4) {
struct VAR1 *VAR4;
VAR4 = (struct VAR1 *)malloc(sizeof *VAR4);
if (!VAR4) {
VAR5 = VAR6;
return (NULL);
}
memset(VAR4, 0, sizeof *VAR4);
FUN2(this, VAR4, free);
}

return (VAR3->VAR4);
}