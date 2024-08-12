static struct VAR1 *FUN1(struct VAR2 *VAR3, const char *VAR4,
struct VAR1 *(*VAR5)(struct VAR2 *VAR3, const char *VAR4),
int (*VAR6)(struct VAR1 *VAR1),
void (*VAR7)(struct VAR1 *VAR1))
{
struct VAR8 *VAR9;
struct VAR1 *VAR1;
int VAR10;

VAR9 = FUN2(VAR11, sizeof(*VAR9), VAR12);
if (!VAR9)
return FUN3(-VAR13);

VAR1 = FUN4(VAR3, VAR4);
if (FUN5(VAR1)) {
VAR10 = FUN6(VAR1);
goto VAR14;
}

if (VAR6) {
VAR10 = FUN7(VAR1);
if (VAR10)
goto VAR15;
}

VAR9->VAR1 = VAR1;
VAR9->VAR7 = VAR7;

FUN8(VAR3, VAR9);

return VAR1;

VAR15:

FUN9(VAR1);
VAR14:

FUN10(VAR9);
return FUN3(VAR10);
}