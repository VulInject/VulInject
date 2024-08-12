VAR1 FUN1(const char *VAR2, VAR3 *VAR4)
{
union {
unsigned *VAR5;
void *VAR6;
} VAR7;
qboolean VAR8 = VAR9;
int VAR10;

VAR10 = VAR11.FUN2(VAR2, (void **) &VAR7.VAR6);
if(!VAR7.VAR5)
{
VAR4->VAR12 = VAR13;
return 0;
}

VAR8 = FUN3(VAR4, VAR7.VAR5, VAR10, VAR2);

VAR11.FUN4 (VAR7.VAR6);

if(!VAR8)
{
VAR11.FUN5(VAR14,"", VAR2);
VAR4->VAR12 = VAR13;
return 0;
}

return VAR4->VAR15;
}


typedef struct
{
char *VAR16;
FUN6 (*VAR17)( const char *, VAR3 * );
} VAR18;