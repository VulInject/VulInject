VAR1
FUN1(VAR2 *VAR3, const VAR4 *VAR5, const char *VAR6,
const char **VAR7, unsigned int VAR8)
{
virStoragePoolPtr VAR9 = NULL;
const char *VAR10 = NULL;
VAR11 *VAR12 = VAR3->VAR13;

FUN2(VAR14 | VAR15, NULL);

if (FUN3(VAR3, VAR5, VAR6, &VAR10) < 0)
return NULL;

if (VAR5->VAR16 && !VAR10)
return NULL;

FUN4(VAR3, VAR17, "",
VAR5->VAR18->VAR7, VAR6, VAR10);

if (VAR7)
*VAR7 = VAR10;


if ((VAR8 & VAR14) && strlen(VAR10) == VAR19-1) {
FUN4(VAR3, VAR20, "",
VAR5->VAR18->VAR7, VAR6);
VAR9 = FUN5(VAR12->VAR21, VAR10);
}

if (!VAR9 && (VAR8 & VAR15)) {
FUN4(VAR3, VAR20, "",
VAR5->VAR18->VAR7, VAR6);
VAR9 = FUN6(VAR12->VAR21, VAR10);
}

if (!VAR9)
FUN7(VAR3, FUN8(""), VAR10);

return VAR9;
}


static const vshCmdInfo VAR22[] = {
{.VAR7 = "",
.VAR23 = FUN9("")
},
{.VAR7 = "",
.VAR23 = FUN9("")
},
{.VAR7 = NULL}
};