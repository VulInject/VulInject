static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR4->VAR7.VAR6;

FUN3(&VAR4->VAR7);
FUN4(VAR6);
return 0;
}

static const struct of_device_id VAR8[] = {
{ .VAR9 = "", },
{},
};