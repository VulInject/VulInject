VAR1 *
FUN1(const char *VAR2, const char *VAR3, const char *VAR4,
int VAR5, const char *VAR6)
{
VAR1 *VAR7;
struct stat64 VAR8, VAR9, VAR10, VAR11;
struct nlist VAR12[3] = { { "" }, { "" }, { "" } };

if ((VAR7 = calloc(1, sizeof (VAR1))) == NULL)
return (FUN2(NULL, VAR6, ""));

VAR7->VAR13 = VAR7->VAR14 = VAR7->VAR15 = -1;
VAR7->VAR16 = getenv("");

if ((VAR7->VAR17 = VAR5) != VAR18 && VAR5 != VAR19)
return (FUN2(VAR7, VAR6, "", VAR5));

if (VAR3 == NULL)
VAR3 = "";

if (FUN3(VAR3, &VAR11) == -1)
return (FUN2(VAR7, VAR6, "", VAR3));

if (FUN4(VAR11.VAR20)) {
if (FUN3("", &VAR8) == -1)
return (FUN2(VAR7, VAR6, ""));

if (FUN3("", &VAR9) == -1)
return (FUN2(VAR7, VAR6, ""));

if (FUN3("", &VAR10) == -1)
return (FUN2(VAR7, VAR6, ""));
if (VAR11.VAR21 == VAR8.VAR21 ||
VAR11.VAR21 == VAR9.VAR21 ||
VAR11.VAR21 == VAR10.VAR21) {
char *VAR22 = (VAR11.VAR21 == VAR10.VAR21 ?
"" : "");

if ((VAR7->VAR14 = FUN5(VAR22, VAR5)) == -1)
return (FUN2(VAR7, VAR6, "", VAR22));
if ((VAR7->VAR15 = FUN5("", VAR5)) == -1)
return (FUN2(VAR7, VAR6, ""));
}
} else {
if ((VAR7->VAR13 = FUN5(VAR3, VAR5)) == -1)
return (FUN2(VAR7, VAR6, "", VAR3));
if (pread64(VAR7->VAR13, &VAR7->VAR23,
sizeof (VAR7->VAR23), 0) != sizeof (VAR7->VAR23))
return (FUN2(VAR7, VAR6, ""));
if (VAR7->VAR23.VAR24 != VAR25)
return (FUN2(VAR7, VAR6, ""
"", VAR3,
VAR7->VAR23.VAR24));
if (VAR7->VAR23.VAR26 != VAR27)
return (FUN2(VAR7, VAR6,
"",
VAR27, VAR7->VAR23.VAR26));
if (VAR7->VAR23.VAR28 != VAR29)
return (FUN2(VAR7, VAR6, ""
"", VAR3,
VAR7->VAR23.VAR28, VAR29));

VAR7->VAR30 = (VAR31)VAR11.VAR32;
if (VAR11.VAR32 > VAR33 ||
(VAR7->VAR34 = FUN6(0, VAR7->VAR30,
VAR35, VAR36, VAR7->VAR13, 0)) == VAR37) {
VAR7->VAR30 = VAR7->VAR23.VAR38;
if ((VAR7->VAR34 = FUN6(0, VAR7->VAR30,
VAR35, VAR36, VAR7->VAR13, 0)) ==
VAR37)
return (FUN2(VAR7, VAR6, ""));
}
VAR7->VAR39 = (void *)(VAR7->VAR34 + VAR7->VAR23.VAR40);
VAR7->VAR41 = (void *)(VAR7->VAR34 + VAR7->VAR23.VAR42);
}

if (VAR2 == NULL)
VAR2 = "";

(void) strncpy(VAR7->VAR43, VAR2, VAR44);

if (FUN7(VAR7, VAR12) == -1) {
if (VAR7->VAR13 == -1) {
return (FUN2(VAR7, VAR6, ""
"", VAR2, VAR29));
}

if (FUN8(VAR7, VAR12, VAR6) == -1)
return (NULL);		
}

VAR7->VAR45 = (struct VAR46 *)VAR12[0].VAR47;
VAR7->VAR48 = (VAR49 *)VAR12[1].VAR47;

(void) FUN9(VAR7);
return (VAR7);
}