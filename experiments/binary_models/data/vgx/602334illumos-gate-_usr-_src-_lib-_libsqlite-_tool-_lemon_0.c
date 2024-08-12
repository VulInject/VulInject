struct VAR1 **FUN1()
{
struct VAR1 **VAR2;
int VAR3,VAR4;
if( VAR5==0 ) return 0;
VAR4 = VAR5->VAR6;
VAR2 = (struct VAR1 **)malloc( sizeof(struct VAR1 *)*VAR4 );
if( VAR2 ){
for(VAR3=0; VAR3<VAR4; VAR3++) VAR2[VAR3] = VAR5->VAR7[VAR3].VAR8;
}
return VAR2;
}