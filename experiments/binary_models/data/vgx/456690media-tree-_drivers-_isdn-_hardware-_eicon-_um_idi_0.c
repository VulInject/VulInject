int FUN1(const VAR1 *VAR2, int VAR3)
{
diva_os_spin_lock_magic_t VAR4;
VAR5 *VAR6 =
(VAR5 *) FUN2(0,
sizeof
(VAR5));

if (!VAR6) {
return (-1);
}
memset(VAR6, 0x00, sizeof(*VAR6));
FUN3(&VAR6->VAR7);

VAR6->VAR2 = *VAR2;
VAR6->VAR3 = VAR3;

FUN4(("",
VAR3, VAR6->VAR2.VAR8, VAR6->VAR2.VAR9, VAR6->VAR2.VAR10));

FUN5(&VAR11, &VAR4, "");
FUN6(&VAR6->VAR12, &VAR13);
FUN7(&VAR11, &VAR4, "");
return (0);
}