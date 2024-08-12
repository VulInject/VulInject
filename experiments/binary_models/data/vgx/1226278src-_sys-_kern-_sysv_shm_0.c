int FUN1(struct VAR1 *, struct VAR2 *);
int FUN2(struct VAR3 *, struct VAR4 *,
int, int, VAR5 *);
int FUN3(struct VAR3 *, struct VAR4 *,
int, VAR5 *);

int
FUN4(key_t VAR6)
{
struct VAR7 *VAR8;
int VAR9;

for (VAR9 = 0; VAR9 < VAR10.VAR11; VAR9++) {
VAR8 = VAR12[VAR9];
if (VAR8 != NULL && VAR8->VAR13.VAR6 == VAR6)
return (VAR9);
}
return (-1);
}