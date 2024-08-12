static bool FUN1(uint32_t VAR1,
struct VAR2 *VAR3)
{
char *VAR4 = NULL;
uint32_t VAR5 = 0;
uint32_t VAR6 = 0;
size_t VAR7 = 0;
enum pkcs11_rc VAR8 = VAR9;

VAR8 = FUN2(VAR3, VAR10,
(void *)&VAR4, &VAR5);
if (VAR8 == VAR11)
return true;
if (VAR8) {
FUN3("");
FUN4(VAR12);
}

for (VAR7 = VAR5 / sizeof(VAR13); VAR7; VAR7--) {
FUN5(&VAR6, VAR4, sizeof(VAR13));
VAR4 += sizeof(VAR13);

if (VAR6 == VAR1)
return true;
}

FUN6("", FUN7(VAR1));
return false;
}