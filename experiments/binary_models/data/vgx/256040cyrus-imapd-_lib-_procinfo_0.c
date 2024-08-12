static struct VAR1 *
FUN1(VAR2 *VAR3, pid_t VAR4, const char *VAR5,
const char *VAR6, const char *VAR7, const char *VAR8,
const char *VAR9)
{
struct VAR1 *VAR10;

if (VAR3->VAR11 >= VAR3->VAR12) {
VAR3->VAR12 += 100;
VAR3->VAR13 = xrealloc(VAR3->VAR13,
VAR3->VAR12 * sizeof(struct VAR1 *));
}

VAR10 = VAR3->VAR13[VAR3->VAR11++] =
(struct VAR1 *) FUN2(sizeof(struct VAR1));
VAR10->VAR4 = VAR4;
VAR10->VAR5 = FUN3(VAR5);
VAR10->VAR6 = FUN3(VAR6);
VAR10->VAR7 = FUN3(VAR7);
VAR10->VAR8 = FUN3(VAR8);
VAR10->VAR9 = FUN3(VAR9);

return VAR10;
}