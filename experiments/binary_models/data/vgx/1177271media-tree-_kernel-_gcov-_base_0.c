static int FUN1(struct VAR1 *VAR2, unsigned long VAR3,
void *VAR4)
{
struct VAR5 *VAR6 = VAR4;
struct VAR7 *VAR8 = NULL;
struct VAR7 *VAR9 = NULL;

if (VAR3 != VAR10)
return VAR11;
FUN2(&VAR12);


while ((VAR8 = FUN3(VAR8))) {
if (FUN4((unsigned long)VAR8, VAR6)) {
FUN5(VAR9, VAR8);
if (VAR13)
FUN6(VAR14, VAR8);
} else
VAR9 = VAR8;
}

FUN7(&VAR12);

return VAR11;
}

static struct notifier_block VAR15 = {
.VAR16	= VAR17,
};