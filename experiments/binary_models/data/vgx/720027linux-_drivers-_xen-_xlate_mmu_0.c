typedef void (*VAR1)(unsigned long VAR2, void *VAR3);


static void FUN1(struct VAR4 **VAR5, unsigned VAR6,
xen_gfn_fn_t VAR7, void *VAR3)
{
unsigned long VAR8 = 0;
struct VAR4 *VAR4;
int VAR9;

for (VAR9 = 0; VAR9 < VAR6; VAR9++) {
if ((VAR9 % VAR10) == 0) {
VAR4 = VAR5[VAR9 / VAR10];
VAR8 = FUN2(VAR4);
}
FUN3(FUN4(VAR8++), VAR3);
}
}