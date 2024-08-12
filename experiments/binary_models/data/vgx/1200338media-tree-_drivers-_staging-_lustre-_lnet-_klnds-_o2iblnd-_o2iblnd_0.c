static struct VAR1 *FUN1(char *VAR2)
{
struct VAR3 *VAR4;
struct VAR1 *VAR5;
__u32 VAR6;
__u32 VAR7;
int VAR8;
int VAR9;

VAR9 = FUN2(VAR2, &VAR8, &VAR7, &VAR6);
if (VAR9) {
FUN3("",
VAR2, VAR9);
return NULL;
}

if (!VAR8) {
FUN3("", VAR2);
return NULL;
}

FUN4(VAR5, sizeof(*VAR5));
if (!VAR5)
return NULL;

VAR4 = FUN5(&VAR10, VAR2);
if (!VAR4) {
VAR5->VAR11 = 0;
} else {
VAR5->VAR11 = !!(VAR4->VAR12 & VAR13);
FUN6(VAR4);
}

FUN7(&VAR5->VAR14);
FUN7(&VAR5->VAR15); 
FUN7(&VAR5->VAR16);
VAR5->VAR17 = VAR7;
strcpy(&VAR5->VAR18[0], VAR2);


VAR9 = FUN8(VAR5);
if (VAR9) {
FUN3("", VAR9);
FUN9(VAR5, sizeof(*VAR5));
return NULL;
}

FUN10(&VAR5->VAR15, &VAR19.VAR20);
return VAR5;
}