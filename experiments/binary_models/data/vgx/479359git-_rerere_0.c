static int FUN1(struct VAR1 *VAR2,
const char *VAR3, unsigned char *VAR4, const char *VAR5)
{
mmfile_t VAR6[3] = {{NULL}};
mmbuffer_t VAR7 = {NULL, 0};
const struct VAR8 *VAR9;
int VAR10, VAR11, VAR12, VAR13;
struct rerere_io_mem VAR14;
int VAR15 = FUN2(VAR2, VAR3);


VAR11 = strlen(VAR3);
VAR10 = FUN3(VAR2, VAR3, VAR11);
if (0 <= VAR10)
return -1;
VAR10 = -VAR10 - 1;

while (VAR10 < VAR2->VAR16) {
enum object_type VAR17;
unsigned long VAR18;

VAR9 = VAR2->VAR19[VAR10++];
if (FUN4(VAR9) != VAR11 || memcmp(VAR9->VAR20, VAR3, VAR11))
break;
VAR12 = FUN5(VAR9) - 1;
if (!VAR6[VAR12].VAR21) {
VAR6[VAR12].VAR21 = FUN6(&VAR9->VAR22, &VAR17,
&VAR18);
VAR6[VAR12].VAR18 = VAR18;
}
}
for (VAR12 = 0; VAR12 < 3; VAR12++)
if (!VAR6[VAR12].VAR21 && !VAR6[VAR12].VAR18)
VAR6[VAR12].VAR21 = xstrdup("");


FUN7(&VAR7, VAR3, &VAR6[0], NULL,
&VAR6[1], "",
&VAR6[2], "",
VAR2, NULL);
for (VAR12 = 0; VAR12 < 3; VAR12++)
free(VAR6[VAR12].VAR21);

memset(&VAR14, 0, sizeof(VAR14));
VAR14.VAR14.VAR23 = VAR24;
if (VAR5)
VAR14.VAR14.VAR5 = fopen(VAR5, "");
else
VAR14.VAR14.VAR5 = NULL;
FUN8(&VAR14.VAR25, 0);
FUN9(&VAR14.VAR25, VAR7.VAR21, VAR7.VAR18, VAR7.VAR18);


VAR13 = FUN10(VAR4, (struct VAR26 *)&VAR14, VAR15);
FUN11(&VAR14.VAR25);
if (VAR14.VAR14.VAR5)
fclose(VAR14.VAR14.VAR5);
return VAR13;
}