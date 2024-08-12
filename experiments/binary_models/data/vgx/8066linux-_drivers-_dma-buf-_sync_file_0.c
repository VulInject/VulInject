static long FUN1(struct VAR1 *VAR1,
unsigned long VAR2)
{
struct VAR3 *VAR4 = NULL;
struct dma_fence_unwrap VAR5;
struct sync_file_info VAR6;
unsigned int VAR7;
struct VAR8 *VAR9;
int VAR10;
__u32 VAR11;

if (FUN2(&VAR6, (void VAR12 *)VAR2, sizeof(VAR6)))
return -VAR13;

if (VAR6.VAR14 || VAR6.VAR15)
return -VAR16;

VAR7 = 0;
FUN3(VAR9, &VAR5, VAR1->VAR9)
++VAR7;


if (!VAR6.VAR7) {
VAR6.VAR17 = FUN4(VAR1->VAR9);
goto VAR18;
} else {
VAR6.VAR17 = 1;
}

if (VAR6.VAR7 < VAR7)
return -VAR16;

VAR11 = VAR7 * sizeof(*VAR4);
VAR4 = FUN5(VAR11, VAR19);
if (!VAR4)
return -VAR20;

VAR7 = 0;
FUN3(VAR9, &VAR5, VAR1->VAR9) {
int VAR17;

VAR17 = FUN6(VAR9, &VAR4[VAR7++]);
VAR6.VAR17 = VAR6.VAR17 <= 0 ? VAR6.VAR17 : VAR17;
}

if (FUN7(FUN8(VAR6.VAR3), VAR4,
VAR11)) {
VAR10 = -VAR13;
goto VAR21;
}

VAR18:
FUN9(VAR1, VAR6.VAR22, sizeof(VAR6.VAR22));
VAR6.VAR7 = VAR7;

if (FUN7((void VAR12 *)VAR2, &VAR6, sizeof(VAR6)))
VAR10 = -VAR13;
else
VAR10 = 0;

VAR21:
FUN10(VAR4);

return VAR10;
}