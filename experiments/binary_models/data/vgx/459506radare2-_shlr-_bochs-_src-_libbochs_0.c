void FUN1(VAR1* VAR2) {
VAR2->VAR3 = false;
FUN2 (VAR2->VAR4);
FUN2 (VAR2->VAR5);
FUN2 (VAR2->VAR6);
FUN2 (VAR2->VAR7);
FUN2 (VAR2->VAR8);
FUN3 (VAR2->VAR9.VAR10,0);
free (VAR2->VAR11);
free (VAR12);
close (VAR2->VAR4);
close (VAR2->VAR7);
FUN4 (VAR2->VAR13, VAR14);
FUN5 (VAR2->VAR11);
FUN5 (VAR12);
}