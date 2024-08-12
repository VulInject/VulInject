VAR1
FUN1(struct VAR2* VAR3, int VAR4)
{
struct VAR5* VAR6 = (struct VAR5*)VAR3->VAR7[VAR4];
if(!VAR6)
return 0;
return sizeof(*VAR6) + FUN2(VAR6->VAR8);
}


static struct module_func_block VAR9 = {
"",
&VAR10, &VAR11, &VAR12,
&VAR13, &VAR14, &VAR15
};