typedef int (*VAR1) (void *VAR2);

extern int FUN1(struct VAR3 *VAR4, u8 VAR5,
acpi_handle VAR6, acpi_ec_query_func VAR7,
void *VAR2);

static int FUN2(struct VAR8 *VAR9)
{
int VAR10;
unsigned long long VAR11;
struct VAR12 *VAR13;

if (!VAR9)
return -VAR14;

VAR10 = FUN3(VAR9->VAR6, "", NULL, &VAR11);
if (FUN4(VAR10)) {
FUN5(KERN_ERR VAR15 "");
return -VAR16;
}

strcpy(FUN6(VAR9), VAR17);
strcpy(FUN7(VAR9), VAR18);

VAR13 = FUN8(sizeof(struct VAR12), VAR19);
if (!VAR13)
return -VAR20;
FUN9(&VAR13->VAR21);
FUN10(&VAR13->VAR22);

VAR13->VAR4 = FUN11(VAR9->VAR23);
VAR13->VAR24 = (VAR11 >> 8) & 0xff;
VAR13->VAR5 = VAR11 & 0xff;
VAR9->VAR25 = VAR13;

FUN1(VAR13->VAR4, VAR13->VAR5, NULL, VAR26, VAR13);
FUN5(KERN_INFO VAR15 "",
VAR13->VAR4, VAR13->VAR24, VAR13->VAR5);

return 0;
}