typedef int (*VAR1)(VAR2* VAR3, long VAR4, void* VAR5);



static int FUN1(VAR6* VAR7, per_ctx_cbk_f VAR8,
long VAR9, void* VAR10)
{
int VAR11,VAR12;
int VAR13;

VAR13=FUN2();
for(VAR11 = 0; VAR11 < VAR13; VAR11++) {
if ((VAR12=FUN3(VAR7->VAR3[VAR11], VAR9, VAR10))<0)
return VAR12;
}
return 0;
}