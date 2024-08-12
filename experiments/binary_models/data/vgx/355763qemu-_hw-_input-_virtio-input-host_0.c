static void FUN1(VAR1 *VAR2,
int VAR3, int VAR4)
{
virtio_input_config VAR5;
int VAR6, VAR7, VAR8 = 0;

memset(&VAR5, 0, sizeof(VAR5));
VAR6 = FUN2(VAR2->VAR9, FUN3(VAR3, VAR4/8), VAR5.VAR10.VAR11);
if (VAR6 < 0) {
return;
}

for (VAR7 = 0; VAR7 < VAR4/8; VAR7++) {
if (VAR5.VAR10.VAR11[VAR7]) {
VAR8 = VAR7+1;
}
}
if (VAR8 == 0) {
return;
}

VAR5.VAR12 = VAR13;
VAR5.VAR14 = VAR3;
VAR5.VAR8   = VAR8;
FUN4(FUN5(VAR2), &VAR5);
}