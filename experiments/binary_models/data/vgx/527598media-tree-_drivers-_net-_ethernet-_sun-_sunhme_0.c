static void FUN1(void)
{
FUN2(&VAR1);

while (VAR2) {
struct VAR3 *VAR4 = VAR2;
struct VAR3 *VAR5 = VAR4->VAR5;

FUN3(VAR4);

VAR2 = VAR5;
}
}


static const struct of_device_id VAR6[];
static int FUN4(struct VAR7 *VAR8)
{
const struct VAR9 *VAR10;
struct VAR11 *VAR12 = VAR8->VAR13.VAR14;
const char *VAR15 = FUN5(VAR12, "", NULL);
int VAR16;

VAR10 = FUN6(VAR6, &VAR8->VAR13);
if (!VAR10)
return -VAR17;
VAR16 = (VAR10->VAR18 != NULL);

if (!VAR16 && VAR15 && !strcmp(VAR15, ""))
VAR16 = 1;

return FUN7(VAR8, VAR16);
}