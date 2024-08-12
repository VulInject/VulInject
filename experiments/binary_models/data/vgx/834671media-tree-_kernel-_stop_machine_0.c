static int FUN1(const struct VAR1 *VAR1,
cpu_stop_fn_t VAR2, void *VAR3)
{
struct cpu_stop_done VAR4;

FUN2(&VAR4, FUN3(VAR1));
if (!FUN4(VAR1, VAR2, VAR3, &VAR4))
return -VAR5;
FUN5(&VAR4.VAR6);
return VAR4.VAR7;
}


int FUN6(const struct VAR1 *VAR1, cpu_stop_fn_t VAR2, void *VAR3)
{
int VAR7;


FUN7(&VAR8);
VAR7 = FUN1(VAR1, VAR2, VAR3);
FUN8(&VAR8);
return VAR7;
}