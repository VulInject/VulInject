static struct VAR1 *FUN1(unsigned long VAR2, unsigned long VAR3,
unsigned long VAR4, int VAR5)
{
struct VAR1 *VAR6;
unsigned long VAR7;
void *VAR8 = NULL;
int VAR9;

FUN2(&VAR10, VAR7);

if (VAR5 == VAR11) {
VAR9 = FUN3();
if (FUN4(VAR9 < 0)) {
VAR8 = FUN5(VAR9);
goto VAR12;
}
} else {
if (FUN6(VAR5, VAR13)) {
VAR8 = FUN5(-VAR14);
goto VAR12;
}

VAR9 = VAR5;
}

FUN7(&VAR10, VAR7);

VAR6 = &VAR15[VAR9];

memset(VAR6, 0, sizeof(struct VAR1));

FUN8(&VAR6->VAR16);

VAR6->VAR2	= VAR2;
VAR6->VAR3	= VAR3;
VAR6->VAR4	= VAR4;
VAR6->VAR5	= VAR9;

return VAR6;

VAR12:
FUN7(&VAR10, VAR7);
return VAR8;
}