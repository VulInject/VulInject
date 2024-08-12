static int FUN1(struct VAR1 *VAR2, int write,
void *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
char VAR8[VAR9];
struct ctl_table VAR10 = {
.VAR11 = VAR8,
.VAR12 = VAR9,
};
int VAR13;

FUN2(VAR8, VAR9);

VAR13 = FUN3(&VAR10, write, VAR3, VAR5, VAR7);
if (write && VAR13 == 0)
VAR13 = FUN4(VAR8);
return VAR13;
}