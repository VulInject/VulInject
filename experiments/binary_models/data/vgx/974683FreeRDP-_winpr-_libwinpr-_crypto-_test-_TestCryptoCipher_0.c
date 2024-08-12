static VAR1 FUN1()
{
size_t VAR2;
BOOL VAR3 = VAR4;
VAR5* VAR6 = NULL;
VAR7* VAR8;

VAR2 = FUN2(VAR9, sizeof(VAR9));

if (!(VAR6 = (VAR5*)calloc(1, VAR2)))
{
fprintf(VAR10, "" VAR11 "", VAR12, VAR2);
goto VAR13;
}

if ((VAR8 = FUN3(VAR14,
FUN2((const char*)VAR14, sizeof(VAR14)))) == NULL)
{
fprintf(VAR10, "", VAR12);
goto VAR13;
}
VAR3 = FUN4(VAR8, VAR2, (const VAR5*)VAR9, VAR6);
FUN5(VAR8);
if (!VAR3)
{
fprintf(VAR10, "", VAR12);
goto VAR13;
}

if (memcmp(VAR6, VAR15, VAR2) != 0)
{
char* VAR16;
char* VAR17;

VAR16 = FUN6(VAR6, VAR2, VAR4);
VAR17 = FUN6(VAR15, VAR2, VAR4);

fprintf(VAR10, "", VAR12,
VAR16, VAR17);

free(VAR16);
free(VAR17);
goto VAR13;
}

VAR3 = VAR18;

VAR13:
free(VAR6);
return VAR3;
}

static const VAR5* VAR19 =
(VAR5*)""
""
""
"";

static const VAR5* VAR20 =
(VAR5*)""
"";

static const VAR5* VAR21 =
(VAR5*)"";

static VAR1 FUN7()
{
int VAR22;
BYTE VAR23[32] = { 0 };
BYTE VAR24[16] = { 0 };
BYTE VAR25[8] = { 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77 };

VAR22 = FUN8(VAR26, VAR27, VAR25, VAR19,
64, 4, VAR23, VAR24);

if (VAR22 != 32 || memcmp(VAR23, VAR20, 32) || memcmp(VAR24, VAR21, 16))
{
char* VAR28;
char* VAR29;
char* VAR30;
char* VAR31;

VAR28 = FUN6(VAR23, 32, 0);
VAR29 = FUN6(VAR20, 32, 0);

VAR30 = FUN6(VAR24, 16, 0);
VAR31 = FUN6(VAR21, 16, 0);

fprintf(VAR10, "", VAR28, VAR29);
fprintf(VAR10, "", VAR30,
VAR31);

free(VAR28);
free(VAR29);
free(VAR30);
free(VAR31);
}

return VAR18;
}