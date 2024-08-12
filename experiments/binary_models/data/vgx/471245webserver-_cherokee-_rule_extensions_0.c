FUN1 (VAR1 *VAR2, VAR3 *VAR4)
{
char              *VAR5;
char              *VAR6;
cherokee_buffer_t  VAR7 = VAR8;

FUN2(VAR9, "", VAR2->VAR10);
FUN3 (&VAR7, VAR2);

VAR6 = VAR7.VAR10;
while ((VAR5 = FUN4(&VAR6, "")) != NULL) {
FUN2(VAR9, "", VAR5);
FUN5 (VAR4, VAR5, (void *)VAR11);
}

FUN6 (&VAR7);
return VAR12;
}