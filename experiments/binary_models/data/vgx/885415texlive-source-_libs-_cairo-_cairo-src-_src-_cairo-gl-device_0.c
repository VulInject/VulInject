FUN1 (void *VAR1)
{
VAR2 *VAR3 = VAR1;

VAR3->FUN2 (VAR3);

while (! FUN3 (&VAR3->VAR4)) {
VAR5 *VAR6;

VAR6 = FUN4 (&VAR3->VAR4,
VAR5,
VAR7);

FUN5 (&VAR6->VAR8.VAR7);
FUN5 (&VAR6->VAR7);
free (VAR6);
}

FUN6 (&VAR3->VAR9);

FUN7 (VAR3->VAR10);
FUN8 (VAR3->VAR11);

free (VAR3->VAR12);

VAR3->FUN9 (VAR3);

free (VAR3);
}