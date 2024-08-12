static struct VAR1 *FUN1(struct VAR2 *VAR3,
bool VAR4, bool VAR5)
{
struct VAR1 *VAR6;
int VAR7;

FUN2(&VAR3->VAR8.VAR9);
if (!VAR5 && FUN3(&VAR3->VAR10)) {
VAR6 = FUN4(-VAR11);
goto VAR12;
}

if (!VAR4) {
VAR6 = NULL;
goto VAR12;
}

VAR7 = FUN5(VAR3->VAR8,
!FUN3(&VAR3->VAR10));
if (VAR7) {
VAR6 = FUN4(VAR7);
goto VAR12;
}

VAR6 = FUN6(&VAR3->VAR10, struct VAR1, VAR13);
FUN7(&VAR6->VAR13);
VAR3->VAR14 -= sizeof(*VAR6) + VAR6->VAR15;

VAR12:
FUN8(&VAR3->VAR8.VAR9);
return VAR6;
}