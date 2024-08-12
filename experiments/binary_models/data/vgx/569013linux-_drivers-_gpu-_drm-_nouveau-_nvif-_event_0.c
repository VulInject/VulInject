int
FUN1(struct VAR1 *VAR2, const char *VAR3, u32 VAR4, nvif_event_func VAR5,
bool VAR6, struct VAR7 *VAR8, u32 argc, bool VAR9,
struct VAR10 *VAR11)
{
struct nvif_event_v0 VAR12;
int VAR13;

if (!VAR8) {
VAR8 = &VAR12;
argc = sizeof(VAR12);
}

VAR8->VAR14 = 0;
VAR8->VAR6 = VAR6;

VAR13 = FUN2(VAR2, VAR3 ?: "", VAR4,
VAR15, VAR8, argc, &VAR11->VAR16);
FUN3(VAR13 && VAR9, VAR2, "",
VAR8->VAR6, argc - sizeof(*VAR8));
if (VAR13)
return VAR13;

VAR11->VAR5 = VAR5;
return 0;
}