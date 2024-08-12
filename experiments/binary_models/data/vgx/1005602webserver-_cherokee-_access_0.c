FUN1 (VAR1 *VAR2, char *VAR3)
{
ret_t              VAR4;
char              *VAR5;
char              *VAR6;
VAR7     *VAR8;
cherokee_buffer_t  VAR9 = VAR10;


VAR5 = strpbrk (VAR3, "");
if (VAR5 == NULL) return VAR11;

VAR6 = VAR5 +1;
FUN2 (&VAR9, VAR3, VAR6-VAR3-1);


VAR8 = FUN3();
if (VAR8 == NULL) return VAR11;

FUN4 (FUN5(VAR8), &VAR2->VAR12);


VAR4 = FUN6 (VAR9.VAR13, FUN7(VAR8));
if (VAR4 < VAR14) {
FUN8 (VAR15, VAR9.VAR13);
goto VAR16;
}


VAR4 = FUN9 (VAR6, VAR8);
if (VAR4 < VAR14) {
FUN8 (VAR17, VAR6);
goto VAR16;
}

FUN10 (VAR18, "", VAR9.VAR13, VAR6);

FUN11 (&VAR9);
return VAR14;

VAR16:
FUN11 (&VAR9);
return VAR11;
}