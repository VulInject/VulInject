static int
FUN1(VAR1* VAR2, VAR3* VAR4, tmsize_t VAR5, uint16 VAR6)
{
static const char VAR7[] = "";
VAR8 *VAR9 = FUN2(VAR2);
VAR3 *VAR10;
tmsize_t VAR11 = VAR5, VAR12;
unsigned char* VAR13;
int VAR14;

assert(VAR9 != NULL);
assert(VAR9->VAR15 != NULL);
assert(VAR9->VAR16 != NULL);


VAR10 = (VAR3*) FUN3(VAR5);
if( VAR10 == NULL )
{
FUN4(VAR2->VAR17, VAR7, 
"" VAR18 "",
VAR5 );
return 0;
}
memcpy( VAR10, VAR4, VAR5 );
VAR13 = VAR10;

VAR12 = VAR9->VAR12;
assert(VAR12 > 0);
assert((VAR5%VAR12)==0);
while (VAR11 > 0) {
(*VAR9->VAR15)(VAR2, VAR13, VAR12);
VAR11 -= VAR12;
VAR13 += VAR12;
}
VAR14 = (*VAR9->VAR16)(VAR2, VAR10, VAR5, VAR6);

FUN5( VAR10 );

return VAR14;
}