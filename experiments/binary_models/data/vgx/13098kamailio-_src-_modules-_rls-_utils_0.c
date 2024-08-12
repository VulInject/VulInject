VAR1* FUN1(const VAR1 *VAR2)
{
static str VAR3;
static str VAR4 = {NULL, 0};
static char VAR5[VAR6];

VAR3.VAR7 = VAR5;
if (FUN2((VAR1 *)VAR2, &VAR3) < 0)
{
FUN3("");
return &VAR4;
}

VAR3.VAR7[VAR3.VAR8] = '';
if (FUN4(VAR3.VAR7, VAR9, VAR10) != 0
&& strchr(VAR3.VAR7, '') != NULL)
{
memmove(VAR3.VAR7+VAR10, VAR3.VAR7,
VAR3.VAR8+1);
memcpy(VAR3.VAR7, VAR9, VAR10);
VAR3.VAR8 += VAR10;
}

return &VAR3;
}