static void FUN1(VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct virtio_gpu_resource_attach_backing VAR5;
struct VAR6 *VAR7;
uint32_t VAR8;
int VAR9;

FUN2(VAR5);
FUN3(VAR5.VAR10);

VAR9 = FUN4(VAR2, VAR5.VAR11, sizeof(VAR5),
VAR4, NULL, &VAR7, &VAR8);
if (VAR9 != 0) {
VAR4->VAR12 = VAR13;
return;
}

VAR9 = FUN5(VAR5.VAR10,
VAR7, VAR8);

if (VAR9 != 0)
FUN6(VAR2, VAR7, VAR8);
}