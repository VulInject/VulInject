void
FUN1(struct VAR1 *VAR2)
{
int VAR3;

FUN2(VAR4, "", VAR2->VAR5);


if (VAR2->VAR6 && VAR2->VAR7 != -1)
FUN3(VAR2->VAR6->VAR8, VAR2->VAR7);
if (VAR2->VAR9 && VAR2->VAR10 != -1)
FUN3(VAR2->VAR9->VAR8, VAR2->VAR10);

if (VAR2->VAR7 != -1)
close(VAR2->VAR7);
if (VAR2->VAR10 != -1)
close(VAR2->VAR10);

if (VAR2->VAR6)
FUN4(VAR2->VAR6);
if (VAR2->VAR9)
FUN4(VAR2->VAR9);


VAR3 = 0;
if (FUN5(VAR2->VAR5) == -1)
VAR3 = VAR11;
else if (FUN6() == -1) {
VAR3 = VAR11;
FUN7();
}
if (VAR3)
FUN2(VAR12, "", VAR2->VAR5,
strerror(VAR3));

FUN8(VAR2, VAR13);
free(VAR2);
VAR14--;
}