static int FUN1(struct VAR1 *VAR2,
enum cgroup_bpf_attach_type VAR3)
{
struct VAR4 *VAR5;
int VAR6;


FUN2(VAR5, &VAR2->VAR7) {
struct VAR1 *VAR8 = FUN3(VAR5, struct VAR1, VAR7);

if (FUN4(&VAR8->VAR9.VAR10))
continue;

VAR6 = FUN5(VAR8, VAR3, &VAR8->VAR9.VAR11);
if (VAR6)
goto VAR12;
}


FUN2(VAR5, &VAR2->VAR7) {
struct VAR1 *VAR8 = FUN3(VAR5, struct VAR1, VAR7);

if (FUN4(&VAR8->VAR9.VAR10)) {
if (FUN6(VAR8->VAR9.VAR11)) {
FUN7(VAR8->VAR9.VAR11);
VAR8->VAR9.VAR11 = NULL;
}
continue;
}

FUN8(VAR8, VAR3, VAR8->VAR9.VAR11);
VAR8->VAR9.VAR11 = NULL;
}

return 0;

VAR12:

FUN2(VAR5, &VAR2->VAR7) {
struct VAR1 *VAR8 = FUN3(VAR5, struct VAR1, VAR7);

FUN7(VAR8->VAR9.VAR11);
VAR8->VAR9.VAR11 = NULL;
}

return VAR6;
}