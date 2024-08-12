static FUN1(VAR1);

static void *FUN2(struct VAR2 *VAR3, size_t VAR4, VAR5 *VAR6,
gfp_t VAR7, unsigned long VAR8)
{
struct VAR9 *new;
struct VAR10 *this = &VAR1;
unsigned long VAR11;
unsigned long VAR12 = VAR13;
unsigned long VAR14;

if (!VAR13) {
FUN3("", VAR15);
return NULL;
}

new = FUN4(sizeof (*new), VAR16);
if (!new)
return NULL;


new->VAR17 = (VAR4 + 31) & ~31;

FUN5(&VAR18, VAR11);

FUN6 (this, &VAR1) {
struct VAR9 *VAR19 = FUN7(this, struct VAR9, VAR20);
VAR14 = VAR19->VAR21;

if (VAR14 - VAR12 >= VAR4)
goto VAR22;

VAR12 = VAR19->VAR21 + VAR19->VAR17;
}

VAR14 = VAR23;
this = &VAR1;

if (VAR14 - VAR12 >= VAR4) {
VAR22:
new->VAR21 = VAR12;
FUN8(&new->VAR20, this);
FUN9(&VAR18, VAR11);

*VAR6 = VAR12;
return (void *)VAR12;
}

FUN10(new);
FUN9(&VAR18, VAR11);
return NULL;
}