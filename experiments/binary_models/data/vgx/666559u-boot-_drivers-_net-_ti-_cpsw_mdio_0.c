struct VAR1 *FUN1(const char *VAR2, phys_addr_t VAR3,
u32 VAR4, int VAR5, bool VAR6)
{
struct VAR7 *VAR7;
int VAR8;

VAR7 = calloc(1, sizeof(*VAR7));
if (!VAR7) {
FUN2("");
return NULL;
}

VAR7->VAR9 = FUN3();
if (!VAR7->VAR9) {
FUN2("");
free(VAR7);
return NULL;
}

VAR7->VAR10 = (struct VAR11 *)(VAR12)VAR3;

if (!VAR4 || !VAR5)
VAR7->VAR13 = VAR14;
else
VAR7->VAR13 = (VAR5 / VAR4) - 1;
VAR7->VAR13 &= VAR15;


FUN4(VAR7->VAR13 | VAR16 | VAR17 |
VAR18, &VAR7->VAR10->VAR19);
FUN5(&VAR7->VAR10->VAR19,
VAR20, false, VAR21, true);


FUN6(1);

if (VAR6) {
VAR7->VAR9->read = VAR22;
VAR7->VAR9->write = VAR23;
} else {
VAR7->VAR9->read = VAR24;
VAR7->VAR9->write = VAR25;
}

VAR7->VAR9->VAR26 = VAR7;
snprintf(VAR7->VAR9->VAR2, sizeof(VAR7->VAR9->VAR2), VAR2);

VAR8 = FUN7(VAR7->VAR9);
if (VAR8 < 0) {
FUN2("");
goto VAR27;
}

return VAR7->VAR9;

VAR27:
FUN8(VAR7->VAR9);
free(VAR7);
return NULL;
}