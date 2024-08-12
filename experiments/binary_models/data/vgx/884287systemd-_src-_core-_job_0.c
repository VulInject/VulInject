int FUN1(VAR1 *VAR2, VAR3 *VAR4) {
assert(VAR2);
assert(VAR4);

(void) FUN2(VAR4, "", "", VAR2->VAR5);
(void) FUN3(VAR4, "", FUN4(VAR2->VAR6));
(void) FUN3(VAR4, "", FUN5(VAR2->VAR7));
(void) FUN6(VAR4, "", VAR2->VAR8);
(void) FUN6(VAR4, "", VAR2->VAR9);
(void) FUN6(VAR4, "", VAR2->VAR10);

if (VAR2->VAR11 > 0)
(void) FUN7(VAR4, "", VAR2->VAR11);
if (VAR2->VAR12 > 0)
(void) FUN7(VAR4, "", VAR2->VAR12);

FUN8(VAR2->VAR13, VAR4, "");

FUN9(VAR2->VAR14, VAR4);


fputc('', VAR4);
return 0;
}