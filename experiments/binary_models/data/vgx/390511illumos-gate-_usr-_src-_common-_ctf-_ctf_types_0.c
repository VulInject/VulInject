const char *
FUN1(VAR1 *VAR2, ctf_id_t VAR3, int VAR4)
{
VAR1 *VAR5 = VAR2;
const VAR6 *VAR7;
const VAR8 *VAR9;
ssize_t VAR10;
uint_t VAR11;

if ((VAR3 = FUN2(VAR2, VAR3)) == VAR12)
return (NULL); 

if ((VAR7 = FUN3(&VAR2, VAR3)) == NULL)
return (NULL); 

if (FUN4(VAR2, VAR7->VAR13) != VAR14) {
(void) FUN5(VAR5, VAR15);
return (NULL);
}

(void) FUN6(VAR2, VAR7, NULL, &VAR10);

VAR9 = (const VAR8 *)((VAR16)VAR7 + VAR10);

for (VAR11 = FUN7(VAR2, VAR7->VAR13); VAR11 != 0; VAR11--, VAR9++) {
if (VAR9->VAR17 == VAR4)
return (FUN8(VAR2, VAR9->VAR18));
}

(void) FUN5(VAR5, VAR19);
return (NULL);
}