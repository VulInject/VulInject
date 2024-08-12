void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3,
const char **VAR4,
int *VAR5,
int VAR6)
{
const char *VAR7 = VAR2->VAR7;
const char *VAR8 = FUN2(VAR2->VAR9 ?
FUN3() : &VAR3->VAR10.VAR11);

*VAR5 = 0; 

fprintf(VAR2->VAR12.VAR13, "", VAR8);
FUN4(VAR2->VAR14);
if (VAR2->VAR15) {
fprintf(VAR2->VAR12.VAR13, "", VAR2->VAR15);
FUN4(VAR2->VAR14);
}
if (VAR2->VAR16 && VAR2->VAR16->VAR17 > 0) {
int VAR18, VAR19;
VAR19 = VAR2->VAR16->VAR17;
fprintf(VAR2->VAR12.VAR13, "", VAR2->VAR16->VAR20[VAR19-1].VAR21);
for (VAR18 = 0; VAR18 < VAR19; VAR18++)
fprintf(VAR2->VAR12.VAR13, "", (VAR18 > 0 ? "" : ""),
VAR2->VAR16->VAR20[VAR18].VAR21);
FUN4(VAR2->VAR14);
}
if (VAR2->VAR22 && VAR6) {
static struct strbuf VAR23 = VAR24;
static struct strbuf VAR25 = VAR24;
struct strbuf VAR26 =  VAR24;
*VAR5 = -1; 

FUN5(&VAR23);
FUN5(&VAR25);

FUN6(&VAR23,
""
""
""
""%VAR27%VAR27\""
""
""
""
""
""
""
"",
VAR7 ? VAR7 : "",
VAR28, VAR2->VAR22,
VAR28, VAR2->VAR22);
VAR7 = VAR23.VAR29;

if (VAR2->VAR30)
FUN6(&VAR26, "", VAR2->VAR17);
else
FUN7(&VAR26, VAR3, VAR2);
FUN6(&VAR25,
""
""
""%VAR27\""
""
""
""%VAR27\"",
VAR28, VAR2->VAR22,
VAR26.VAR29,
VAR2->VAR31 ? "" : "",
VAR26.VAR29);
VAR2->VAR12.VAR32 = VAR25.VAR29;
FUN8(&VAR26);
}
*VAR4 = VAR7;
}