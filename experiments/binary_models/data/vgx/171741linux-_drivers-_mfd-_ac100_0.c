static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
int VAR5;

VAR4 = FUN2(&VAR2->VAR6, sizeof(*VAR4), VAR7);
if (!VAR4)
return -VAR8;

VAR4->VAR6 = &VAR2->VAR6;
FUN3(VAR2, VAR4);

VAR4->VAR9 = FUN4(VAR2, &VAR10);
if (FUN5(VAR4->VAR9)) {
VAR5 = FUN6(VAR4->VAR9);
FUN7(VAR4->VAR6, "", VAR5);
return VAR5;
}

VAR5 = FUN8(VAR4->VAR6, VAR11, VAR12,
FUN9(VAR12), NULL, 0, NULL);
if (VAR5) {
FUN7(VAR4->VAR6, "", VAR5);
return VAR5;
}

return 0;
}

static const struct of_device_id VAR13[] = {
{ .VAR14 = "" },
{ },
};