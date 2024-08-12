static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VarlinkMethodFlags VAR5, void *VAR6) {

static const JsonDispatch VAR7[] = {
{ "",      VAR8, VAR9,      FUN2(VAR10, VAR11),       0         },
{ "", VAR12,   VAR13, FUN2(VAR10, VAR14), VAR15 },
{ "",  VAR12,   VAR13, FUN2(VAR10, VAR16),   0         },
{}
};

FUN3(VAR17) VAR3 *VAR18 = NULL;
LookupParameters VAR19 = {
.VAR11 = VAR20,
};
_cleanup_free_ char *VAR21 = NULL;
uid_t VAR22 = VAR20, VAR11;
VAR23 *VAR24 = FUN4(VAR6);
const char *VAR25;
int VAR26;

assert(VAR4);

VAR26 = FUN5(VAR4, VAR7, NULL, 0, &VAR19);
if (VAR26 < 0)
return VAR26;

if (!FUN6(VAR19.VAR16, ""))
return FUN7(VAR2, "", NULL);

if (FUN8(VAR19.VAR11))
VAR26 = FUN9(VAR24, VAR19.VAR11, &VAR21);
else if (VAR19.VAR14)
VAR26 = FUN10(VAR24, VAR19.VAR14, &VAR22);
else {
VAR27 *VAR28;

FUN11(VAR28, VAR24->VAR29) {
VAR26 = FUN12(VAR28, &VAR11);
if (VAR26 == -VAR30) 
continue;
if (VAR26 < 0)
return VAR26;

if (!FUN13(&VAR19, VAR28->VAR31, VAR11))
continue;

if (VAR18) {
VAR26 = FUN14(VAR2, VAR18);
if (VAR26 < 0)
return VAR26;

VAR18 = FUN15(VAR18);
}

VAR26 = FUN16(VAR28->VAR31, VAR11, &VAR18);
if (VAR26 < 0)
return VAR26;
}

if (!VAR18)
return FUN7(VAR2, "", NULL);

return FUN17(VAR2, VAR18);
}
if (VAR26 == -VAR32)
return FUN7(VAR2, "", NULL);
if (VAR26 < 0)
return VAR26;

VAR11 = FUN8(VAR22) ? VAR22 : VAR19.VAR11;
VAR25 = VAR21 ?: VAR19.VAR14;

if (!FUN13(&VAR19, VAR25, VAR11))
return FUN7(VAR2, "", NULL);

VAR26 = FUN16(VAR25, VAR11, &VAR18);
if (VAR26 < 0)
return VAR26;

return FUN17(VAR2, VAR18);
}