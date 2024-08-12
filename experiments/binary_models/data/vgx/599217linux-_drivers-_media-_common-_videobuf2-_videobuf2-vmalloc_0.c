static int FUN1(void *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR1;
int VAR6;

if (!VAR5) {
FUN2("");
return -VAR7;
}

VAR6 = FUN3(VAR3, VAR5->VAR8, 0);
if (VAR6) {
FUN2("", VAR6);
return VAR6;
}


FUN4(VAR3, VAR9);


VAR3->VAR10	= &VAR5->VAR11;
VAR3->VAR12		= &VAR13;

VAR3->VAR12->open(VAR3);

return 0;
}





struct VAR14 {
struct sg_table VAR15;
enum dma_data_direction VAR16;
};