void *FUN1(const char *VAR1, qboolean VAR2)
{
void *VAR3 = NULL;

if(!FUN2(VAR1))
{
FUN3(""%VAR4\"", VAR1);
return NULL;
}

if(VAR2)
{
FUN3(""%VAR4\"", VAR1);
VAR3 = FUN4(VAR1);
}

if(!VAR3)
{
const char *VAR5;
char VAR6[VAR7];
int VAR8;

VAR5 = FUN5();

if(!*VAR5)
VAR5 = "";

VAR8 = FUN6(VAR6, sizeof(VAR6), "", VAR5, VAR9, VAR1);
if(VAR8 < sizeof(VAR6))
{
FUN3(""%VAR4\""%VAR4\"", VAR1, VAR5);
VAR3 = FUN4(VAR6);
}
else
{
FUN3(""%VAR4\""%VAR4\"", VAR1, VAR5);
}

if(!VAR3)
{
const char *VAR10 = FUN7("");

if(!VAR10 || !*VAR10)
VAR10 = "";

if(FUN8(VAR5, VAR10))
{
VAR8 = FUN6(VAR6, sizeof(VAR6), "", VAR10, VAR9, VAR1);
if(VAR8 < sizeof(VAR6))
{
FUN3(""%VAR4\""%VAR4\"", VAR1, VAR10);
VAR3 = FUN4(VAR6);
}
else
{
FUN3(""%VAR4\""%VAR4\"", VAR1, VAR10);
}
}

if(!VAR3)
FUN3(""%VAR4\"", VAR1);
}
}

return VAR3;
}