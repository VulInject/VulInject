static int
FUN1(void *data VAR1,
const char *filename VAR1,
void *VAR2)
{
VAR3 *VAR4 = VAR2;

VAR4->VAR5 = true;

return 0;
}


virFileCacheHandlers VAR6 = {
.VAR7 = VAR8,
.VAR9 = VAR10,
.VAR11 = VAR12,
.VAR13 = VAR14
};


struct VAR15 {
VAR16 *VAR17;
const char *VAR18;
const char *VAR9;
const char *VAR19;
bool VAR20;
};
typedef struct _testFileCacheData VAR21;


static int
FUN2(const void *VAR22)
{
int VAR23 = -1;
const VAR21 *VAR24 = VAR22;
VAR25 *VAR26 = NULL;
VAR3 *VAR4 = FUN3(VAR24->VAR17);

VAR4->VAR5 = false;
VAR4->VAR9 = VAR24->VAR9;
VAR4->VAR19 = VAR24->VAR19;

if (!(VAR26 = FUN4(VAR24->VAR17, VAR24->VAR18))) {
fprintf(VAR27, "");
goto VAR28;
}

if (!VAR26->VAR24 || FUN5(VAR24->VAR19, VAR26->VAR24)) {
fprintf(VAR27, "",
VAR24->VAR19, FUN6(VAR26->VAR24));
goto VAR28;
}

if (VAR24->VAR20 != VAR4->VAR5) {
fprintf(VAR27, "",
VAR24->VAR20 ? "" : "",
VAR4->VAR5 ? "" : "");
goto VAR28;
}

VAR23 = 0;

VAR28:
FUN7(VAR26);
return VAR23;
}