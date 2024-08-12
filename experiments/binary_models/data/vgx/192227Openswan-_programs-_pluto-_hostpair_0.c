struct VAR1 *
FUN1(const struct id VAR2
, const struct id VAR3)
{
struct VAR1 *VAR4, *VAR5 = NULL;
char VAR6[VAR7], VAR8[VAR7];
char VAR9[VAR7], VAR10[VAR7];
bool VAR11 = VAR12;
bool VAR13 = VAR12;


if(FUN2(VAR14)) {
strcpy(VAR6,  "");
strcpy(VAR8, "");
if(VAR2.VAR15 == 0) {
FUN3(&VAR2,  VAR6,  sizeof(VAR6));
}
if(VAR3.VAR15 == 0) {
FUN3(&VAR3, VAR8, sizeof(VAR8));
}
}

FUN4(VAR14
, FUN5(""
, VAR6, VAR8));

for (VAR4 = VAR16; VAR4 != NULL; VAR4 = VAR4->VAR17)
{
FUN4(VAR14,
FUN3(&VAR4->VAR18, VAR9, sizeof(VAR9));
FUN3(&VAR4->VAR19,VAR10, sizeof(VAR10));
FUN5(""
, VAR9, VAR10, (VAR4 && VAR4->VAR20) ? VAR4->VAR20->VAR21 : ""));


VAR11 = VAR22;

if(!FUN6(&VAR3, &VAR4->VAR19)) {
FUN7(FUN5(""));
continue;
}

if(VAR4->VAR19.VAR23 == VAR24) {
VAR11 = VAR12;
}

if(FUN8(&VAR2,  &VAR4->VAR18)) {
FUN7(FUN5(""));

} else if(FUN6(&VAR2,  &VAR4->VAR18)) {
VAR11 = VAR12;
FUN7(FUN5(""));
}
if((VAR11==VAR22 && VAR13 == VAR12) || VAR5 == NULL) {
VAR5 = VAR4;
VAR13 = VAR11;
FUN7(FUN5(""));
}

}
FUN4(VAR14,
FUN5("", VAR5 && VAR5->VAR20 ? VAR5->VAR20->VAR21 : ""));
return VAR5;
}