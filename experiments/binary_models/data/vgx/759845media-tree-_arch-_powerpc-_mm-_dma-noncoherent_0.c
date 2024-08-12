static struct VAR1 *
FUN1(struct VAR1 *VAR2, size_t VAR3, gfp_t VAR4)
{
unsigned long VAR5 = VAR2->VAR6, VAR7 = VAR2->VAR8 - VAR3;
unsigned long VAR9;
struct VAR1 *VAR10, *new;

new = FUN2(sizeof(struct VAR1), VAR4);
if (!new)
goto VAR11;

FUN3(&VAR12, VAR9);

FUN4(VAR10, &VAR2->VAR13, VAR13) {
if ((VAR5 + VAR3) < VAR5)
goto VAR14;
if ((VAR5 + VAR3) <= VAR10->VAR6)
goto VAR15;
VAR5 = VAR10->VAR8;
if (VAR5 > VAR7)
goto VAR14;
}

VAR15:

FUN5(&new->VAR13, &VAR10->VAR13);
new->VAR6 = VAR5;
new->VAR8 = VAR5 + VAR3;

FUN6(&VAR12, VAR9);
return new;

VAR14:
FUN6(&VAR12, VAR9);
FUN7(new);
VAR11:
return NULL;
}