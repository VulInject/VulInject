int FUN1(struct VAR1 *VAR2, const char *VAR3, char *VAR4,
VAR5 *VAR6)
{
char VAR7[VAR8];
efi_char16_t VAR9[VAR8];
struct VAR10 *VAR11;
u32 VAR12;
int VAR13, VAR14, VAR15;
unsigned long VAR16;

if (VAR2 && FUN2(VAR2))
VAR2 = &FUN2(VAR2)->VAR2;

if (VAR2)
VAR15 = snprintf(VAR7, sizeof(VAR7), "", FUN3(VAR2), VAR3);
else
VAR15 = snprintf(VAR7, sizeof(VAR7), "", VAR3);

if (VAR15 < 0 || VAR15 >= sizeof(VAR7) - 1)
return -VAR17;


for (VAR13 = 0; VAR13 < FUN4(VAR18); VAR13++) {
if (FUN5(VAR19, VAR18[VAR13].VAR20)) {
for (VAR14 = 0; VAR18[VAR13].VAR21[VAR14].VAR22; VAR14++) {
size_t VAR23;
const struct VAR24 *VAR25;

VAR25 = &VAR18[VAR13].VAR21[VAR14];
VAR23 = strlen(VAR25->VAR26);

if (strcmp(VAR7, VAR25->VAR22))
continue;
if (VAR23 > *VAR6 - 1)
return -VAR27;

memcpy(VAR4, VAR25->VAR26, FUN6(*VAR6, VAR23+1));
VAR4[*VAR6-1] = 0;
*VAR6 = VAR23;

return 0;
}
}
}


memset(VAR9, 0, sizeof(VAR9));
for (VAR13 = 0; VAR13 < sizeof(VAR7) && VAR7[VAR13]; VAR13++)
VAR9[VAR13] = VAR7[VAR13];


if (*VAR6 > VAR28)
return -VAR17;


VAR11 = FUN7(sizeof(*VAR11), VAR29);
if (!VAR11)
return -VAR30;
memcpy(&VAR11->VAR3.VAR31, VAR9, sizeof(VAR9));
VAR11->VAR3.VAR32 = VAR33;

VAR16 = *VAR6;
VAR15 = FUN8(VAR11, &VAR12, &VAR16, VAR4);

FUN9(VAR11);
*VAR6 = VAR16;

if (VAR15)
FUN10(VAR2, "", VAR7);

return VAR15;
}