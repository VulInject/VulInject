static int FUN1(const char *VAR1, const char *VAR2)
{
int VAR3;
char *VAR4;
struct VAR5 *VAR6;
struct urlmatch_config VAR7 = VAR8;
struct string_list VAR9 = VAR10;

VAR7.VAR11 = VAR12;
VAR7.VAR13 = NULL;
VAR7.VAR14 = &VAR9;

if (!FUN2(VAR2, &VAR7.VAR2))
FUN3("", VAR7.VAR2.VAR15);

VAR7.VAR16 = FUN4(VAR1);
VAR4 = strchr(VAR7.VAR16, '');
if (VAR4) {
*VAR4 = '';
VAR7.VAR17 = VAR4 + 1;
VAR18 = 0;
} else {
VAR7.VAR17 = NULL;
VAR18 = 1;
}

FUN5(VAR19, &VAR7,
&VAR20, &VAR21);

VAR3 = !VAR9.VAR22;

FUN6(VAR6, &VAR9) {
struct VAR23 *VAR24 = VAR6->VAR25;
struct strbuf VAR26 = VAR27;

FUN7(&VAR26, VAR6->VAR28,
VAR24->VAR29 ? NULL : VAR24->VAR30.VAR26);
fwrite(VAR26.VAR26, 1, VAR26.VAR31, VAR32);
FUN8(&VAR26);

FUN8(&VAR24->VAR30);
}
FUN9(&VAR7);
FUN10(&VAR9, 1);
free(VAR7.VAR2.VAR2);

free((void *)VAR7.VAR16);
return VAR3;
}