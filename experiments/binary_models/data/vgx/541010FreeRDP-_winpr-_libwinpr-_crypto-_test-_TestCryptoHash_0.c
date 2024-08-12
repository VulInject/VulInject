static VAR1 FUN1(void)
{
BOOL VAR2 = VAR3;
BYTE VAR4[VAR5] = { 0 };
VAR6* VAR7;

if (!(VAR7 = FUN2()))
{
fprintf(VAR8, "", VAR9);
return VAR3;
}
if (!FUN3(VAR7, VAR10))
{
fprintf(VAR8, "", VAR9);
goto VAR11;
}
if (!FUN4(VAR7, (const VAR12*)VAR13,
FUN5(VAR13, sizeof(VAR13))))
{
fprintf(VAR8, "", VAR9);
goto VAR11;
}
if (!FUN6(VAR7, VAR4, sizeof(VAR4)))
{
fprintf(VAR8, "", VAR9);
goto VAR11;
}

if (memcmp(VAR4, VAR14, VAR15) != 0)
{
char* VAR16;
char* VAR17;

VAR16 = FUN7(VAR4, VAR5, VAR3);
VAR17 = FUN7(VAR14, VAR5, VAR3);

fprintf(VAR8, "", VAR16, VAR17);

free(VAR16);
free(VAR17);

goto VAR11;
}

VAR2 = VAR18;
VAR11:
FUN8(VAR7);
return VAR2;
}

static const char VAR19[] = "";
static const BYTE VAR20[] =
"";
static const BYTE VAR21[] =
"";

static VAR1 FUN9(void)
{
BYTE VAR4[VAR15] = { 0 };
VAR22* VAR7;
BOOL VAR2 = VAR3;

if (!(VAR7 = FUN10()))
{
fprintf(VAR8, "", VAR9);
return VAR3;
}

if (!FUN11(VAR7, VAR23, VAR20, VAR15))
{
fprintf(VAR8, "", VAR9);
goto VAR11;
}
if (!FUN12(VAR7, (const VAR12*)VAR19,
FUN5(VAR19, sizeof(VAR19))))
{
fprintf(VAR8, "", VAR9);
goto VAR11;
}
if (!FUN12(VAR7, (const VAR12*)VAR19,
FUN5(VAR19, sizeof(VAR19))))
{
fprintf(VAR8, "", VAR9);
goto VAR11;
}
if (!FUN13(VAR7, VAR4, sizeof(VAR4)))
{
fprintf(VAR8, "", VAR9);
goto VAR11;
}

if (memcmp(VAR4, VAR21, VAR15) != 0)
{
char* VAR16;
char* VAR17;

VAR16 = FUN7(VAR4, VAR15, VAR3);
VAR17 = FUN7(VAR21, VAR15, VAR3);

fprintf(VAR8, "", VAR16, VAR17);

free(VAR16);
free(VAR17);

goto VAR11;
}

VAR2 = VAR18;
VAR11:
FUN14(VAR7);
return VAR2;
}