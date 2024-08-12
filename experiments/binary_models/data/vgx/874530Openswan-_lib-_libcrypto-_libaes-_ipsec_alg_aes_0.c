FUN1(VAR1,int,0664);
FUN1(VAR2,int,0664);
FUN1(VAR3,int,0664);
FUN1(VAR4,int,0664);
FUN1(VAR5,int,0664);
FUN2(VAR1, "");
FUN2(VAR2, "");
FUN2(VAR3, "");
FUN2(VAR4, "");
FUN2(VAR5, "");



static int VAR6=0;
static int VAR6=9;
FUN2(VAR6, "");
FUN1(VAR6,int,0664);






static int FUN3(struct VAR7 *VAR8,
VAR9 * VAR10, const VAR9 * VAR11,
size_t VAR12)
{
int VAR13;
VAR14 *VAR15=(VAR14*)VAR10;
VAR13=FUN4(VAR15, VAR11, VAR12)!=0? 0: -VAR16;
if (VAR1 > 0)
FUN5(VAR17 ""
"",
VAR13, VAR10, VAR11, (unsigned long int) VAR12);
return VAR13;
}