int FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
struct VAR4 *template = NULL;
struct VAR5 *VAR5;
char VAR6[VAR7];
char *VAR8 = NULL;
const char *VAR9 = NULL;
struct VAR10 *VAR10;
int VAR11 = 0;
int VAR12;
u32 VAR13;
int VAR14;


if (!(VAR15 & VAR16) || !VAR2->VAR17 ||
!(VAR3 & VAR18) || (VAR2->VAR19 & VAR20))
return 0;

FUN2(&VAR13);
VAR10 = FUN3(VAR2->VAR17);
VAR12 = FUN4(FUN5(VAR2->VAR17), VAR10,
FUN6(), VAR13, VAR21, VAR22,
&VAR14, &template, NULL, NULL);
VAR12 |= FUN4(FUN5(VAR2->VAR17), VAR10,
FUN6(), VAR13, VAR21,
VAR23, &VAR14, &template, NULL,
NULL);


if (!(VAR12 & (VAR24 | VAR25)))
return 0;

if (VAR12 & VAR25)
VAR11 = -VAR26;

VAR5 = VAR2->VAR17;
VAR9 = FUN7(&VAR5->VAR27, &VAR8, VAR6);
FUN8(VAR28, VAR10, VAR9,
"", "", VAR11, 0);
if (VAR8)
FUN9(VAR8);

return VAR11;
}