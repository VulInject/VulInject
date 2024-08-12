static int FUN1(struct VAR1 *VAR2, char *VAR3,
struct VAR4 *VAR5)
{
int VAR6, VAR7;
struct VAR8 *VAR9;
bool VAR10 = false;

VAR7 = sizeof(*VAR9);

VAR9 = calloc(1, VAR7);
if (!VAR9)
return -VAR11;

FUN2("", VAR12,
VAR9);

VAR6 = FUN3(VAR2, 0, (VAR13 *)VAR9, VAR7);
if (VAR6) {
FUN2("", VAR12);
free(VAR9);
return VAR6;
}

FUN4((char *)VAR9, VAR7);


FUN5(VAR5->VAR3, VAR9->VAR14,
sizeof(VAR9->VAR14) + 1);
FUN5(VAR5->VAR15, VAR9->VAR16,
sizeof(VAR9->VAR16) + 1);
FUN5(VAR5->VAR17, VAR9->VAR18,
sizeof(VAR9->VAR18) + 1);

VAR10 = FUN6((const VAR19 *)VAR9->VAR20);
if (VAR10)
memcpy(VAR5->VAR21[0], VAR9->VAR20, VAR22);

FUN7("", VAR3);
FUN7("", VAR5->VAR3);
FUN7("", VAR5->VAR15);
FUN7("", VAR5->VAR17);

if (VAR10)
FUN7("", VAR5->VAR21);

VAR5->VAR23 = VAR24;

free(VAR9);

return VAR6;
}