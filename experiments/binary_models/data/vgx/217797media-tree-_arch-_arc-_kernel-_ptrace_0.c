static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4,
unsigned int VAR5, unsigned int VAR6,
const void *VAR7, const void VAR8 *VAR9)
{
const struct VAR10 *VAR11 = FUN2(VAR2);
int VAR12, VAR13;

if (FUN3(VAR14))
VAR13 = sizeof(struct VAR15);
else
VAR13 = 4;	

VAR12 = FUN4(&VAR5, &VAR6, &VAR7, &VAR9, (void *)&VAR11->VAR16,
0, VAR13);

return VAR12;
}


enum VAR17 {
VAR18,
VAR19,
};